#include "ctx.h"

extern void func_02026478(u32 p);
extern u8 func_02025bb0(u32 p);

u8 func_0205a24c(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = (s16)0x17e;
    func_02026478((u32)param_1);
    return func_02025bb0((u32)param_1);
}
