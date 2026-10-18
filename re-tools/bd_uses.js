'use strict';
const fs = require('fs');
const path = require('path');
const TREE = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';
const files = [];
(function w(d) { for (const e of fs.readdirSync(d, { withFileTypes: true })) { const p = path.join(d, e.name); if (e.isDirectory()) w(p); else if (p.endsWith('.cs')) files.push(p); } })(TREE);

const names = ['AbortType', 'NodeData', 'SharedNamedVariable', 'GlobalVariables', 'VariableSynchronizer', 'ObjectPool',
	'MiniJSON', 'GenericVariable', 'BehaviorSource', 'GetBehaviorSource', 'FindTask', 'GetAllVariables', 'SendEvent',
	'TaskCoroutine', 'RegisterEvent', 'UnregisterEvent', 'GetDelegate', 'OnBehaviorStart', 'OnBehaviorRestart',
	'OnBehaviorEnd', 'GetVariable', 'SetVariable', 'SetVariableValue', 'IsPlaying', 'Interrupt', 'IsParentTask',
	'MaxChildren', 'GetUtility', 'GetPriority', 'OnDrawNodeText', 'OnDrawGizmos', 'OnBehaviorComplete',
	'OnConditionalAbort', 'PropertyMappingOwner', 'IsShared', 'IsNone', 'mValue', 'TryGetComponent', 'StartCoroutine',
	'GetDefaultGameObject', 'OnFixedUpdate', 'OnControllerColliderHit', 'StartWhenEnabled', 'EnableBehavior',
	'DisableBehavior', 'CreateBehaviorManager', 'BehaviorName', 'ExecutionStatus', 'GetOwnerName', 'GetObject',
	'GetInstanceID', 'OnDrawGizmosSelected', 'StopCoroutine', 'GetComponent'];

const srcs = files.map((f) => ({ rel: path.relative(TREE, f).replace(/\\/g, '/'), src: fs.readFileSync(f, 'utf8') }));
for (const n of names) {
	const re = new RegExp('\\b' + n + '\\b', 'g');
	let c = 0;
	const ex = [];
	for (const { rel, src } of srcs) {
		const m = src.match(re);
		if (m) { c += m.length; if (ex.length < 3) ex.push(rel); }
	}
	if (c) console.log(String(c).padStart(5) + '  ' + n.padEnd(26) + ex.join(', '));
}
