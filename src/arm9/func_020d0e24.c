#include "ctx.h"

typedef struct {
    u32 w[10];
} Vals;

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(b) + 0x800) >> 12))

extern u64 func_0205e270(u32, s32);
extern void func_02006a30(u32 *, u32 *);
extern u8 data_02126728[];

void func_020d0e24(u32 *param_1)
{
    u8 *cur;
    s32 iVar7;
    s32 uVar3;
    u8 *base;
    int iVar4;
    u8 *nxt;
    u8 *piVar9;
    s32 iVar5;
    s32 off;
    s64 lVar1;
    int n;
    u64 uVar11;
    s32 c;

    iVar7 = (s32)param_1[2];
    piVar9 = (u8 *)param_1[0];
    base = piVar9 + 32;
    off = iVar7 * 44;
    uVar11 = func_0205e270(param_1[1] << 12, *(s32 *)((u32)base + off + 40));
    iVar4 = (s32)uVar11;
    if (iVar7 >= *(s32 *)piVar9 - 1) {
        *(Vals *)(param_1 + 4) = *(Vals *)(base + off);
        return;
    }
    cur = base + off;
    iVar5 = iVar7 + 1;
    nxt = base + 44 * iVar5;
    c = *(s32 *)(base + off);
    n = *(s32 *)(base + 44 * iVar5);
    param_1[4] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 4);
    n = *(s32 *)(nxt + 4);
    param_1[5] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 8);
    n = *(s32 *)(nxt + 8);
    param_1[6] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 12);
    n = *(s32 *)(nxt + 12);
    param_1[7] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 16);
    n = *(s32 *)(nxt + 16);
    param_1[8] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 20);
    n = *(s32 *)(nxt + 20);
    param_1[9] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 24);
    n = *(s32 *)(nxt + 24);
    param_1[10] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 28);
    n = *(s32 *)(nxt + 28);
    param_1[11] = c + FXM(iVar4, n - c);
    c = *(s32 *)(cur + 32);
    n = *(s32 *)(nxt + 32);
    param_1[12] = c + FXM(iVar4, n - c);
    lVar1 = (s64)(s32)param_1[10] * (s64)(s32)param_1[10] +
            (s64)(s32)param_1[11] * (s64)(s32)param_1[11] +
            (s64)(s32)param_1[12] * (s64)(s32)param_1[12];
    if (lVar1 >= *(s64 *)data_02126728) {
        func_02006a30(param_1 + 10, param_1 + 10);
    }
    uVar3 = *(u32 *)(nxt + 36) - *(u32 *)(cur + 36);
    param_1[13] = *(u32 *)(36 + cur) + FXM(iVar4, uVar3);
}
