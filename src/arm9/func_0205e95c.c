#include "ctx.h"

typedef struct { u32 a; u32 b; } S8;

extern void func_0205ea64(u32 *out, S8 s1, S8 s2, u32 c);

u32 func_0205e95c(u32 p0, u32 p1, u32 p2)
{
    S8 s1;
    S8 s2;
    u32 out[2];
    s1.a = p0;
    s2.a = p1;
    func_0205ea64(out, s1, s2, p2);
    return out[0];
}
