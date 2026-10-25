#include "ctx.h"

extern u32 data_0215216c[];
extern void func_02073628(u32 *p, u32 a, u32 b);
extern void func_020710e8(u32 a, u32 b, u32 c);

void func_0207161c(u32 param_1, u32 param_2)
{
    u32 *g;
    u32 f4;

    g = data_0215216c;
    if (g[0] == 0) {
        return;
    }
    f4 = g[1];
    if (f4 == 0) {
        if (param_1 == 0) {
            func_020710e8(f4, param_2, param_1);
            return;
        }
        func_02073628(g + 15, 0, param_1);
        g[0x13] = 1;
        return;
    }
}
