#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } V3;

extern void func_02026358(u8 *p);
extern s32 func_02035770(u8 *p, u32 a);
extern void func_0202615c(u8 *p);
extern s32 func_0203579c(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_ov003_02197f94(u8 *p, s32 a);

void func_ov003_02194cd0(u8 *p)
{
    s32 x;
    u8 *r5;
    s32 bVar1;

    if (*(s8 *)(p + 160) == 0) {
        func_02026358(p);
    } else {
        if (func_02035770(p, 8) != 0) {
            func_0202615c(p);
        }
    }
    if (func_0203579c(p, 10) != 0) {
        x = func_02028124(p);
        *(s32 *)(p + 0x25c) = FX_Mul(x, -65);
        *(s32 *)(p + 0x264) = *(s32 *)(p + 0x25c) * -17;
    }
    r5 = func_020364cc(p);
    if (r5 != 0) {
        if (*(s16 *)(r5 + 144) == 0 || *(s16 *)(r5 + 144) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(r5 + 148) == 53 && func_020c1f34(r5) == 0) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (!bVar1) {
            *(V3 *)(p + 620) = *(V3 *)(r5 + 188);
            *(V3 *)(p + 632) = *(V3 *)(p + 620);
            *(V3 *)(p + 948) = *(V3 *)(p + 620);
            func_02037450(p, 256);
        }
    }
    func_ov003_02197f94(p, func_0203567c(p));
}
