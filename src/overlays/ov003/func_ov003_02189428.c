#include "ctx.h"

void func_ov003_021894ec(int a, u32 b, u32 c, u32 d);

void func_ov003_02189428(int param_1)
{
    void (*fp)(int, u32, u32, u32) = func_ov003_021894ec;
    fp(param_1, 5, 0x57, *(u16 *)(param_1 + 0xfc) > 60);
}
