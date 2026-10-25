#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02024e40(u8 *p, u32 a, s32 b);
extern void func_02039818(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0202fd7c(u8 *p);

void func_0200e2fc(u8 *param_1)
{
    s32 uVar1;
    u8 *iVar5;
    s32 iVar2;
    uVar1 = func_02028124(param_1);
    func_02024e40(param_1, 11, FX_Mul(uVar1, 93));
    func_02039818(param_1);
    iVar5 = func_0203541c(param_1);
    if (iVar5 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(iVar5 + 144)) {
        case 4:
            if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
                *(u32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
                *(u32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar2 = func_ov003_02198298(param_1);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0202fd7c(param_1);
    }
}
