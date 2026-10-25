#include "ctx.h"

extern void func_0206c7bc(u32 a, u32 b, u32 c);

void func_02095670(u16 *param_1)
{
    vu16 z = 0;
    func_0206c7bc(z, (u32)param_1, 0x85c);
    *param_1 = 0xffff;
}
