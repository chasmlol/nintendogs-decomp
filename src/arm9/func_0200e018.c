#include "ctx.h"

#define FX(x, k) ((u32)((((s64)(x)) * ((s64)(k)) + 0x800) >> 12))

s32 func_02028124(u8 *p);
s32 func_0202518c(u8 *p, u32 a, u32 b);
s32 func_02035744(u8 *p, u32 a);
void func_02022b7c(u8 *p);
s32 func_0203567c(u8 *p);
void func_0202fd7c(u8 *p);

void func_0200e018(u8 *param_1)
{
    s32 uVar2;
    s32 iVar3;
    u32 t;

    uVar2 = func_02028124(param_1);
    t = FX(uVar2, -655);
    iVar3 = func_0202518c(param_1, 5, t);
    if (iVar3 != 0) {
        iVar3 = func_02035744(param_1, 1);
        if (iVar3 != 0) {
            uVar2 = func_02028124(param_1);
            t = FX(uVar2, 1503);
            *(u32 *)(param_1 + 0x260) = FX(*(s32 *)(param_1 + 0x198), (s32)t);
            *(u32 *)(param_1 + 0x264) = FX(*(s32 *)(param_1 + 0x19c), (s32)t);
            *(u32 *)(param_1 + 0x268) = FX(*(s32 *)(param_1 + 0x1a0), (s32)t);
        } else {
            uVar2 = func_02028124(param_1);
            t = FX(uVar2, -375);
            *(u32 *)(param_1 + 0x260) = FX(*(s32 *)(param_1 + 0x198), (s32)t);
            *(u32 *)(param_1 + 0x264) = FX(*(s32 *)(param_1 + 0x19c), (s32)t);
            *(u32 *)(param_1 + 0x268) = FX(*(s32 *)(param_1 + 0x1a0), (s32)t);
        }
    }
    func_02022b7c(param_1);
    iVar3 = func_0203567c(param_1);
    if (iVar3 != 0) {
        func_0202fd7c(param_1);
    }
}
