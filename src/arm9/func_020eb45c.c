#include "ctx.h"

extern void func_020c7820(u8 *p, void *q, u32 a, u32 b, u32 c);

void func_020eb45c(u8 *param_1, void *param_2)
{
    s32 v;
    v = *(s32 *)(param_1 + 0xb4);
    if (v <= 0) {
        v = -v;
    }
    if (v < 164) {
        func_020c7820(param_1, param_2, 0xc00, 0xfae, 0);
        return;
    }
    func_020c7820(param_1, param_2, 0xc00, 0xe66, 0);
}
