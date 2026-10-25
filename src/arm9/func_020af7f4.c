#include "ctx.h"

extern void func_020bca08(u32 a);

void func_020af7f4(u8 *param_1)
{
    *(s16 *)(param_1 + 0x7c) = -1;
    func_020bca08(0);
    *(u16 *)(param_1 + 0x76) = 0;
    *(u16 *)(param_1 + 0x78) = 0;
}
