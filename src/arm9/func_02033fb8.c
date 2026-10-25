#include "ctx.h"

typedef struct { u32 w[3]; } V3;

extern void func_020271e8(u8 *p, u32 *a, u32 n);
extern void func_01ff810c(u32 *a, u32 *b, u32 *c);
extern void func_01ff832c(s32 k, u32 *a, u32 *b, u32 *c);

void func_02033fb8(u8 *p)
{
    u32 b[6];
    u32 a[12];

    if ((*(s8 *)(p + 0x8b) == 2 || *(s16 *)(p + 0xea) == 0x4ec) &&
        (*(s8 *)(p + 0x95) == 0 || *(s8 *)(p + 0x95) == 4)) {
        func_01ff832c(0x8000, (u32 *)(p + 0x1a4), (u32 *)(p + 0x3b4), (u32 *)(p + 0x3a8));
        func_01ff832c(-0x8000, (u32 *)(p + 0x198), (u32 *)(p + 0x3a8), (u32 *)(p + 0x3a8));
        *(V3 *)(p + 0x39c) = *(V3 *)(p + 0x3a8);
        return;
    }
    func_020271e8(p, a, 11);
    func_01ff810c(a, (u32 *)(p + 0x1e0), a);
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    b[3] = a[3];
    b[4] = a[4];
    b[5] = a[5];
    func_01ff832c(0x800, b, (u32 *)(p + 0x3b4), (u32 *)(p + 0x3a8));
    func_01ff832c(0x400, &b[3], (u32 *)(p + 0x3a8), (u32 *)(p + 0x3a8));
    func_01ff832c(-0x800, b, (u32 *)(p + 0x3b4), (u32 *)(p + 0x39c));
    func_01ff832c(-0x400, &b[3], (u32 *)(p + 0x39c), (u32 *)(p + 0x39c));
}
