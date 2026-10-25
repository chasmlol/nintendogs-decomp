#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_0215942c;

extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_0203567c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_021805b0(u8 *p)
{
    s32 a4;
    s32 r;
    s32 iv;

    a4 = FX_Mul(func_02028124(p), 94);
    r = func_02024d40(p, 11, 36, FX_Mul(func_02028124(p), 163));
    if (r == 0) {
        func_02024d40(p, 46, 80, a4);
    }
    if (func_0203567c(p) == 0) {
        return;
    }
    if (*(u16 *)data_0215942c == 1 || *(u16 *)data_0215942c == 4) {
        func_0203e908(p, 0x3ab);
        return;
    }
    iv = func_020385e4(p);
    switch (iv) {
    case 0:
        func_0203e908(p, 0x3ab);
        return;
    case 1:
        func_0203e908(p, 0x3ad);
        return;
    case 2:
        func_0203e908(p, 0x3ae);
        return;
    case 3:
        func_0203e908(p, 0x3af);
        return;
    }
}
