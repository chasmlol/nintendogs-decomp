#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02024e40(u8 *p, u32 a, s32 b);
extern void func_02039818(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0202fd7c(u8 *p);

void func_0200e510(u8 *p)
{
    u8 *iv;
    s32 r;

    func_02024e40(p, 11, FX_Mul(func_02028124(p), 93));
    func_02039818(p);
    iv = func_0203541c(p);
    if (iv != 0) {
        func_0203e8cc(p, 2, 1);
        switch (*(s16 *)(iv + 0x90)) {
        case 4:
            if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
                *(s32 *)(p + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
                *(s32 *)(p + 0x948) = 8;
            }
            break;
        }
        r = func_ov003_02198298(p);
    } else {
        r = 0;
    }
    if (r != 0) {
        return;
    }
    if (func_0203567c(p) != 0) {
        func_0202fd7c(p);
    }
}
