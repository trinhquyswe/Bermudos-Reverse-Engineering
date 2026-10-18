'use strict';
// Step 1 restructure: wrap reconstructed Assembly-CSharp files in their real
// `namespace { }` block and add a curated set of `using` directives.
//
// The namespace comes from the `// Namespace: X` comment the decompiler emitted.
// The using set is detected from the real (non-comment) code lines and covers the
// libraries actually present in this project (verified from Assets/Scripts):
//   UnityEngine (+AI/Audio/UI/EventSystems/Events/SceneManagement/Tilemaps),
//   Unity.Mathematics, TMPro, DG.Tweening, Cinemachine, Esper.ESave,
//   NavMeshPlus.Components, Unity.InputSystem, BehaviorDesigner.Runtime[.Tasks].
//
// BehaviorDesigner task files resolve Task/Conditional/Action/TaskStatus/TaskCategory
// and Shared* through enclosing-namespace lookup, so they only get UnityEngine etc.
// (never `using System;`, which would make bare `Action` ambiguous).
//
// Usage: node add_usings.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');

// ordered: [text, predicate(codeText)]
const RULES = [
	['using System.Collections;', t => /\bIEnumerator\b|\bIEnumerable\b/.test(t)],
	['using System.Collections.Generic;', t => /\b(List|Dictionary|HashSet|Queue|Stack|IList|IDictionary|ICollection|KeyValuePair|IEnumerator|IEnumerable)\s*</.test(t)],
	['using System.Text;', t => /\bStringBuilder\b/.test(t)],
	['using System.Linq;', t => /\.(ToList|ToArray|Where|Select|FirstOrDefault|OrderBy|OrderByDescending|Any|All|Sum|Count|Distinct|Concat)\s*\(/.test(t)],
	['using UnityEngine;', () => true],
	['using UnityEngine.AI;', t => /\b(NavMeshAgent|NavMeshPath|NavMeshHit|NavMeshObstacle|NavMeshQueryFilter)\b/.test(t)],
	['using UnityEngine.Audio;', t => /\b(AudioMixer|AudioMixerGroup|AudioMixerSnapshot)\b/.test(t)],
	['using UnityEngine.EventSystems;', t => /\b(EventSystem|BaseEventData|PointerEventData|IPointer\w+|IDragHandler|IBeginDragHandler|IEndDragHandler|IDropHandler|IScrollHandler|IUpdateSelectedHandler|ISelectHandler|IDeselectHandler|IMoveHandler|ISubmitHandler|ICancelHandler)\b/.test(t)],
	['using UnityEngine.Events;', t => /\b(UnityEvent|UnityAction)\b/.test(t)],
	['using UnityEngine.Serialization;', t => /\bFormerlySerializedAs\b/.test(t)],
	['using UnityEngine.SceneManagement;', t => /\bSceneManager\b|\bLoadScene\b/.test(t)],
	['using UnityEngine.Tilemaps;', t => /\b(Tilemap|TileBase)\b/.test(t)],
	['using UnityEngine.UI;', t => /\b(Text|Image|Button|Slider|Scrollbar|Toggle|RawImage|ScrollRect|Dropdown|InputField|Graphic|Mask|RectMask2D|CanvasScaler|Selectable|Outline|Shadow|LayoutElement|GridLayoutGroup|HorizontalLayoutGroup|VerticalLayoutGroup|ContentSizeFitter|AspectRatioFitter|CanvasGroup)\b/.test(t)],
	['using Unity.Mathematics;', t => /\b(math|float2|float3|float4|int2|int3|quaternion|bool2|double2)\b/.test(t)],
	['using TMPro;', t => /\b(TextMeshPro|TextMeshProUGUI|TMP_Text|TMP_InputField|TMP_Dropdown|TMP_FontAsset|TMP_SpriteAsset|TMP_ColorGradient|TMP_Settings)\b/.test(t)],
	['using DG.Tweening;', t => /\b(Tween|Tweener|Sequence|DOTween|Ease|DOVirtual)\b/.test(t)],
	['using Cinemachine;', t => /\bCinemachine\w*\b/.test(t)],
	['using Esper.ESave;', t => /\b(SaveFile|ESave|SavableObject|SavableTransform|SaveFileSetup|ESaveHelperExtensions)\b/.test(t)],
	['using NavMeshPlus.Components;', t => /\bNavMeshSurface\b/.test(t)],
	['using UnityEngine.InputSystem;', t => /\b(InputAction|InputActionAsset|InputActionMap|InputActionReference|PlayerInput)\b/.test(t)],
];

// BehaviorDesigner task files must not import these: BD defines its own Sequence/Parallel/
// RandomSequence/Task/Action/etc. and a foreign namespace would make those names ambiguous.
const BD_SKIP = new Set([
	'using System.Text;', 'using System.Linq;', 'using Unity.Mathematics;', 'using TMPro;',
	'using DG.Tweening;', 'using Cinemachine;', 'using Esper.ESave;', 'using NavMeshPlus.Components;',
	'using UnityEngine.InputSystem;', 'using UnityEngine.SceneManagement;', 'using UnityEngine.Tilemaps;',
	'using UnityEngine.UI;',
]);

function detectUsings(code, ns) {
	const isBD = ns === 'BehaviorDesigner' || ns.startsWith('BehaviorDesigner.');
	const out = [];
	if (!isBD) out.push('using System;'); // game code uses Action<>, EventArgs, [Serializable], ...
	for (const [text, test] of RULES) {
		if (isBD && BD_SKIP.has(text)) continue;
		if (test(code)) out.push(text);
	}
	if (!isBD) {
		if (/\b(BehaviorTree|SharedVariable|SharedBool|SharedFloat|SharedInt|SharedString|SharedVector2|SharedVector3|SharedGameObject|SharedTransform|ExternalBehavior)\b/.test(code))
			out.push('using BehaviorDesigner.Runtime;');
		if (/\b(Task|Conditional|TaskStatus|TaskCategory|TaskDescription|TaskIcon)\b/.test(code))
			out.push('using BehaviorDesigner.Runtime.Tasks;');
	}
	// defuse Object / Random ambiguity between `using System;` and `using UnityEngine;`
	const aliases = [];
	if (!isBD) {
		if (/\bObject\b/.test(code)) aliases.push('using Object = UnityEngine.Object;');
		if (/\bRandom\b/.test(code)) aliases.push('using Random = UnityEngine.Random;');
	}
	// `Action` is ambiguous once both System and BehaviorDesigner.Runtime.Tasks are imported
	if (out.includes('using System;') && out.includes('using BehaviorDesigner.Runtime.Tasks;') && /\bAction\b/.test(code))
		aliases.push('using Action = System.Action;');
	return { usings: out, aliases };
}

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(DIR);

const stats = { processed: 0, wrapped: 0, global: 0, skippedAlreadyDone: 0, untouched: 0 };
let dryShown = 0;

for (const f of files) {
	let src = fs.readFileSync(f, 'utf8');
	if (src.charCodeAt(0) === 0xFEFF) src = src.slice(1);
	if (!/Reconstructed from IL2CPP metadata/.test(src.slice(0, 600))) { stats.untouched++; continue; }

	if (/^using\s/m.test(src)) { stats.skippedAlreadyDone++; continue; } // already tooled

	const eol = src.includes('\r\n') ? '\r\n' : '\n';
	const lines = src.split(/\r?\n/);
	let nsIdx = lines.findIndex(l => l.startsWith('// Namespace:'));
	let ns, nsComment, bodyStart;
	if (nsIdx >= 0) {
		ns = lines[nsIdx].slice('// Namespace:'.length).trim();
		nsComment = lines[nsIdx];
		bodyStart = nsIdx + 1;
	} else {
		// dump.cs prints `// Namespace:` once per contiguous group; recover it from the
		// folder path (AssetRipper mirrors namespaces onto folders).
		const rel = path.relative(DIR, path.dirname(f)).replace(/\\/g, '/');
		ns = rel.split('/').filter(Boolean).join('.');
		nsComment = '// Namespace: ' + ns;
		bodyStart = 3; // right after the 3-line header
	}
	const body = lines.slice(bodyStart);
	const header = lines.slice(0, nsIdx >= 0 ? nsIdx : 3).filter(l => l.trim() !== '');
	while (body.length && body[0].trim() === '') body.shift();
	while (body.length && body[body.length - 1].trim() === '') body.pop();

	const code = body.filter(l => !l.trimStart().startsWith('//')).join('\n');
	const { usings, aliases } = detectUsings(code, ns);

	const out = [];
	out.push(...header);
	if (usings.length || aliases.length) {
		out.push('');
		out.push(...usings);
		if (aliases.length) { out.push(''); out.push(...aliases); }
	}
	out.push('');
	out.push(nsComment);
	if (ns) {
		out.push(`namespace ${ns}`);
		out.push('{');
		for (const l of body) out.push(l === '' ? '' : '\t' + l);
		out.push('}');
	} else {
		out.push(...body);
	}
	const result = out.join(eol) + eol;

	if (!DRY) fs.writeFileSync(f, result, 'utf8');
	else if (dryShown < 3) {
		console.log(`===== DRY: ${path.basename(f)} =====`);
		console.log(result.split(eol).slice(0, 26).join('\n'));
		console.log('...\n');
		dryShown++;
	}

	stats.processed++;
	if (ns) stats.wrapped++; else stats.global++;
}

console.log(JSON.stringify(stats, null, 2));
