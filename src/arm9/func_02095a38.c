#include "ctx.h"

extern u8 *data_02159034;
extern s32 data_02159038;
extern u8 *func_020978d0(u32 a, u32 b);
extern s32 func_02096908(u8 *p, u32 a, u32 b);

void func_02095a38(s32 param_1)
{
    s32 bVar1;
    s32 iVar5;
    u8 *iVar4;
    u8 *piVar2;
    u16 uVar6;
    u16 uVar7;
    s32 t;

    bVar1 = 0;
    *(s32 *)data_02159034 = 1;
    piVar2 = data_02159034;
    *(u16 *)(piVar2 + 4) = 0;
    *(u16 *)(piVar2 + 6) = 0;
    *(u16 *)(piVar2 + 8) = 0;
    iVar5 = 0;
    iVar4 = func_020978d0(0, 0);
    if (*(s32 *)(iVar4 + 0x10) != 0 && (param_1 != 0 || *(s32 *)(iVar4 + 0xc) != data_02159038)) {
        iVar5 = func_02096908(iVar4, 0, 0);
    }
    if (iVar5 != 0) {
        iVar4 = func_020978d0(0, 0);
        t = *(s32 *)(iVar4 + 0x10) + *(s32 *)(iVar4 + 4) - 8;
        if (*(s32 *)t == 0x544f5458) {
            bVar1 = 1;
        }
    }
    uVar6 = 0;
    do {
        iVar4 = func_020978d0(1, uVar6);
        if (*(s32 *)(iVar4 + 0x10) != 0 && (param_1 != 0 || *(s32 *)(iVar4 + 0xc) != data_02159038)) {
            func_02096908(iVar4, 0, 0);
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
    uVar6 = 0;
    do {
        uVar7 = 0;
        do {
            iVar4 = func_020978d0(2, uVar6);
            if (*(s32 *)(iVar4 + 0x10) != 0 && (param_1 != 0 || *(s32 *)(iVar4 + 0xc) != data_02159038)) {
                func_02096908(iVar4, uVar7, 0);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 20);
        uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
    iVar4 = func_020978d0(6, 0);
    if (*(s32 *)(iVar4 + 0x10) != 0 && (param_1 != 0 || *(s32 *)(iVar4 + 0xc) != data_02159038)) {
        func_02096908(iVar4, 0, 0);
    }
    iVar4 = func_020978d0(3, 0);
    if (*(s32 *)(iVar4 + 0x10) != 0 && (param_1 != 0 || *(s32 *)(iVar4 + 0xc) != data_02159038)) {
        func_02096908(iVar4, 0, 0);
    }
    uVar6 = 0;
    do {
        iVar4 = func_020978d0(4, uVar6);
        if (*(s32 *)(iVar4 + 0x10) != 0 && (param_1 != 0 || *(s32 *)(iVar4 + 0xc) != data_02159038)) {
            func_02096908(iVar4, 0, 0);
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
    uVar6 = 0;
    do {
        uVar7 = 0;
        do {
            iVar4 = func_020978d0(5, uVar6);
            if (*(s32 *)(iVar4 + 0x10) != 0 && (param_1 != 0 || *(s32 *)(iVar4 + 0xc) != data_02159038)) {
                func_02096908(iVar4, uVar7, 0);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 20);
        uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
    if (bVar1 != 0) {
        iVar4 = func_020978d0(0, 0);
        if (*(s32 *)(iVar4 + 0x10) != 0) {
            func_02096908(iVar4, 0, 1);
        }
        return;
    }
    return;
}
