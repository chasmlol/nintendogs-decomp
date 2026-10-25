#include "ctx.h"

extern void func_02026c24(u32 p);
extern u8 func_020256fc(u32 p);

u8 func_020599c4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xdd;
    func_02026c24((u32)param_1);
    return func_020256fc((u32)param_1);
}
