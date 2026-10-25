#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

extern u8 data_0213b424[];
extern s32 func_02028124(u8 *p);
extern s32 func_02024e40(u8 *p, s32 a, s32 b);
extern void func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 a);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_0201bff4(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;
    u8 *iVar5;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024e40(param_1, 0x18, FX_Mul(uVar1, 85));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 0x18, 0x25, FX_Mul(uVar1, 126));
    }
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 8)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar5 = (u8 *)func_0203541c(param_1);
    if (iVar5 == 0) {
        goto nul;
    }
    func_0203e8cc(param_1, 2, 1);
    if (*(s16 *)(iVar5 + 0x90) == 4) {
        goto b4;
    }
    if (*(s16 *)(iVar5 + 0x90) != 7) {
        goto done;
    }
    goto b7;
b4:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(s32 *)(param_1 + 0x948) = 1;
        }
    }
    goto done;
b7:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(s32 *)(param_1 + 0x948) = 8;
        }
    }
done:
    iVar2 = func_ov003_02198298(param_1);
    goto tail;
nul:
    iVar2 = 0;
tail:
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, 9);
}
