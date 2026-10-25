#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern u8 *data_02159444;
extern u32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, s32 a, s32 b, u32 c);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203541c(u8 *p);
extern s32 func_0202d108(u8 *p, s32 a, s32 b, s32 c);
extern void func_ov003_02198420(u8 *p, s32 a, s32 b);
extern void func_ov003_0218c3e0(u8 *p, s32 a, s32 b);

static inline u32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (u32)(v >> 12);
}

void func_ov003_0217c944(u8 *param_1)
{
    u32 uVar1;
    s32 iVar2;
    s32 iVar3;
    s32 r5;

    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 0x1e, 0x31, mulr(0x102, (s32)uVar1));
    iVar2 = *(s32 *)(data_02159444 + 0x1c);
    *(Tri3 *)(param_1 + 0x3b4) = *(Tri3 *)(iVar2 + 0x30);
    iVar2 = func_0200f8e0(param_1);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    r5 = func_0203541c(param_1);
    iVar3 = func_0202d108(param_1, 0, r5, 1);
    if (iVar3 != 0) {
        return;
    }
    if (r5 != 0) {
        func_ov003_02198420(param_1, r5, 0);
        return;
    }
    func_ov003_0218c3e0(param_1, 0, 0);
}
