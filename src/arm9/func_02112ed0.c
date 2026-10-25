#include "ctx.h"
#pragma opt_loop_invariants off

extern u32 data_0215be48;
extern u32 func_02085cc0(u32 a);
extern u32 func_02085cb8(u32 a);
extern u32 func_02085ccc(u32 a, u32 b);
extern s32 func_02085cf4(u32 a, u32 b);

void func_02112ed0(s32 param_1, s32 param_2)
{
    s32 k;
    u8 *puVar10;
    u32 uVar9;
    s32 cnt;
    u32 iVar8;
    u32 uVar1;
    s32 iVar7;
    u32 *iVar4;
    u8 *q;
    iVar7 = param_1 * 660;
    puVar10 = (u8 *)((u32)*(u8 **)&data_0215be48 + 0x1dec + iVar7);
    if (param_2 == 0) {
        *(u32 *)(puVar10 + 12) = 0;
        *(u32 *)(puVar10 + 20) = 0;
        *(u32 *)(puVar10 + 28) = 0;
        *(u32 *)puVar10 = 0;
        return;
    }
    *(u32 *)(puVar10 + 12) = param_2;
    *(u32 *)(puVar10 + 20) = func_02085cc0(param_2);
    *(u32 *)(puVar10 + 28) = func_02085cb8(param_2);
    *(u32 *)puVar10 = 1;
    if ((param_1 != 1) && (param_1 != 3)) {
        return;
    }
    uVar9 = 0;
    if (uVar9 < *(u16 *)(puVar10 + 32)) {
    do {
        q = *(u8 **)&data_0215be48 + 0x1dec + iVar7;
        iVar4 = (u32 *)func_02085ccc(*(u32 *)(q + 12), *(u32 *)(*(u8 **)(q + 8) + uVar9 * 8 + 12));
        uVar1 = (*(u32 *)((u8 *)iVar4 + 4) << 16) >> 28;
        if (uVar1 <= 1) {
            q = *(u8 **)&data_0215be48 + 0x1dec + iVar7;
            iVar8 = *(u32 *)(*(u8 **)(q + 8) + (uVar9 << 3) + 12);
            cnt = func_02085cf4(*(u32 *)(q + 12), iVar8);
            iVar4 = (u32 *)func_02085ccc(*(u32 *)(*(u8 **)&data_0215be48 + iVar7 + 0x1df8), iVar8);
            k = 0;
            if (k < cnt) {
                u32 nib;
                nib = uVar1 + 14;
                nib &= 15;
                nib <<= 12;
                do {
                    k = k + 1;
                    iVar4[1] = (iVar4[1] & 0xffff0fff) | nib;
                    iVar4 = iVar4 + 3;
                } while (k < cnt);
            }
        }
        uVar9 = (u16)(uVar9 + 1);
    } while (uVar9 < *(u16 *)(puVar10 + 32));
    }
}
