#include "ctx.h"

extern u8 data_0213b424[];

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
s32 func_02024d40(u8 *p, s32 a, s32 b, s32 c);
s32 func_02026fe0(u8 *p);
void func_0201d1f0(u8 *p);
void func_02035c98(u8 *p, s32 a);
s32 func_0203541c(u8 *p);
void func_0203e8cc(u8 *p, s32 a, s32 b);
s32 func_ov003_02198298(u8 *p);
s32 func_0203567c(u8 *p);
void func_0203e908(u8 *p, s32 v);

void func_020199bc(u8 *param_1)
{
    s32 iVar2;

    iVar2 = func_02024d40(param_1, 23, 37, -FX_Mul(func_02028124(param_1), 98));
    if (iVar2 == 0) {
        func_02024d40(param_1, 37, 60, -FX_Mul(func_02028124(param_1), 47));
    }
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 12)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)((u8 *)iVar2 + 0x90)) {
    case 4:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    iVar2 = func_ov003_02198298(param_1);
    goto done;
zero:
    iVar2 = 0;
done:
    if (iVar2 != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0203e908(param_1, 8);
}
