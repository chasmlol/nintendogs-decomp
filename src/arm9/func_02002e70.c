#include "ctx.h"

extern u32 data_0214e738;
extern u32 func_02003008(void);
extern u32 func_02002ff8(void);
extern u32 func_0200361c(u32 a);
extern void func_020887a8(u32 a, u32 b);
extern void func_02088754(u32 a, u32 b);
extern void func_02003728(u32 a);

u32 func_02002e70(u8 *param_1, u32 param_2)
{
    u32 piVar5;
    u32 piVar4;
    u32 piVar3;
    u32 iVar1;
    u32 uVar2;
    s32 v4;

    *(u32 *)(param_1 + 0x18) = *(u32 *)&data_0214e738;
    iVar1 = *(u32 *)(param_1 + 0x18);
    if (iVar1 == 0) {
        piVar5 = func_02003008();
        piVar4 = func_02002ff8();
        piVar3 = 0;
    } else {
        piVar5 = *(u32 *)(iVar1 + 0xc);
        piVar4 = *(u32 *)(iVar1 + 0x10);
        piVar3 = *(u32 *)(iVar1 + 0x14);
    }
    uVar2 = func_0200361c(piVar5);
    *(u32 *)(param_1 + 0xc) = uVar2;
    if (piVar4 == 0) {
        *(u32 *)(param_1 + 0x10) = 0;
    } else {
        uVar2 = func_0200361c(piVar4);
        *(u32 *)(param_1 + 0x10) = uVar2;
    }
    if (piVar3 == 0) {
        *(u32 *)(param_1 + 0x14) = 0;
    } else {
        uVar2 = func_0200361c(piVar3);
        *(u32 *)(param_1 + 0x14) = uVar2;
    }
    *(u32 *)&data_0214e738 = (u32)param_1;
    v4 = *(s32 *)(param_1 + 4);
    if (v4 != -1) {
        func_020887a8(0, v4);
    }
    uVar2 = ((u32 (*)(u32))*(u32 *)(param_1 + 8))(param_2);
    v4 = *(s32 *)(param_1 + 4);
    if (v4 != -1) {
        func_02088754(0, v4);
    }
    *(u32 *)&data_0214e738 = *(u32 *)(param_1 + 0x18);
    func_02003728(*(u32 *)(param_1 + 0xc));
    *(u32 *)(param_1 + 0xc) = 0;
    if (*(u32 *)(param_1 + 0x10) != 0) {
        func_02003728(*(u32 *)(param_1 + 0x10));
        *(u32 *)(param_1 + 0x10) = 0;
    }
    if (*(u32 *)(param_1 + 0x14) != 0) {
        func_02003728(*(u32 *)(param_1 + 0x14));
        *(u32 *)(param_1 + 0x14) = 0;
    }
    return uVar2;
}
