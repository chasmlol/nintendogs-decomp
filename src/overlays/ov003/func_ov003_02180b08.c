#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_0215942c;

extern s32 func_02028124(u8 *p);
extern s32 func_0202518c(u8 *p, u32 a, s32 b);
extern void func_0202508c(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_0203567c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02180b08(u8 *p)
{
    s32 v;
    s32 r;

    v = func_02028124(p);
    r = func_0202518c(p, 23, -FX_Mul(v, -249));
    if (r == 0) {
        v = func_02028124(p);
        func_0202508c(p, 24, 45, -FX_Mul(v, 74));
    }
    if (func_0203567c(p) == 0) {
        return;
    }
    if (*(u16 *)data_0215942c == 1 || *(u16 *)data_0215942c == 4) {
        func_0203e908(p, 0x3ab);
        return;
    }
    switch (func_020385e4(p)) {
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
