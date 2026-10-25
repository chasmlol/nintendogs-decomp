#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T3;

extern u8 *data_02159444;

extern s32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern s32 func_0202d108(u8 *p, u32 a, u8 *b, u32 c);
extern void func_ov003_0218c3e0(u8 *p, u32 a, u32 b);
extern void func_ov003_02198420(u8 *p, u8 *a, u32 b);

void func_ov003_0217cd8c(u8 *p)
{
    u8 *iv;
    u8 *q;

    func_02024d40(p, 30, 49, FX_Mul(func_02028124(p), 258));
    q = *(u8 **)(data_02159444 + 0x1c);
    *(T3 *)(p + 948) = *(T3 *)(q + 0x30);
    if (func_0200f8e0(p) != 0) {
        return;
    }
    if (func_0203567c(p) == 0) {
        return;
    }
    iv = func_0203541c(p);
    if (func_0202d108(p, 0, iv, 1) != 0) {
        return;
    }
    if (iv != 0) {
        func_ov003_02198420(p, iv, 0);
        return;
    }
    func_ov003_0218c3e0(p, 0, 0);
}
