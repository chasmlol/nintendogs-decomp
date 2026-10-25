#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_02173ad0(u8 *p)
{
    s32 r;
    r = func_ov003_02174904(p, 18, -1, 0);
    if (*(s16 *)(p + 0xea) >= 16 && *(s16 *)(p + 0xea) <= 30) {
        return;
    }
    if (r == 0) {
        return;
    }
    r = func_02039cc4(p);
    if (r != 0) {
        u8 *q = func_020bc3c4() + 0x88;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(p + 0x88));
    }
    if (*(u16 *)(p + 0xf4) >= 79 && *(u16 *)(p + 0xf4) < 99) {
        func_0203e908(p, 0x438);
        return;
    }
    func_0203e908(p, 2);
}
