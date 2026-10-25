#include "ctx.h"

extern void func_0206c9b8(u16 *a, u16 *b, u32 c);

u32 func_02087d6c(u8 *param_1, u16 *param_2, s32 param_3, u32 param_4)
{
    func_0206c9b8(param_2, (u16 *)(*(u8 **)(param_1 + 0x1c) + param_3), param_4);
    return 0;
}
