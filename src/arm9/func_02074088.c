#include "ctx.h"

extern void func_0206bdf0(void);
extern void func_0206bc1c(void);
extern void func_0206bc8c(u8 *dst, u32 a, u32 b);

void func_02074088(u8 *p, s32 p2)
{
    u32 r4;
    u32 r5;
    u32 r7;
    u8 *q;
    u32 t;

    if (p2 != 0) {
        func_0206bdf0();
    }
    t = (u32)*(u16 *)(p + 0xc) << 3;
    if (t != 0) {
        func_0206bc8c(p + *(s32 *)(p + 0x14), (*(u32 *)(p + 8) & 0xffff) << 3, t);
        *(u16 *)(p + 0x10) = *(u16 *)(p + 0x10) | 1;
    }
    r7 = (u32)*(u16 *)(p + 0x1c) << 3;
    if (r7 != 0) {
        r4 = *(u32 *)(p + 0x18) & 0xffff;
        r5 = r4 << 3;
        q = p + *(s32 *)(p + 0x28);
        func_0206bc8c(p + *(s32 *)(p + 0x24), r5, r7);
        func_0206bc8c(q, ((0x1ffff & (r4 << 3)) >> 1) + 0x20000 + ((r5 & 0x40000) >> 2), r7 >> 1);
        *(u16 *)(p + 0x20) = *(u16 *)(p + 0x20) | 1;
    }
    if (p2 != 0) {
        func_0206bc1c();
    }
}
