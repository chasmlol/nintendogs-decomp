#include "ctx.h"

extern u16 data_0214efdc;
extern u32 data_02159030;
extern u32 func_02090b38(u32 a, u32 b, u32 c);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_020fc3c0;

void func_0211ab34(u8 *param_1)
{
    u32 uVar1;
    u32 uVar2;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    int iVar3;

    uVar4 = 0x1f41;
    uVar5 = 0x226a;
    iVar3 = *(s32 *)(*(u32 *)&data_02159030 + 0x20);
    if ((u16)(data_0214efdc & 0x40) != 0) {
        uVar4 = *(u16 *)(param_1 + 8);
        do {
            if (uVar4 < uVar5) {
                uVar4 = (u16)(uVar4 + 1);
                uVar2 = func_02090b38(iVar3, uVar4, 0);
            } else {
                uVar4 = *(u16 *)(param_1 + 8);
                uVar2 = 0;
            }
        } while (uVar2 == 0xffffffff);
        *(u16 *)(param_1 + 8) = (u16)uVar4;
        *(u16 *)(param_1 + 10) = 0;
    } else {
        if ((u16)(data_0214efdc & 0x80) != 0) {
            uVar5 = *(u16 *)(param_1 + 8);
            do {
                if (uVar4 < uVar5) {
                    uVar5 = (u16)(uVar5 - 1);
                    uVar2 = func_02090b38(iVar3, uVar5, 0);
                } else {
                    uVar5 = *(u16 *)(param_1 + 8);
                    uVar2 = 0;
                }
            } while (uVar2 == 0xffffffff);
            *(u16 *)(param_1 + 8) = (u16)uVar5;
            *(u16 *)(param_1 + 10) = 0;
        }
    }
    if ((u16)(data_0214efdc & 0x10) != 0) {
        uVar1 = *(u16 *)(param_1 + 8);
        uVar5 = *(u16 *)(param_1 + 10);
        do {
            if (uVar5 < 5) {
                uVar5 = (u16)(uVar5 + 1);
                uVar4 = func_02090b38(iVar3, uVar1, uVar5);
            } else {
                uVar5 = *(u16 *)(param_1 + 10);
                uVar4 = 0;
            }
        } while (uVar4 == 0xffffffff);
        *(u16 *)(param_1 + 8) = uVar1;
        *(u16 *)(param_1 + 10) = (u16)uVar5;
    } else {
        if ((u16)(data_0214efdc & 0x20) != 0) {
            uVar6 = *(u16 *)(param_1 + 8);
            uVar5 = *(u16 *)(param_1 + 10);
            do {
                if (uVar5 != 0) {
                    uVar5 = (u16)(uVar5 - 1);
                    uVar4 = func_02090b38(iVar3, uVar6, uVar5);
                } else {
                    uVar5 = *(u16 *)(param_1 + 10);
                    uVar4 = 0;
                }
            } while (uVar4 == 0xffffffff);
            *(u16 *)(param_1 + 8) = uVar6;
            *(u16 *)(param_1 + 10) = (u16)uVar5;
        }
    }
    if ((u16)(data_0214efdc & 1) != 0) {
        func_02097b94(7, *(u16 *)(param_1 + 8), *(u16 *)(param_1 + 10), (u32)&func_020fc3c0, 0);
        return;
    }
}
