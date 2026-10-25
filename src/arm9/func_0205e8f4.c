#include "ctx.h"
typedef struct { u32 a; u32 b; } Pair;
typedef struct { Pair x; Pair y; u64 r; } Frame;
extern void func_0205ea64(u64 *p, Pair a, Pair c, u32 e);
u64 func_0205e8f4(u32 p1, u32 p2, u32 p3, u32 p4, u32 param_5)
{
    Frame F;
    F.x.a = p1;
    F.x.b = p2;
    F.y.a = p3;
    F.y.b = p4;
    func_0205ea64(&F.r, F.x, F.y, param_5);
    return F.r;
}
