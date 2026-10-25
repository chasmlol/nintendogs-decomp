#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *);
extern s32 func_0202508c(u8 *, s32, s32, s32);
extern s32 func_02024d40(u8 *, s32, s32, s32);
extern s32 func_02026fe0(u8 *);
extern void func_0201d1f0(u8 *);
extern void func_02035c98(u8 *, s32);
extern s32 func_0203541c(u8 *);
extern void func_0203e8cc(u8 *, s32, s32);
extern s32 func_ov003_02198298(u8 *);
extern s32 func_0203567c(u8 *);
extern void func_0203e908(u8 *, s32);
extern u8 data_0213b424[];

void func_0201b824(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;
    s32 res;

    uVar1 = func_02028124(param_1);
    iVar2 = func_0202508c(param_1, 11, 26, FX_Mul(uVar1, 149));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_0202508c(param_1, 42, 60, FX_Mul(uVar1, 100));
    }
    uVar1 = func_02028124(param_1);
    iVar2 = func_02024d40(param_1, 6, 28, FX_Mul(uVar1, 93));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 43, 66, FX_Mul(uVar1, -421));
    }
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        (*(void (**)(u8 *))(data_0213b424 + 0x14))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(iVar2 + 0x90)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5) {
                if (*(s8 *)(param_1 + 0x8b) != 4) {
                    *(s32 *)(param_1 + 0x948) = 1;
                }
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5) {
                if (*(s8 *)(param_1 + 0x8b) != 4) {
                    *(s32 *)(param_1 + 0x948) = 8;
                }
            }
            break;
        }
        res = func_ov003_02198298(param_1);
    } else {
        res = 0;
    }
    if (res != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, 14);
}
