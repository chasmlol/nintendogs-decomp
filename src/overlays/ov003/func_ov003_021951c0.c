#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T3;

extern void func_02026058(u8 *p);
extern s32 func_02035770(u8 *p, u32 a);
extern void func_02025f4c(u8 *p);
extern s32 func_0203579c(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern u32 func_0203567c(u8 *p);
extern void func_ov003_02197f94(u8 *p, u32 a);

void func_ov003_021951c0(u8 *p)
{
    u8 *r5;
    s32 bVar;

    if (*(s8 *)(p + 0xa0) == 0) {
        func_02026058(p);
    } else {
        if (func_02035770(p, 21) != 0) {
            func_02025f4c(p);
        }
    }
    if (func_0203579c(p, 24) != 0) {
        *(s32 *)(p + 0x25c) = FX_Mul(func_02028124(p), -80);
        *(s32 *)(p + 0x264) = -(*(s32 *)(p + 0x25c) << 4);
    }
    r5 = func_020364cc(p);
    if (r5 != 0) {
        if (*(s16 *)(r5 + 0x90) == 0 || *(s16 *)(r5 + 0x90) == 2) {
            bVar = 1;
        } else if (*(s16 *)(r5 + 0x94) == 53 && func_020c1f34(r5) == 0) {
            bVar = 1;
        } else {
            bVar = 0;
        }
        if (!bVar) {
            *(T3 *)(p + 0x26c) = *(T3 *)(r5 + 0xbc);
            *(T3 *)(p + 0x278) = *(T3 *)(p + 0x26c);
            *(T3 *)(p + 0x3b4) = *(T3 *)(p + 0x26c);
            func_02037450(p, 0x100);
        }
    }
    func_ov003_02197f94(p, func_0203567c(p));
}
