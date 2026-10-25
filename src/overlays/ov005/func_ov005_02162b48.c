#include "ctx.h"

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (s64)(b) + 0x800) >> 12))
#define PV(p) (**(s32 **)((u8 *)(p) + 0x18))

extern u8 *data_ov005_02167f00;
extern int func_01ffdb08(int a);
extern int func_02027428(int a);
extern void func_020271b8(int a, int *b, int c);
extern u32 func_02028130(int a);

#pragma opt_propagation off
void func_ov005_02162b48(u8 *param_1)
{
    int iVar3;
    int a9;
    int a10;
    int a11;
    u8 *pp;
    int aiStack_48[12];
    int iVar4;
    u32 uVar5;
    s32 t3;
    s32 pv3;
    s32 sm;
    u8 **gp;

    gp = &data_ov005_02167f00;
    pp = param_1;
    iVar3 = func_01ffdb08((int)*(s16 *)*gp);
    iVar4 = func_02027428(iVar3);
    if (iVar4 == 2) {
        func_020271b8(iVar3, aiStack_48, 0x1c);
    } else {
        func_020271b8(iVar3, aiStack_48, 0x1b);
    }
    a10 = aiStack_48[10];
    a9 = aiStack_48[9];
    a11 = aiStack_48[11];
    uVar5 = func_02028130(iVar3);
    t3 = FX_MUL(uVar5, 0x333);
    *(int *)(pp + 0x20) = a9 + *(int *)(PV(pp) + 4);
    *(int *)(pp + 0x24) = a10 + *(int *)(PV(pp) + 8);
    sm = a11 + t3;
    pv3 = *(int *)(PV(pp) + 0xc);
    *(int *)(pp + 0x28) = sm + pv3;
    uVar5 = func_02028130(iVar3);
    *(s32 *)(pp + 0x44) = FX_MUL(uVar5, 0x3ae);
    *(int *)(pp + 0x54) = (int)*(s16 *)(data_ov005_02167f00 + 8);
}
