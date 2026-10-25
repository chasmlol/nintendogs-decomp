#include "ctx.h"

extern void func_02026c24(u32 p);
extern u8 func_020256fc(u32 p);

u8 func_02059e4c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xc0;
    func_02026c24((u32)param_1);
    return func_020256fc((u32)param_1);
}
