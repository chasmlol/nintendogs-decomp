#include "ctx.h"

extern u32 data_021592e4;
extern u32 data_0215930c;
extern u32 data_02159074;
extern u32 data_0212fdc9;
extern u32 data_0212fdc8;
extern u32 data_02141fb4;
extern u32 func_020a202c(u32 a, u32 b, u32 c, u32 d);
extern u32 func_0209b774(s32 *p);
extern u32 func_0205e270(u32 a, u32 b);
extern void func_02070c18(u32 *p, u32 v);
extern void func_02070b20(u32 *p, u32 v);
extern s32 func_0209b73c(s32 *p);
extern void func_020709c8(u32 *p, u32 a, s32 b);

u32 func_020a103c(u32 param_1, u32 param_2, s32 *param_3)
{
    u8 *pb;
    u32 uVar3;
    u32 *piVar9;
    u32 uVar8;
    u32 uVar4;
    u32 uVar6;
    u32 uVar2;
    s32 iVar5;
    s32 iVar7;
    u32 uVar1;

    pb = (u8 *)&data_021592e4;
    uVar3 = func_020a202c(param_1, param_2, 0x7f, 0);
    if (uVar3 == 0xffffffff) {
        goto out;
    }
    piVar9 = (u32 *)(&data_0215930c) + uVar3;
    if (*piVar9 == 0) {
        goto out;
    }
    iVar7 = (u32)*(u16 *)((u8 *)&data_02159074 + 24) * 6;
    uVar8 = *((u8 *)&data_0212fdc9 + iVar7);
    uVar4 = func_0209b774(param_3);
    uVar6 = *((u8 *)&data_0212fdc8 + iVar7);
    if (uVar4 <= uVar6) {
        uVar2 = 0x7f;
        goto call;
    }
    if (uVar4 >= uVar8) {
        goto zexit;
    }
    uVar2 = func_0205e270((uVar8 - uVar4) * 0x7f, uVar8 - uVar6);
    goto call;
zexit:
    func_02070c18(piVar9, 0);
    uVar1 = ~(u16)(1 << uVar3);
    *(u16 *)(pb + 24) = *(u16 *)(pb + 24) & uVar1;
    *(u16 *)(pb + 28) = *(u16 *)(pb + 28) & uVar1;
    return 0xffffffff;
call:
    func_02070b20(piVar9, uVar2);
    iVar5 = func_0209b73c(param_3);
    func_020709c8(piVar9, *(u16 *)&data_02141fb4, iVar5);
out:
    return uVar3;
}
