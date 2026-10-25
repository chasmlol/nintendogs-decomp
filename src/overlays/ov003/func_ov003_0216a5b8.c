#include "ctx.h"

void func_020264d4(u32 p);
u32 func_020255a4(u32 p);
void func_0202db24(u32 p, u32 b);

void func_ov003_0216a5b8(u32 param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x1aa;
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 1);
}
