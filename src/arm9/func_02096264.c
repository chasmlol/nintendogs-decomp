#include "ctx.h"

extern u8 *func_020978d0(u32 a, s32 b);
extern s32 func_02096880(u8 *p, s32 a, u32 b, s32 c);
extern s32 func_02096624(u8 *p);
extern u32 data_021418f0;

s32 func_02096264(u8 *p1, u32 p2, s32 p3)
{
    s32 iVar2;
    u8 *p5;
    s32 iVar3;
    s32 zz;
    s32 t2;
    s32 t4;
    s32 t5;

    asm { mov zz, #0 }
    iVar2 = zz;
    iVar3 = iVar2;
    p5 = func_020978d0(p2, p3);
    switch (p2) {
    case 0:
        iVar3 = (s32)((u8 *)0 + 0x13e00 + (p3 - p3));
        break;
    case 1:
        iVar3 = (s32)((u8 *)0 + p3 * 0x900);
        break;
    case 2:
        asm { mov t2, zz }
        iVar3 = p3 * 0x1ea0 + (t2 + 0x1b00);
        break;
    case 6:
        iVar3 = (s32)((u8 *)0 + 0x14500 + (p3 - p3));
        break;
    case 3:
        iVar3 = (s32)((u8 *)0 + 0x16600 + (p3 - p3));
        break;
    case 4:
        asm { mov t4, zz }
        iVar3 = p3 * 0x900 + (t4 + 0x7700);
        break;
    case 5:
        asm { mov t5, zz }
        iVar3 = p3 * 0x1ea0 + (t5 + 0xa400);
        break;
    }
    if (*(s32 *)(p5 + 0x10) == 0) {
        iVar2 = func_02096880(p5, (s32)p1, p2, iVar3);
        iVar3 = func_02096624(p5);
        if (iVar2 == 0) {
            iVar2 = iVar3;
        }
    }
    if (iVar2 == 3) {
        data_021418f0 = 0;
    }
    return iVar2;
}
