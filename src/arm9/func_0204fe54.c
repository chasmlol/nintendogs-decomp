#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *func_02036578(u8 *p);
extern s32 func_0202e304(u8 *p);
extern void func_02027668(u8 *p, s32 *v);
extern s32 func_02027894(u8 *p, u8 *q);
extern u32 func_02050030(u8 *p, u8 *q);
extern void func_0203e908(u8 *p, u32 a);

u32 func_0204fe54(u8 *p)
{
    u8 *iv;
    s32 v[3];
    s32 w[3];
    s32 r;
    s16 t;
    s32 dx;
    s32 dy;

    iv = func_02036578(p);
    if (iv == 0) {
        return 0;
    }
    if (func_0202e304(p) != 0) {
        func_02027668(p, v);
        dx = v[0] - *(s32 *)(iv + 0x2a0);
        dy = v[2] - *(s32 *)(iv + 0x2a8);
        t = (FX_Mul(dx, *(s32 *)(iv + 0x18c)) + FX_Mul(dy, *(s32 *)(iv + 0x194))) <= 0;
        if (!t) {
            func_0203e908(p, 0x2e5);
            return 1;
        }
        func_0203e908(p, 740);
        return 1;
    }
    r = func_02027894(p, iv);
    if (r == 0) {
        goto c0;
    }
    if (r == 1) {
        goto c1;
    }
    if (r != 2) {
        goto ret0;
    }
c1:
    func_02027668(p, w);
    dx = w[0] - *(s32 *)(iv + 0x2a0);
    dy = w[2] - *(s32 *)(iv + 0x2a8);
    t = (FX_Mul(dx, *(s32 *)(iv + 0x18c)) + FX_Mul(dy, *(s32 *)(iv + 0x194))) <= 0;
    if (!t) {
        func_0203e908(p, 0x2e5);
        return 1;
    }
    func_0203e908(p, 740);
    return 1;
c0:
    return func_02050030(p, iv);
ret0:
    return 0;
}
