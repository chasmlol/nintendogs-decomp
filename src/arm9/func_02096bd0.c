#include "ctx.h"

extern void func_02096c20(u32, u32, u32);

void func_02096bd0(u32 param_1)
{
    u16 r5 = (u16)param_1;
    u16 r6;
    func_02096c20(1, r5, 0);
    r6 = 0;
    do {
        func_02096c20(2, r5, r6);
        r6 = (u16)(r6 + 1);
    } while (r6 < 20);
}
