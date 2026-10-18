// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: TMPro
public class TMP_TextEventHandler : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	// Fields
	private TMP_TextEventHandler.CharacterSelectionEvent m_OnCharacterSelection;
	private TMP_TextEventHandler.SpriteSelectionEvent m_OnSpriteSelection;
	private TMP_TextEventHandler.WordSelectionEvent m_OnWordSelection;
	private TMP_TextEventHandler.LineSelectionEvent m_OnLineSelection;
	private TMP_TextEventHandler.LinkSelectionEvent m_OnLinkSelection;
	private TMP_Text m_TextComponent;
	private Camera m_Camera;
	private Canvas m_Canvas;
	private int m_selectedLink;
	private int m_lastCharIndex;
	private int m_lastWordIndex;
	private int m_lastLineIndex;
	public TMP_TextEventHandler.CharacterSelectionEvent onCharacterSelection { get; set; }
	public TMP_TextEventHandler.SpriteSelectionEvent onSpriteSelection { get; set; }
	public TMP_TextEventHandler.WordSelectionEvent onWordSelection { get; set; }
	public TMP_TextEventHandler.LineSelectionEvent onLineSelection { get; set; }
	public TMP_TextEventHandler.LinkSelectionEvent onLinkSelection { get; set; }

	// Methods
	public TMP_TextEventHandler.CharacterSelectionEvent get_onCharacterSelection()
	{
		// <no wasm mapping>
	}

	public void set_onCharacterSelection(TMP_TextEventHandler.CharacterSelectionEvent value)
	{
		// <no wasm mapping>
	}

	public TMP_TextEventHandler.SpriteSelectionEvent get_onSpriteSelection()
	{
		// <no wasm mapping>
	}

	public void set_onSpriteSelection(TMP_TextEventHandler.SpriteSelectionEvent value)
	{
		// <no wasm mapping>
	}

	public TMP_TextEventHandler.WordSelectionEvent get_onWordSelection()
	{
		// <no wasm mapping>
	}

	public void set_onWordSelection(TMP_TextEventHandler.WordSelectionEvent value)
	{
		// <no wasm mapping>
	}

	public TMP_TextEventHandler.LineSelectionEvent get_onLineSelection()
	{
		// <no wasm mapping>
	}

	public void set_onLineSelection(TMP_TextEventHandler.LineSelectionEvent value)
	{
		// <no wasm mapping>
	}

	public TMP_TextEventHandler.LinkSelectionEvent get_onLinkSelection()
	{
		// <no wasm mapping>
	}

	public void set_onLinkSelection(TMP_TextEventHandler.LinkSelectionEvent value)
	{
		// <no wasm mapping>
	}

	private void Awake()
	{
		// <no wasm mapping>
	}

	private void LateUpdate()
	{
		// <no wasm mapping>
	}

	public void OnPointerEnter(PointerEventData eventData)
	{
		// <no wasm mapping>
	}

	public void OnPointerExit(PointerEventData eventData)
	{
		// <no wasm mapping>
	}

	private void SendOnCharacterSelection(char character, int characterIndex)
	{
		// <no wasm mapping>
	}

	private void SendOnSpriteSelection(char character, int characterIndex)
	{
		// <no wasm mapping>
	}

	private void SendOnWordSelection(string word, int charIndex, int length)
	{
		// <no wasm mapping>
	}

	private void SendOnLineSelection(string line, int charIndex, int length)
	{
		// <no wasm mapping>
	}

	private void SendOnLinkSelection(string linkID, string linkText, int linkIndex)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
