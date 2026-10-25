#pragma avoid_byte all
#include "ctx.h"

s32 func_02062324(u32 *param_1, u32 *param_2)
{
    s32 iVar2;
    u32 uVar4;
    s32 iVar3;
    u32 uVar1;
    u32 uVar3;
    u32 uVar2;

    uVar1 = (*(u8 *)param_1);
    iVar3 = (s32)(uVar1 - (*(u8 *)param_2));
    if (iVar3 != 0) {
        return iVar3;
    }
    uVar4 = (u32)param_1 & 3;
    if (((u32)param_2 & 3) == uVar4) {
        if (uVar4 != 0) {
            if (uVar1 == 0) {
                return 0;
            }
            for (iVar3 = 3 - (s32)uVar4; iVar3 != 0; iVar3--) {
                param_1 = (u32 *)((u8 *)param_1 + 1);
                param_2 = (u32 *)((u8 *)param_2 + 1);
                iVar2 = (s32)((*(u8 *)param_1) - (*(u8 *)param_2));
                if (iVar2 != 0) {
                    return iVar2;
                }
                if ((*(u8 *)param_1) == 0) {
                    return 0;
                }
            }
            param_1 = (u32 *)((u8 *)param_1 + 1);
            param_2 = (u32 *)((u8 *)param_2 + 1);
        }
        uVar1 = *param_1;
        uVar3 = (uVar1 + 0xfefefeffu) & 0x80808080u;
        uVar2 = *param_2;
        if (uVar3 == 0) {
            if (uVar1 == uVar2) {
                do {
                    param_1 = param_1 + 1;
                    uVar1 = *param_1;
                    param_2 = param_2 + 1;
                    uVar2 = *param_2;
                    if (((uVar1 + 0xfefefeffu) & 0x80808080u) != 0) {
                        goto tail;
                    }
                } while (uVar1 == uVar2);
            }
            param_1 = (u32 *)((u8 *)param_1 - 1);
            param_2 = (u32 *)((u8 *)param_2 - 1);
        } else {
tail:
            uVar1 = (*(u8 *)param_1);
            iVar3 = (s32)(uVar1 - (*(u8 *)param_2));
            if (iVar3 != 0) {
                return iVar3;
            }
        }
    }
    if (uVar1 == 0) {
        return 0;
    }
    do {
        param_1 = (u32 *)((u8 *)param_1 + 1);
        param_2 = (u32 *)((u8 *)param_2 + 1);
        iVar3 = (s32)((*(u8 *)param_1) - (*(u8 *)param_2));
        if (iVar3 != 0) {
            return iVar3;
        }
    } while ((*(u8 *)param_1) != 0);
    return 0;
}
