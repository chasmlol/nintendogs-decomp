#include "ctx.h"

extern u8 data_0213e214[];

typedef void (*Fn2)(u32, u32);

void func_0205eea0(u32 a, u32 b)
{
    u32 *t = *(u32 **)(data_0213e214 + 8);
    Fn2 f = (Fn2)t[1];
    f(a, b);
}
