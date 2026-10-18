using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;

var dir = args.Length > 0 ? args[0] : ".";
var files = Directory.EnumerateFiles(dir, "*.cs", SearchOption.AllDirectories).ToList();
var groups = new Dictionary<string, (int count, List<string> samples)>();
int bad = 0, totalErrors = 0;
foreach (var f in files)
{
    var text = File.ReadAllText(f);
    var srcLines = text.Replace("\r\n", "\n").Split('\n');
    var tree = CSharpSyntaxTree.ParseText(text, new CSharpParseOptions(LanguageVersion.Latest));
    var diags = tree.GetDiagnostics().Where(d => d.Severity == DiagnosticSeverity.Error).ToList();
    if (diags.Count == 0) continue;
    bad++;
    totalErrors += diags.Count;
    foreach (var d in diags)
    {
        var line = d.Location.GetLineSpan().StartLinePosition.Line;
        var key = $"{d.Id} {d.GetMessage()}";
        if (!groups.TryGetValue(key, out var g)) { g = (0, new List<string>()); }
        g.count++;
        if (g.samples.Count < 3)
            g.samples.Add($"{Path.GetRelativePath(dir, f)}:{line + 1}  |  {(line < srcLines.Length ? srcLines[line].Trim() : "")}");
        groups[key] = g;
    }
}
Console.WriteLine($"parsed {files.Count} files; {bad} with syntax errors; {totalErrors} errors total");
foreach (var kv in groups.OrderByDescending(k => k.Value.count))
{
    Console.WriteLine($"[{kv.Value.count,5}] {kv.Key}");
    foreach (var s in kv.Value.samples) Console.WriteLine($"          e.g. {s}");
}
