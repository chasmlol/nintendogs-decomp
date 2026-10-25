#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_ov005_02167f00;
extern u8 *func_01ffdb08(s32 a);
extern void func_020275f0(u8 *a, s32 *b);
extern void func_0202756c(u8 *a, u32 *b);
extern s32 func_02028130(u8 *a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02081aec(u8 *a, s32 *b, s32 *c);

void func_ov005_02161f1c(u8 *param_1)
{
    s32 aiStack_80[3];
    s32 aiStack_74[3];
    s32 aiStack_68[3];
    u32 auStack_5c[12];
    s32 cp[3];
    s32 V;
    u8 *iVar1;
    iVar1 = func_01ffdb08(*(s16 *)(*(u8 **)&data_ov005_02167f00));
    func_020275f0(iVar1, aiStack_80);
    func_0202756c(iVar1, auStack_5c);
    cp[0] = auStack_5c[6];
    cp[1] = auStack_5c[7];
    cp[2] = auStack_5c[8];
    V = func_02028130(iVar1);
    func_01ff832c(FX_Mul(V, 3686), cp, aiStack_80, aiStack_74);
    V = func_02028130(iVar1);
    func_01ff832c(FX_Mul(V, -3686), cp, aiStack_80, aiStack_68);
    func_02081aec(param_1, aiStack_74, aiStack_68);
    V = func_02028130(iVar1);
    *(s32 *)(0x44 + param_1) = FX_Mul(V, 3686);
    V = func_02028130(iVar1);
    *(s32 *)(param_1 + 0x54) = (s16)V;
}
