#include "ctx.h"

extern u8 data_0214f004[];
extern s32 data_0215be48;
extern s32 func_02112320(s32, s32, s32);
extern void func_02102ebc(s32, u8 *, s32, s32);
extern s32 func_020ab144(void);
extern void func_021045f0(s32);
extern s32 func_020fe2e8(void);
extern s32 func_021179b0(void *, s32, s32);
extern void func_0210441c(void);

void func_02102b88(u8 *param_1)
{
    s32 iVar6;
    s32 iVar7, iVar8;
    s32 bVar1;
    s32 bRes;
    u8 *pbVar3;
    u16 uVar5, uVar9;

    pbVar3 = data_0214f004;
    bVar1 = 0;
    *(s32 *)(data_0215be48 + 0x48b8) = 0;
    if ((*(u16 *)(pbVar3 + 2) & 2) == 0) {
        return;
    }
    uVar5 = (u16)pbVar3[0];
    uVar9 = (u16)pbVar3[1];
    iVar7 = (s16)uVar5;
    iVar8 = (s16)uVar9;
    if (*(s32 *)(param_1 + 0x14) != 0) {
        iVar6 = func_02112320(1, iVar7, iVar8);
        bRes = 0;
        if (func_02112320(1, iVar7, iVar8) != 0) {
            bRes = 1;
        }
        switch (iVar6) {
        case 0:
            func_02102ebc(1, param_1, iVar7, iVar8);
            break;
        case 1:
            if (*(s32 *)(param_1 + 0xc) == 0 && func_020ab144() != 0) {
                if (*(s32 *)(param_1 + 0x50) != 0) {
                    func_021045f0(0x23);
                } else {
                    func_021045f0(0x24);
                }
                *(s32 *)(data_0215be48 + 0x48b8) = 2;
                *(s32 *)(data_0215be48 + 0x48bc) = 2;
            }
            break;
        case 2:
            if (*(s32 *)(param_1 + 0x5c) != 0 && func_020fe2e8() != 0 &&
                func_021179b0(param_1 + 0x15c, iVar7, iVar8) != 0) {
                func_021045f0(0x29);
                *(s32 *)(data_0215be48 + 0x4858) = 1;
            }
            break;
        case 3:
            if (*(s32 *)(param_1 + 0xc) == 0 && func_021179b0(param_1 + 0x120, iVar7, iVar8) != 0) {
                func_0210441c();
                *(s32 *)(param_1 + 4) = 0;
                *(s32 *)(data_0215be48 + 0x48b8) = 4;
            }
            break;
        default:
            bVar1 = 1;
        }
        if (bVar1 == 0) {
            return;
        }
        if (bRes == 0) {
            return;
        }
        *(s32 *)(data_0215be48 + 0x48b8) = 5;
        return;
    }
    iVar6 = func_02112320(3, iVar7, iVar8);
    bRes = 0;
    if (func_02112320(3, iVar7, iVar8) != 0) {
        bRes = 1;
    }
    switch (iVar6) {
    case 0:
        func_02102ebc(3, param_1, iVar7, iVar8);
        break;
    case 2:
        if (*(s32 *)(param_1 + 0x60) != 0 && func_020fe2e8() != 0 &&
            func_021179b0(param_1 + 0x15c, iVar7, iVar8) != 0) {
            func_021045f0(0x29);
            *(s32 *)(data_0215be48 + 0x4858) = 1;
        }
        break;
    case 3:
        if (*(s32 *)(param_1 + 0xc) == 0 && func_021179b0(param_1 + 0xe4, iVar7, iVar8) != 0) {
            func_0210441c();
            *(s32 *)(param_1 + 4) = 0;
            *(s32 *)(data_0215be48 + 0x48b8) = 4;
        }
        break;
    default:
        bVar1 = 1;
    }
    if (bVar1 == 0) {
        return;
    }
    if (bRes != 0) {
        *(s32 *)(data_0215be48 + 0x48b8) = 5;
    }
}
