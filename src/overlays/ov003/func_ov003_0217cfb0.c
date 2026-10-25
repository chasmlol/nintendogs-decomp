#include "ctx.h"

typedef struct { u32 w[3]; } T12;

extern u32 data_02159444;
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203541c(u8 *p);
extern s32 func_0202d108(u8 *p, u32 a, s32 b, u32 c);
extern void func_ov003_0218c3e0(u8 *p, u32 a, u32 b);
extern void func_ov003_02198420(u8 *p, s32 a, u32 b);

void func_ov003_0217cfb0(u8 *param_1)
{
    s32 r4;

    *(T12 *)(param_1 + 948) = *(T12 *)(*(u8 **)(*(u8 **)&data_02159444 + 0x1c) + 48);
    if (func_0200f8e0(param_1) != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    r4 = func_0203541c(param_1);
    if (func_0202d108(param_1, 0, r4, 1) != 0) {
        return;
    }
    if (r4 == 0) {
        goto zero;
    }
    func_ov003_02198420(param_1, r4, 0);
    return;
zero:
    func_ov003_0218c3e0(param_1, 0, 0);
}
