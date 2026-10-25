#include "ctx.h"
#pragma opt_lifetimes off

extern s32 *func_020038b8(s32 *a, s32 b);
extern u8 *func_ov019_0215ccd8(u8 *a);
extern u8 *func_ov019_021611a0(void);

void func_ov019_02160a6c(u8 *param_1, s32 *param_2)
{
    s32 iVar5;
    s16 sVar1;
    u32 uVar2;
    s32 iVar3;
    s32 c;
    s32 pv;
    s32 idx;
    s32 ent;
    u8 *pt;

    uVar2 = (u32)func_020038b8(param_2, 0x18);
    *(u32 *)(param_1 + 0xac) = uVar2;
    if (*(u32 **)(param_1 + 0xac) != 0) {
        **(u32 **)(param_1 + 0xac) = 0;
        *(u32 *)(*(u8 **)(param_1 + 0xac) + 4) = 0;
        *(u32 *)(*(u8 **)(param_1 + 0xac) + 8) = 0;
        pt = *(u8 **)(param_1 + 0xac);
        *(u32 *)(pt + 0xc) = 0;
        {
            u8 *q = pt + 12;
            *(u32 *)(q + 4) = 0;
            *(u32 *)(q + 8) = 0;
        }
    }
    pt = func_ov019_0215ccd8(param_1);
    if (pt != 0) {
        *(u32 *)(pt + 0x24) = 0xb36;
        *(u32 *)(pt + 0x28) = 0xb36;
        *(u32 *)(pt + 0x2c) = 0xb36;
    }
    iVar5 = *(s16 *)(param_1 + 0x1c);
    c = (s16)(iVar5 + 1);
    if (c < 0 || c >= 50) {
        pv = 0;
    } else {
        pv = *(s32 *)((s32)func_ov019_021611a0() + c * 4 + 4);
    }
    if (pv != 0) {
        if (pv != 0) {
            sVar1 = *(s16 *)(pv + 0x24);
        } else {
            sVar1 = -1;
        }
        if (sVar1 != 2) {
            *(s16 *)(pv + 0x28) = 2;
            *(s16 *)(pv + 0x1e) = 1;
        }
    }
    c = (s16)(iVar5 + 2);
    if (c < 0 || c >= 50) {
        pv = 0;
    } else {
        pv = *(s32 *)((s32)func_ov019_021611a0() + c * 4 + 4);
    }
    if (pv != 0) {
        if (pv != 0) {
            sVar1 = *(s16 *)(pv + 0x24);
        } else {
            sVar1 = -1;
        }
        if (sVar1 != 3) {
            *(s16 *)(pv + 0x28) = 3;
            *(s16 *)(pv + 0x1e) = 1;
        }
    }
    iVar5 = (s16)(iVar5 + 3);
    iVar3 = 0;
    do {
        idx = iVar5;
        iVar5 = (s16)(iVar5 + 1);
        if (idx < 0 || idx >= 50) {
            ent = 0;
        } else {
            ent = *(s32 *)((s32)func_ov019_021611a0() + idx * 4 + 4);
        }
        if (ent != 0) {
            if (ent != 0) {
                sVar1 = *(s16 *)(ent + 0x24);
            } else {
                sVar1 = -1;
            }
            if (sVar1 != 4) {
                *(s16 *)(ent + 0x28) = 4;
                *(s16 *)(ent + 0x1e) = 1;
            }
        }
        iVar3 = (s16)(iVar3 + 1);
    } while (iVar3 < 16);
}
