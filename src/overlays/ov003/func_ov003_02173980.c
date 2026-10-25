#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, u32 a, u32 b, u32 c);
extern BOOL func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02173980(u8 *p)
{
    s32 r;
    s16 h;
    u8 *q;

    r = func_ov003_02174904(p, 20, -1, 0);
    h = *(s16 *)(p + 0xea);
    if (h >= 16 && h <= 30) {
        return;
    }
    if (r == 0) {
        return;
    }
    if (func_02039cc4(p)) {
        q = func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(p + 136));
    }
    if (*(u16 *)(p + 0xf4) >= 79 && *(u16 *)(p + 0xf4) < 99) {
        func_0203e908(p, 0x438);
        return;
    }
    func_0203e908(p, 4);
}
