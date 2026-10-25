#include "ctx.h"

extern void func_020264f4(u32 p);
extern u8 func_020255a4(u32 p);

u8 func_ov005_021657f0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x21c;
    func_020264f4((u32)param_1);
    return func_020255a4((u32)param_1);
}
