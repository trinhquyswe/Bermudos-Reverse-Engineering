using System.Reflection.Metadata;
using System.Reflection.PortableExecutable;

if (args.Length < 1) { Console.Error.WriteLine("usage: types.cs <assembly.dll>"); return 1; }
using var fs = File.OpenRead(args[0]);
using var pe = new PEReader(fs);
var md = pe.GetMetadataReader();
foreach (var h in md.TypeDefinitions)
{
    var t = md.GetTypeDefinition(h);
    var ns = md.GetString(t.Namespace);
    var parts = new List<string>();
    var cur = h;
    while (!cur.IsNil)
    {
        var td = md.GetTypeDefinition(cur);
        parts.Insert(0, md.GetString(td.Name));
        if (parts.Count == 1) ns = md.GetString(td.Namespace);
        cur = td.GetDeclaringType();
    }
    var full = string.Join(".", parts);
    Console.WriteLine((ns.Length > 0 ? ns + "." : "") + full);
}
return 0;
