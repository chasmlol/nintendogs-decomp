#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

extern s32 func_01ffdb08(s32 a);
extern void func_02027178(s32 a, s32 *b, s32 c);
extern void func_02067e34(u8 *a, u8 *b, u8 *c);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, u8 *d);

void func_020be664(u8 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
    s32 iVar3;
    s32 aStack_50[12];
    s32 aStack_20[3];
    s32 t0;
    s32 t1;
    s32 t2;

    iVar3 = func_01ffdb08(*(s16 *)(param_1 + 0x98));
    if (iVar3 == 0) {
        return;
    }
    func_02027178(iVar3, aStack_50, 17);
    t0 = aStack_50[0];
    t1 = aStack_50[1];
    t2 = aStack_50[2];
    aStack_20[0] = t0;
    aStack_20[1] = t1;
    aStack_20[2] = t2;
    if (*(s32 *)(param_1 + 0x164) != 0) {
        goto nz;
    }
    aStack_20[1] = 0;
    *(s32 *)(param_1 + 0xb0) = FX_Mul(aStack_50[0], 410);
    *(s32 *)(param_1 + 0xb4) = FX_Mul(*(volatile s32 *)&aStack_20[1], 410);
    *(s32 *)(param_1 + 0xb8) = FX_Mul(aStack_20[2], 410);
    return;
nz:
    func_02067e34(param_1 + 0xbc, param_1 + 0x170, param_1 + 0xb0);
    *(u32 *)(param_1 + 0xb0) = *(u32 *)(param_1 + 0xb0) << param_2;
    *(s32 *)(param_1 + 0xb4) = param_4 + (*(s32 *)(param_1 + 0xb4) << param_3);
    *(u32 *)(param_1 + 0xb8) = *(u32 *)(param_1 + 0xb8) << param_2;
    aStack_20[1] = 0;
    func_01ff832c(0x333, aStack_20, param_1 + 0xb0, param_1 + 0xb0);
}
