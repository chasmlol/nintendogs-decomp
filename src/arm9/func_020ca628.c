#include "ctx.h"
#pragma optimization_level 2

extern s32 func_02062164(void);
extern u32 data_02159490;
extern u32 data_021594a0;

void func_020ca628(void)
{
    s32 uVar3;
    s32 uVar4;
    s32 a;
    s32 W;

    uVar3 = func_02062164();
    uVar4 = func_02062164();
    {
        s32 q = (uVar4 << 12) / 32767;
        a = q;
    }
    W = (s32)(((s64)a * 1474560 + 0x800) >> 12);
    *(u16 *)&data_02159490 = (u16)(((s64)W * 0xb60b60b60bLL + ((s64)0x800 << 32)) >> 44);
    if (uVar3 < 0x3fff) {
        *(u32 *)&data_021594a0 = 0x1000;
        return;
    }
    if (uVar3 < 0x5fff) {
        *(u32 *)&data_021594a0 = 0x3000;
    } else {
        *(u32 *)&data_021594a0 = 0xa000;
    }
}
