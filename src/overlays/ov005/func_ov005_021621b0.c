#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_ov005_02163d4c(s32 a, u32 b, s32 *c);
extern s32 func_02028130(s32 a);

void func_ov005_021621b0(u8 *param_1)
{
    int uVar4;
    u8 *iVar3;
    s32 iVar1;
    int uVar2;
    s32 aLocal[3];
    s64 p1;
    s32 sv;
    u8 *pq;

    iVar1 = func_01ffdb08(*(s16 *)data_ov005_02167f00);
    iVar3 = data_ov005_02167f00;
    pq = 0x5c + iVar3;
    if (*(s32 *)(4 + iVar3) != 0) {
        func_ov005_02163d4c(iVar1, 2, aLocal);
    } else {
        func_ov005_02163d4c(iVar1, 3, aLocal);
    }
    *(s32 *)(0x20 + param_1) = aLocal[0] + *(s32 *)(*(u8 **)(*(u8 **)(0x18 + param_1)) + 4);
    *(s32 *)(0x24 + param_1) = aLocal[1] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(s32 *)(0x28 + param_1) = aLocal[2] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 0xc);
    uVar4 = *(u32 *)pq;
    if (uVar4 == 0) {
        *(s32 *)(param_1 + 0x1c) = *(s32 *)((int)param_1 + 0x1c) | 2;
    } else {
        p1 = (s64)uVar4 * (s64)(-389120);
        *(s32 *)(0x1c + param_1) = *(s32 *)(param_1 + 0x1c) & 0xfffffffd;
        sv = ((s32)((p1 + 0x800) >> 12) >> 12) + 100;
        *(u8 *)(param_1 + 92) = (u8)sv;
    }
    uVar2 = func_02028130(iVar1);
    *(s32 *)(param_1 + 0x54) = (s16)uVar2;
    iVar1 = func_02028130(iVar1);
    *(s32 *)(param_1 + 0x44) = (s16)FX_Mul(0xa8f, iVar1);
}
