#include "ctx.h"

extern u32 data_0213b424[];
extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02018e28(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;
    u8 *r5;
    s16 v;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024d40(param_1, 23, 39, FX_Mul(uVar1, 115));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 45, 69, FX_Mul(uVar1, 122));
    }
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        ((void (*)(u8 *))data_0213b424[1])(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    r5 = func_0203541c(param_1);
    if (r5 == NULL) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    v = *(s16 *)(r5 + 0x90);
    if (v == 4) {
        goto case4;
    }
    if (v != 7) {
        goto done;
    }
    goto case7;
case4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(s32 *)(param_1 + 0x948) = 1;
    }
    goto done;
case7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(s32 *)(param_1 + 0x948) = 8;
    }
done:
    iVar2 = func_ov003_02198298(param_1);
    goto check;
zero:
    iVar2 = 0;
check:
    if (iVar2 != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0203e908(param_1, 4);
}
