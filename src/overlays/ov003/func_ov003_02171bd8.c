#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern BOOL func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);
extern void func_0203e908(u8 *p, u32 a);
extern u32 func_02023780(u8 *p);
extern u8 *func_02024114(u8 *p, u32 a);
extern u32 func_020293d8(u8 *p, s32 a, u32 b);

u32 func_ov003_02171bd8(u8 *p)
{
    u8 *q;
    u8 *ps;
    s32 r;

    r = func_ov003_02174844(p, 0, 0x1f8, 0x1f9, 0x204, 0x205, 10);
    if (r == 0) {
        return r;
    }
    if (func_02039cc4(p)) {
        q = func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(p + 136));
    }
    func_0203e908(p, 14);
    ps = func_02024114(p, func_02023780(p));
    if (ps == 0) {
        return (u32)ps;
    }
    return func_020293d8(p, (s16)(*(u16 *)ps + 12), ps[0x28]);
}
