#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02025264(u8 *p, u32 n, s32 v);
extern s32 func_0203567c(u8 *p);
extern s32 func_02036510(u8 *p);
extern void func_02027654(s32 a, u8 *b);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern void func_020397fc(u8 *p);

void func_0200f7dc(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;
    s32 iVar3;

    uVar1 = func_02028124(param_1);
    func_02025264(param_1, 9, FX_Mul(uVar1, 512));
    iVar2 = func_0203567c(param_1);
    iVar3 = func_02036510(param_1);
    if (iVar3 != 0) {
        func_02027654(iVar3, param_1 + 0x3b4);
    }
    iVar3 = func_0203541c(param_1);
    if (iVar3 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(iVar3 + 0x90)) {
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
    iVar3 = func_ov003_02198298(param_1);
    goto join;
zero:
    iVar3 = 0;
join:
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 == 0) {
        return;
    }
    func_020397fc(param_1);
}
