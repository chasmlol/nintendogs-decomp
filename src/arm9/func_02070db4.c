#include "ctx.h"

extern u8 data_021520d0;
extern u32 func_0208a69c(u32 v);
extern void func_020897a4(u32 mask, u32 lo, s32 hi);

void func_02070db4(u8 *param_1, u32 param_2)
{
    u8 *pb;
    u32 uVar4;
    u32 uVar2;
    s32 iVar3;

    *(u32 *)(param_1 + 0x3c) = param_2;
    iVar3 = 0;
    if (*(s32 *)(param_1 + 0x48) <= 0) {
        return;
    }
    do {
        pb = param_1 + iVar3;
        uVar4 = pb[0x4c];
        uVar2 = func_0208a69c(*(u32 *)(param_1 + 0x3c) + *(u32 *)((&data_021520d0) + uVar4 * 8 + 4));
        func_020897a4(1 << uVar4, uVar2 & 0xff, (s32)uVar2 >> 8);
        iVar3 = iVar3 + 1;
    } while (iVar3 < *(s32 *)(param_1 + 0x48));
}
