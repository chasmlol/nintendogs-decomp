#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203541c(u8 *p);
extern s32 func_0202d108(u8 *p, s32 a, s32 b, s32 c);
extern void func_ov003_02198420(u8 *p, s32 a, s32 b);
extern void func_ov003_0218c3e0(u8 *p, s32 a, s32 b);

typedef struct { u32 a, b, c; } Vec3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_0217cb68(u8 *param_1)
{
    s32 uVar1;
    s32 iVar1;
    s32 iVar2;
    u8 *Q;

    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 30, 49, FX_Mul(uVar1, 0x102));
    Q = *(u8 **)(data_02159444 + 0x1c);
    *(Vec3 *)(param_1 + 0x3b4) = *(Vec3 *)(Q + 0x30);
    if (func_0200f8e0(param_1) != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    iVar1 = func_0203541c(param_1);
    iVar2 = func_0202d108(param_1, 0, iVar1, 1);
    if (iVar2 != 0) {
        return;
    }
    if (iVar1 != 0) {
        func_ov003_02198420(param_1, iVar1, 0);
        return;
    }
    func_ov003_0218c3e0(param_1, 0, 0);
}
