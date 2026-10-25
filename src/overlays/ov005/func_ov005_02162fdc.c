#include "ctx.h"
#pragma opt_propagation off

extern u32 data_ov005_02167f00;
extern u32 data_ov005_02167c48;
extern int func_01ffdb08(int a);
extern void func_ov005_02163d4c(int a, int b, void *c);
extern void func_0202756c(int a, void *b);
extern u32 func_02028130(int a);
extern u32 func_02028118(int a);
extern void func_01ff832c(u32 a, void *b, void *c, void *d);
extern void func_02081aec(int p, void *a, void *b);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_ov005_02162fdc(int param_1)
{
    s32 st[24];
    u32 uVar3;
    u32 uVar5;
    s32 iVar6;
    s32 pp;
    s32 iVar4;
    u32 *gp;
    s32 tv;

    gp = &data_ov005_02167f00;
    pp = param_1;
    iVar4 = func_01ffdb08(*(s16 *)*gp);
    func_ov005_02163d4c(iVar4, 6, st);
    func_0202756c(iVar4, &st[9]);
    st[21] = st[15];
    st[22] = st[16];
    st[23] = st[17];
    uVar5 = func_02028130(iVar4);
    func_01ff832c(FX(uVar5, 2048), &st[21], st, &st[3]);
    uVar5 = func_02028130(iVar4);
    func_01ff832c((u32)((((s64)1 - (s64)(s32)uVar5) * 2048) >> 12), &st[21], st, &st[6]);
    uVar5 = func_02028130(iVar4);
    st[5] = st[5] + FX(uVar5, 2048);
    uVar5 = func_02028130(iVar4);
    st[8] = st[8] + FX(uVar5, 2048);
    func_02081aec(pp, &st[3], &st[6]);
    iVar6 = func_02028130(iVar4);
    uVar3 = func_02028118(iVar4);
    {
        s32 tvb = ((s32 *)&data_ov005_02167c48)[uVar3];
        *(u32 *)(pp + 0x44) = FX(tvb, iVar6);
    }
    *(s32 *)(pp + 0x54) = *(s16 *)(*(u32 *)&data_ov005_02167f00 + 8);
}
