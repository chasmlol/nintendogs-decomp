#include "ctx.h"

extern u8 *func_02036578(u8 *p);
extern s32 func_02027708(u8 *p);
extern BOOL func_02032aac(u8 *p, s32 a);
extern s32 func_02035744(u8 *p, s32 a);
extern void func_020362ec(u8 *p, s32 a);
extern void func_0202707c(u8 *p, s32 a);
extern s32 func_02028124(u8 *p);
extern s32 func_0202518c(u8 *p, s32 a, s32 b);
extern s32 func_0204754c(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0204fc38(u8 *p);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020473bc(u8 *param_1)
{
    u8 *iVar2;
    s32 iVar4;
    BOOL bVar1;
    s32 uVar3;

    iVar2 = func_02036578(param_1);
    if (iVar2 != NULL) {
        uVar3 = func_02027708(iVar2);
        bVar1 = func_02032aac(param_1, uVar3);
        if (bVar1 && (iVar4 = func_02035744(param_1, 0x28), iVar4 != 0) &&
            *(s32 *)(param_1 + 0x468) == 0) {
            *(s32 *)(param_1 + 0x468) = 1;
            func_020362ec(iVar2, (s16)(s32)*(s8 *)(param_1 + 0x88) + 0);
            func_0202707c(iVar2, 0x12);
        }
    }
    uVar3 = func_02028124(param_1);
    iVar4 = func_0202518c(param_1, 0x12, FX_Mul(uVar3, 0x500));
    if (iVar4 == 0) {
        uVar3 = func_02028124(param_1);
        func_0202518c(param_1, 0x22, FX_Mul(uVar3, 0x140));
    }
    iVar4 = func_0204754c(param_1, 0);
    if (iVar4 == 0) {
        iVar4 = func_0203567c(param_1);
        if (iVar4 != 0) {
            func_0204fc38(param_1);
            return;
        }
        return;
    }
}
