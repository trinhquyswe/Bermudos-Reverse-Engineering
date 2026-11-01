"""IL2CPP struct offsets for the WebGL (wasm32) build of Unity 2022.3.44f1.

Field order and types come from libil2cpp (il2cpp-class-internals.h,
il2cpp-object-internals.h). Offsets are computed with 4-byte pointers.
"""
import sys

PTR = (4, 4)            # size, align on wasm32
U32 = (4, 4)
I32 = (4, 4)
U16 = (2, 2)
U8 = (1, 1)
IL2CPP_TYPE = (8, 4)    # {void* data; unsigned bits}; confirmed by static_fields at 0x5c
VIRTUAL_INVOKE_DATA = (8, 4)
BITFIELDS = (2, 1)      # 15 one-bit flags in uint8 storage units


def _f(name, typ):
    return (name, typ)


OBJECT = [_f("klass", PTR), _f("monitor", PTR)]


def layout(fields):
    """Return ({name: offset}, size) for (name, (size, align)) entries in declaration order."""
    offsets = {}
    off = 0
    max_align = 1
    for name, (size, align) in fields:
        off = (off + align - 1) // align * align
        offsets[name] = off
        off += size
        max_align = max(max_align, align)
    size = (off + max_align - 1) // max_align * max_align
    return offsets, size


CLASS_FIELDS = [
    _f("image", PTR), _f("gc_desc", PTR), _f("name", PTR), _f("namespaze", PTR),
    _f("byval_arg", IL2CPP_TYPE), _f("this_arg", IL2CPP_TYPE),
    _f("element_class", PTR), _f("castClass", PTR), _f("declaringType", PTR),
    _f("parent", PTR), _f("generic_class", PTR), _f("typeMetadataHandle", PTR),
    _f("interopData", PTR), _f("klass", PTR), _f("fields", PTR), _f("events", PTR),
    _f("properties", PTR), _f("methods", PTR), _f("nestedTypes", PTR),
    _f("implementedInterfaces", PTR), _f("interfaceOffsets", PTR),
    _f("static_fields", PTR), _f("rgctx_data", PTR), _f("typeHierarchy", PTR),
    _f("unity_user_data", PTR), _f("initializationExceptionGCHandle", U32),
    _f("cctor_started", U32), _f("cctor_finished_or_no_cctor", U32),
    _f("cctor_thread", (4, 8)),  # ALIGN_TYPE(8)
    _f("genericContainerHandle", PTR), _f("instance_size", U32),
    _f("stack_slot_size", U32), _f("actualSize", U32), _f("element_size", U32),
    _f("native_size", I32), _f("static_fields_size", U32),
    _f("thread_static_fields_size", U32), _f("thread_static_fields_offset", I32),
    _f("flags", U32), _f("token", U32),
    _f("method_count", U16), _f("property_count", U16), _f("field_count", U16),
    _f("event_count", U16), _f("nested_type_count", U16), _f("vtable_count", U16),
    _f("interfaces_count", U16), _f("interface_offsets_count", U16),
    _f("typeHierarchyDepth", U8), _f("genericRecursionDepth", U8), _f("rank", U8),
    _f("minimumAlignment", U8), _f("packingSize", U8), _f("bitflags", BITFIELDS),
    _f("vtable", VIRTUAL_INVOKE_DATA),
]

IFACE_PAIR_FIELDS = [_f("interfaceType", PTR), _f("offset", I32)]

DELEGATE_FIELDS = [_f(n, PTR) for n in (
    "method_ptr", "invoke_impl", "target", "method",
    "delegate_trampoline", "extraArg", "invoke_impl_this")]

EXPECTED = {
    ("Il2CppClass", "interfaceOffsets"): 0x58,
    ("Il2CppClass", "static_fields"): 0x5C,
    ("Il2CppClass", "instance_size"): 0x80,
    ("Il2CppClass", "static_fields_size"): 0x94,
    ("Il2CppClass", "vtable"): 0xC0,
    ("Il2CppDelegate", "method_ptr"): 0x08,
    ("Il2CppDelegate", "invoke_impl"): 0x0C,
    ("Il2CppDelegate", "target"): 0x10,
    ("Il2CppDelegate", "method"): 0x14,
    ("Il2CppDelegate", "invoke_impl_this"): 0x20,
}


def build():
    return {
        "Il2CppObject": layout(OBJECT),
        "Il2CppClass": layout(CLASS_FIELDS),
        "Il2CppRuntimeInterfaceOffsetPair": layout(IFACE_PAIR_FIELDS),
        "Il2CppDelegate": layout(OBJECT + DELEGATE_FIELDS),
    }


def main():
    tables = build()
    ok = True
    for struct, (offsets, size) in tables.items():
        print(f"{struct}: size=0x{size:X}")
        for name, off in offsets.items():
            print(f"  {name:32s} 0x{off:03X}")
    print()
    for (struct, field), want in EXPECTED.items():
        got = tables[struct][0][field]
        status = "ok" if got == want else "MISMATCH"
        ok &= got == want
        print(f"{status:8s} {struct}.{field}: got 0x{got:X} want 0x{want:X}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
