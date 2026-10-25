#include "ctx.h"

extern u8 *func_0207184c(u32 a);
extern s32 func_02072b04(u32 a, u32 b, s32 *c, s32 d, u32 e);
extern s32 func_02072934(u32 a, u32 b, s32 *c, s32 d, u32 e);
extern s32 func_0207288c(u32 a, u32 b, s32 *c, s32 d, u32 e);
extern s32 func_02072a94(u32 a, u32 b, s32 *c, s32 d, u32 e);

s32 func_02072bb0(u32 param_1, s32 *param_2)
{
    u8 *puVar1;
    u32 uVar4;
    u8 *puVar3;
    s32 iVar2;

    puVar1 = func_0207184c(param_1);
    if (puVar1 == 0) {
        return 1;
    }
    uVar4 = 0;
    if (uVar4 < *(u32 *)puVar1) {
        puVar3 = puVar1 + 4;
        do {
            switch (*puVar3) {
            case 0:
                iVar2 = func_02072b04(*(u32 *)(puVar3 + 4), puVar3[1], param_2, 1, 0);
                if (iVar2 != 0) {
                    return iVar2;
                }
                break;
            case 3:
                iVar2 = func_02072a94(*(u32 *)(puVar3 + 4), puVar3[1], param_2, 1, 0);
                if (iVar2 != 0) {
                    return iVar2;
                }
                break;
            case 1:
                iVar2 = func_02072934(*(u32 *)(puVar3 + 4), puVar3[1], param_2, 1, 0);
                if (iVar2 != 0) {
                    return iVar2;
                }
                break;
            case 2:
                iVar2 = func_0207288c(*(u32 *)(puVar3 + 4), puVar3[1], param_2, 1, 0);
                if (iVar2 != 0) {
                    return iVar2;
                }
                break;
            }
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 8;
        } while (uVar4 < *(u32 *)puVar1);
    }
    return 0;
}
