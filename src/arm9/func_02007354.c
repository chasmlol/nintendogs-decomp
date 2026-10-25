#include "ctx.h"

extern u32 data_02126730;
extern s32 func_0205e47c(s32 a, s32 b);

typedef void (*FnCb)(s32, s32, s32);

void func_02007354(s32 *p1, s32 p2, s32 p3)
{
    s32 iVar6;
    s32 iVar5;
    s32 iVar4;
    s32 iVar7;
    s32 uVar1;
    s32 uVar2;
    FnCb pc;

    iVar4 = p1[0];
    if (*(u16 *)((u8 *)p1 + 8) == 0) {
        iVar7 = 32;
    } else {
        iVar7 = 64;
    }
    iVar5 = iVar7 * (p2 + p3 * 32);
    uVar1 = (s32)*(u16 *)((u8 *)p1 + 6) >> 3;
    uVar2 = func_0205e47c(p1[4], uVar1);
    iVar6 = 0;
    if (uVar1 > 0) {
        pc = *(FnCb *)((u8 *)&data_02126730 + 8);
        do {
            pc(iVar4, iVar5, uVar2);
            iVar6 = iVar6 + 1;
            iVar4 = ((s32)*(u16 *)((u8 *)p1 + 4) >> 3) * iVar7 + iVar4;
            iVar5 = iVar5 + iVar7 * 32;
        } while (iVar6 < ((s32)*(u16 *)((u8 *)p1 + 6) >> 3));
    }
}
