#include "ctx.h"

extern u8 *data_0214f45c;

void func_0200c4e4(u8 *p)
{
    u32 v;
    data_0214f45c = p;
    if (p == 0) {
        return;
    }
    v = *(u32 *)(p + 0x14);
    if (v != 0 && v < 0x80000000u) {
        *(u32 *)(p + 0x14) = v + (u32)p;
    }
    p = data_0214f45c;
    v = *(u32 *)(p + 0x18);
    if (v != 0 && v < 0x80000000u) {
        *(u32 *)(p + 0x18) = v + (u32)p;
    }
    p = data_0214f45c;
    v = *(u32 *)(p + 0x1c);
    if (v != 0 && v < 0x80000000u) {
        *(u32 *)(p + 0x1c) = v + (u32)p;
    }
    p = data_0214f45c;
    v = *(u32 *)(p + 0x20);
    if (v != 0) {
        if (v < 0x80000000u) {
            *(u32 *)(p + 0x20) = v + (u32)p;
        }
        return;
    }
    return;
}
