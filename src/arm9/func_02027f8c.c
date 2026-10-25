#pragma avoid_byte strb
#include "ctx.h"

void func_02027f8c(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar1;
    s32 sVar2;
    s32 v;
    s32 lo;
    s32 hi;
    s32 a;
    u8 *base;
    iVar1 = (s16)(param_2 + 5);
    base = *(u8 **)(param_1 + 0x9e8);
    sVar2 = *(s16 *)(base + iVar1 * 2 + 0x50);
    param_1[210] = 1;
    base = *(u8 **)(param_1 + 0x9e8);
    v = param_3 + sVar2;
    a = *(s16 *)(base + iVar1 * 2 + 0x3c);
    lo = a - 5000;
    hi = a + 5000;
    if (v < lo) {
        v = lo;
    }
    if (v > hi) {
        v = hi;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    *(s16 *)((u8 *)base + (u32)iVar1 * 2 + 0x50) = v;
}
