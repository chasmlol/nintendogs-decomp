#pragma avoid_byte strb
#include "ctx.h"

extern void func_0206c7d4(u8 *src, u8 *dst, u32 n);

static inline void SwapB(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0209300c(u16 *p0, u8 *p1)
{
    u8 *b;
    u32 n;
    u32 c;
    u32 a;
    u32 s;
    u16 h;
    h = *(u16 *)p1;
    b = (__typeof__(b))(p0);
    *(u16 *)b = h;
    a = (u32)b + 2;
    h = p1[2];
    c = (u32)b + 3;
    s = (u32)p1 + 120;
    SwapB(h, (vu8 *)a);
    n = 16;
    a = p1[3];
    p1 = b + 4;
    SwapB(a, (vu8 *)c);
    func_0206c7d4((u8 *)s, p1, n);
}
