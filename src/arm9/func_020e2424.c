#include "ctx.h"

void func_020e28dc(u32 *dst, u32 *src);
void func_020e2480(u32 *a, u32 *b, u32 *c, s32 d);
void func_020e2664(u32 *a, u32 *b);

void func_020e2424(u32 *param_1, u32 *param_2, u32 *param_3, s32 param_4)
{
    u32 a[4];
    u32 b[4];
    u32 c[4];

    func_020e28dc(a, param_1);
    func_020e28dc(b, param_2);
    func_020e2480(a, b, c, param_4);
    func_020e2664(c, param_3);
}
