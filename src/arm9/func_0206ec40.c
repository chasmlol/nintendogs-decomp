#include "ctx.h"
extern void func_0206c9b8(void *a, u8 *b, u32 c);
u32 func_0206ec40(u8 *p0, u16 p1, u32 p2, u32 p3)
{
    u8 b;
    u16 h;
    u8 *q;
    b = 9;
    h = p1;
    func_0206c9b8(&b, p0, 1);
    q = p0 + 1;
    func_0206c9b8(&h, q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8(&p2, q, 1);
    q = (u8 *)((u32)q + 1);
    func_0206c9b8(&p3, q, 4);
    return (u32)(q + 4) - (u32)p0;
}
