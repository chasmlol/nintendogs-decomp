#include "ctx.h"

extern u32 data_02150c00[];
u64 func_02066024(void *a);
void func_02065fa4(u32 a, u32 b);

typedef u64 (*FnPtr)(void *);

void func_02065bb0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 *g = data_02150c00;
    u64 r = func_02066024(g);
    if ((u32)r != 0) {
        r = ((FnPtr)g[0])(g);
    }
    func_02065fa4((u32)r, (u32)(r >> 32));
}
