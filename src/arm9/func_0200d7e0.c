#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 *data_0214f464;

extern s32 func_02028124(u8 *p);
extern s32 func_0202508c(u8 *p, u32 a, u32 b, s32 c);
extern void func_0200da60(u8 *p, u32 a, u32 b);

void func_0200d7e0(u8 *p)
{
    s32 bVar1;
    s32 nb;
    s32 iv3;
    s32 iv4;
    s32 r;
    u32 v;

    bVar1 = 0;
    r = func_0202508c(p, 77, 96, FX_Mul(func_02028124(p), 129));
    if (r == 0) {
        r = func_0202508c(p, 116, 135, FX_Mul(func_02028124(p), 129));
        if (r == 0) {
            goto test;
        }
    }
    bVar1 = 1;
test:
    iv3 = 0;
    nb = (bVar1 == 0);
    if (nb != 0) {
        v = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = v;
        if ((u16)((((u32)(u16)v) * 200) >> 16) == 0) {
            iv3 = 1;
        }
    }
    iv4 = 0;
    if (nb != 0) {
        v = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = v;
        if ((u16)((((u32)(u16)v) * 200) >> 16) == 0) {
            iv4 = 1;
        }
    }
    func_0200da60(p, iv4, iv3);
}
