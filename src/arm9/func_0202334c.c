#include "ctx.h"

extern u8 data_0213a8d4[];
extern u8 data_021369a8[];
extern void func_0209578c(s32 *p);
extern s32 func_020956b0(u8 *a, u8 *b);

s32 func_0202334c(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 bVar1;
    u16 *psVar5;
    u16 *puVar6;
    u32 uVar4;
    s32 iStack_38;
    s32 iStack_34;
    s32 iStack_30[2];

    iVar2 = 0;
    do {
        if (iVar2 < 0 || iVar2 >= 20) {
            psVar5 = (u16 *)0;
        } else {
            psVar5 = (u16 *)(*(s32 *)(param_1 + 0x9e8) + 0x90 + (s16)iVar2 * 60);
        }
        if (psVar5 != (u16 *)0 && psVar5[1] == 0 && psVar5[0] == 0) {
            return iVar2;
        }
        iVar2 = (s16)(iVar2 + 1);
    } while (iVar2 < 20);
    iStack_38 = -1;
    func_0209578c(iStack_30);
    iVar2 = 0;
    iStack_34 = 0;
    do {
        if (iVar2 < 0 || iVar2 >= 20) {
            puVar6 = (u16 *)0;
        } else {
            puVar6 = (u16 *)(*(s32 *)(param_1 + 0x9e8) + 0x90 + (s16)iVar2 * 60);
        }
        if (puVar6 == (u16 *)0) {
            iVar3 = 0;
        } else {
            uVar4 = puVar6[0];
            if (uVar4 == 0) {
                iVar3 = 0;
            } else if (puVar6[1] == 0) {
                iVar3 = iStack_34;
            } else {
                if (uVar4 < 0x4f) {
                    goto direct;
                }
                if (uVar4 < 0x63) {
                    iVar3 = *(s32 *)(data_0213a8d4 + 0x13c);
                    goto pick;
                }
direct:
                iVar3 = ((s32 *)data_0213a8d4)[uVar4];
pick:
                if ((s32)puVar6[1] < (s32)*(u8 *)((*(u8 *)(*(s32 *)(param_1 + 0x9e8) + 0x13) - 1) +
                                                  ((*(u8 *)(iVar3 + 2) - 1) * 5 + (u8 *)data_021369a8))) {
                    iVar3 = 1;
                } else {
                    iVar3 = 2;
                }
            }
        }
        if (iVar3 != 2 &&
            ((iStack_30[0] == 0 && iStack_30[1] == 0) ||
             (bVar1 = func_020956b0((u8 *)(puVar6 + 4), (u8 *)iStack_30), bVar1))) {
            {
                s32 t0 = *(vu32 *)(puVar6 + 4);
                s32 t1 = *(s32 *)(puVar6 + 6);
                iStack_38 = iVar2;
                iStack_30[0] = t0;
                iStack_30[1] = t1;
            }
        }
        iVar2 = (s16)(iVar2 + 1);
    } while (iVar2 < 20);
    return iStack_38;
}
