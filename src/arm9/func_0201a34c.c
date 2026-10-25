#include "ctx.h"

extern u8 data_0213b424[];
extern u32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 a);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_0201a34c(u8 *param_1)
{
    u32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024d40(param_1, 0x17, 0x27, -mulr(0x73, (s32)uVar1));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 0x2d, 0x45, -mulr(0x7a, (s32)uVar1));
    }
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 0xc)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    if (*(s16 *)(iVar2 + 0x90) == 4) {
        goto case4;
    }
    if (*(s16 *)(iVar2 + 0x90) != 7) {
        goto callit;
    }
    goto case7;
case4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto callit;
case7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
callit:
    iVar2 = func_ov003_02198298(param_1);
    goto after;
zero:
    iVar2 = 0;
after:
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, 8);
}
