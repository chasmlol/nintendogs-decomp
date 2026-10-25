#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern u8 *data_ov005_02167f00;
extern u32 data_ov005_02167c48[];
extern s32 func_01ffdb08(s32 a);
extern void func_ov005_02163d4c(s32 a, s32 b, s32 *c);
extern void func_0202756c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02081aec(u8 *p, s32 *a, s32 *b);
extern u16 func_02028118(s32 a);

/* a18: a17 with iVar4 declared first (pp second, iVar6 last) and the piVar2 deref at the end. The first term has no rounding
   (the target's subs/sbc has no adds #0x800). */
#pragma opt_propagation off
void func_ov005_02162e2c(u8 *param_1)
{
    s32 F[25];
    s32 iVar6;
    u8 *pp;
    u8 **gp;
    s32 iVar4;
    s32 uVar5;
    s32 uVar7;
    u16 uVar3;

    gp = (u8 **)&data_ov005_02167f00;
    pp = param_1;
    iVar4 = func_01ffdb08(*(s16 *)*gp);
    func_ov005_02163d4c(iVar4, 6, &F[0]);
    func_0202756c(iVar4, &F[9]);
    F[21] = F[15];
    F[22] = F[16];
    F[23] = F[17];
    uVar5 = func_02028130(iVar4);
    func_01ff832c((s32)((((s64)1 - (s64)uVar5) * 2048) >> 12), &F[21], &F[0], &F[3]);
    uVar5 = func_02028130(iVar4);
    uVar7 = FX_Mul(uVar5, -6144);
    func_01ff832c(uVar7, &F[21], &F[0], &F[6]);
    uVar5 = func_02028130(iVar4);
    F[5] = F[5] + FX_Mul(uVar5, 2048);
    uVar5 = func_02028130(iVar4);
    F[8] = F[8] + FX_Mul(uVar5, 2048);
    func_02081aec(pp, &F[3], &F[6]);
    iVar6 = func_02028130(iVar4);
    uVar3 = func_02028118(iVar4);
    {
        s32 tv = ((s32 *)data_ov005_02167c48)[uVar3];
        *(s32 *)(pp + 0x44) = FX_Mul(tv, iVar6);
    }
    *(s32 *)(pp + 0x54) = *(s16 *)(*(u8 **)&data_ov005_02167f00 + 8);
}
