#include "ctx.h"

extern void func_0206c9b8(void *dst, void *src, u32 n);

u32 func_0206eff8(u8 *p, u16 b, u32 c, u32 d, u32 e, u32 f, ...)
{
    u8 *base;
    u8 *q;
    u8 buf[4];

    base = p;
    buf[0] = 3;
    *(u16 *)(buf + 2) = b;
    func_0206c9b8(buf, base, 1);
    q = (u8 *)((u32)base + 1);
    func_0206c9b8(buf + 2, q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8(&c, q, 1);
    q = (u8 *)((u32)q + 1);
    func_0206c9b8(&d, q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8(&e, q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8(&f, q, 2);
    return (u32)(q + 2) - (u32)base;
}
