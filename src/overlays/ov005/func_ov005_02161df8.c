#include "ctx.h"

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

extern int data_ov005_02167f00;
extern int func_01ffdb08(int a);
extern void func_ov005_02163d4c(int a, int b, u32 *c);
extern void func_0202756c(int a, u32 *b);
extern u32 func_02028130(int a);
extern void func_01ff832c(int a, int *b, int *c, int *d);
extern void func_02081aec(int a, int *b, int *c);

typedef struct {
    u32 r[6];
    u32 x[3];
    u32 pad[3];
    u32 L[3];
} F;

void func_ov005_02161df8(int param_1)
{
    int iVar1;
    u32 uVar2;
    u32 auStack_80[3];
    int aiStack_74[3];
    int aiStack_68[3];
    F f;

    iVar1 = func_01ffdb08((int)*(s16 *)*(int *)&data_ov005_02167f00);
    func_ov005_02163d4c(iVar1, 6, auStack_80);
    func_0202756c(iVar1, f.r);
    f.L[0] = f.x[0];
    f.L[1] = f.x[1];
    f.L[2] = f.x[2];
    uVar2 = func_02028130(iVar1);
    func_01ff832c(FX_MUL(uVar2, 3072), (int *)f.L, (int *)auStack_80, aiStack_74);
    uVar2 = func_02028130(iVar1);
    func_01ff832c(FX_MUL(uVar2, -3072), (int *)f.L, (int *)auStack_80, aiStack_68);
    func_02081aec(param_1, aiStack_74, aiStack_68);
    *(int *)(param_1 + 0x44) = (int)(s16)func_02028130(iVar1);
    *(int *)(param_1 + 0x54) = (int)(s16)func_02028130(iVar1);
}
