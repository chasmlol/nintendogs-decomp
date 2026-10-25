#include "ctx.h"

void func_02078164(u8 *param_1, s32 param_2, u32 param_3)
{
    u32 cnt = param_1[0x18];
    u32 idx = 0;
    u8 *base;
    u32 mask;
    u8 *a;
    base = param_1 + *(u32 *)(param_1 + 8);
    if (idx < cnt) {
    mask = ~param_3;
    a = base + 4;
    do {
        u32 off = *(u16 *)(base + 10);
        u32 stride = *(u16 *)(a + off);
        u8 *tbl = a + off;
        u32 e = *(u32 *)(tbl + stride * idx + 4);
        u8 *ent = base + e;
        if (param_2 != 0) {
            *(u32 *)(ent + 0x10) = *(u32 *)(ent + 0x10) | param_3;
        } else {
            *(u32 *)(ent + 0x10) = *(u32 *)(ent + 0x10) & mask;
        }
        idx = idx + 1;
    } while (idx < cnt);
    }
}
