#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, u32 a, u32 b, u32 c);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);
extern void func_0203e908(u8 *p, u32 b);

void func_ov003_021732e8(u8 *p)
{
    s32 r;
    s16 v;
    u8 *q;
    u16 w;

    r = func_ov003_02174904(p, 30, 0x18a, 0x8000);
    v = *(s16 *)(p + 0xea);
    if (v < 16) {
        goto skip;
    }
    if (v <= 30) {
        return;
    }
skip:
    if (r == 0) {
        return;
    }
    if (func_02039cc4(p) != 0) {
        q = func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(p + 0x88));
    }
    w = *(u16 *)(p + 0xf4);
    if (w < 79) {
        goto def;
    }
    if (w >= 99) {
        goto def;
    }
    func_0203e908(p, 0x438);
    return;
def:
    func_0203e908(p, 14);
}
