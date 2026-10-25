#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_02023780(u8 *p);
extern u16 *func_02024114(u8 *p, s32 v);
extern u32 func_020293d8(u8 *p, s32 a, s32 b);

u32 func_ov003_021723d8(u8 *p)
{
    u8 *q;
    u16 *ps;
    s32 r;

    r = func_ov003_02174844(p, 1, 73, 74, 75, 76, 10);
    if (r == 0) {
        return r;
    }
    if (func_02039cc4(p) != 0) {
        q = func_020bc3c4() + 0x88;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(p + 0x88));
    }
    func_0203e908(p, 4);
    r = func_02023780(p);
    ps = func_02024114(p, r);
    if (ps == 0) {
        return (u32)ps;
    }
    return func_020293d8(p, (s16)(ps[0] + 12), *(u8 *)(ps + 0x14));
}
