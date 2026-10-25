#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern u8 data_0213b424[];
extern s32 func_02028124(u8 *p);
extern void func_02024ff0(u8 *p, s32 v);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 n);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_020174cc(u8 *param_1)
{
    s32 iVar2;
    s32 uVar1;

    uVar1 = func_02028124(param_1);
    func_02024ff0(param_1, -FX_Mul(uVar1, 26));
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 0x8)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(iVar2 + 0x90)) {
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
    goto join;
zero:
    iVar2 = 0;
join:
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, 7);
}
