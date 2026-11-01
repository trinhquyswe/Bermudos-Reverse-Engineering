"""show_type.py - print class/struct/enum/interface blocks from il2cppdumper dump.cs.

Usage: python tools/show_type.py TypeA TypeB ...   (searches the whole dump, any namespace)
       python tools/show_type.py --grep SUBSTR     (list matching type names only)
"""
import re
import sys

DUMP = r"C:\Users\usopp\Downloads\webgl1 (1)\webgl1\il2cppdumper\dump.cs"


def blocks(path):
    cur = None
    buf = []
    depth = 0
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        for line in f:
            if cur is None:
                m = re.match(r"\s*(?:\[[^\]]*\]\s*)?(?:(?:public|internal|private|protected)\s+)?"
                             r"(?:(?:static|abstract|sealed|readonly|unsafe)\s+)*"
                             r"(class|struct|enum|interface|delegate)\s+([A-Za-z_<>.]+)", line)
                if m and not line.lstrip().startswith("//"):
                    cur = m.group(2).split("<")[0]
                    buf = [line]
                    depth = line.count("{") - line.count("}")
                    if depth <= 0 and "{" in line:
                        yield cur, "".join(buf)
                        cur = None
                    continue
                continue
            buf.append(line)
            depth += line.count("{") - line.count("}")
            if depth <= 0:
                yield cur, "".join(buf)
                cur = None
                buf = []


def main():
    args = sys.argv[1:]
    if not args:
        print(__doc__)
        return
    if args[0] == "--grep":
        seen = set()
        for name, _ in blocks(DUMP):
            if args[1].lower() in name.lower() and name not in seen:
                seen.add(name)
                print(name)
        return
    wanted = set(args)
    found = {}
    for name, text in blocks(DUMP):
        if name in wanted and name not in found:
            found[name] = text
    for name in args:
        if name in found:
            print(found[name])
        else:
            print(f"// ---- {name}: NOT FOUND ----")


if __name__ == "__main__":
    main()
