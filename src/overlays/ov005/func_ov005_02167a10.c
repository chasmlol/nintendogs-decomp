#include "ctx.h"
#pragma opt_propagation off

extern u8 *data_ov005_02167f0c;
extern u8 *data_02159444;
extern s32 func_01ffdb08(s32 v);
extern int func_ov005_02160af4(int v);
extern void func_ov005_02167268(u8 *p, int *out);
extern u32 func_02028130(int v);
extern void func_0206799c(u16 *a, u16 *b);

void func_ov005_02167a10(u8 *param_1)
{
    u8 *iVar5;
    int iVar2;
    int iVar3;
    int aiStack_20[3];
    u16 sStack_28[3];
    u32 uVar4;
    u8 *pT;
    s32 v94;
    s32 v98;
    u16 t0;
    u16 t1;

    iVar5 = data_ov005_02167f0c;
    iVar2 = func_01ffdb08(*(s16 *)(*(u8 **)(iVar5 + 0x214)));
    if (iVar2 != 0) {
        iVar3 = func_ov005_02160af4(iVar2);
        if (iVar3 != 0) {
            *(u32 *)(param_1 + 0x1c) = *(u32 *)(param_1 + 0x1c) & 0xfffffffd;
            func_ov005_02167268(iVar5, aiStack_20);
            aiStack_20[2] = func_02028130(iVar2);
            *(int *)(param_1 + 0x20) = aiStack_20[0] + *(int *)(*(u8 **)*(u8 **)(param_1 + 0x18) + 4);
            *(int *)(param_1 + 0x24) = aiStack_20[1] + *(int *)(*(u8 **)*(u8 **)(param_1 + 0x18) + 8);
            *(int *)(param_1 + 0x28) = aiStack_20[2] + *(int *)(*(u8 **)*(u8 **)(param_1 + 0x18) + 0xc);
            uVar4 = func_02028130(iVar2);
            *(s32 *)(param_1 + 0x54) = (s16)uVar4;
            pT = data_02159444;
            v94 = *(s32 *)(pT + 0x94);
            if (v94 == 0 && *(s32 *)(pT + 0x98) == 0) {
                return;
            }
            v98 = *(s32 *)(pT + 0x98);
            sStack_28[0] = (u16)v94;
            sStack_28[1] = (u16)v98;
            sStack_28[2] = 0;
            func_0206799c(sStack_28, sStack_28);
            t0 = sStack_28[0];
            t1 = sStack_28[1];
            *(u16 *)(param_1 + 0x3c) = t0;
            *(u16 *)(param_1 + 0x3e) = t1;
            *(u16 *)(param_1 + 0x40) = sStack_28[2];
            return;
        }
    }
    *(u32 *)(param_1 + 0x1c) = *(u32 *)(param_1 + 0x1c) | 2;
}
