#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern void func_02025bb0(u8 *p);
extern u8 func_02036e74(u8 *p);

u8 func_ov003_0216ff3c(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 18;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    *(u8 *)(param_1 + 152) = 1;
    func_0202675c(param_1);
    func_02025bb0(param_1);
    *(vu32 *)(param_1 + 0x948) = *(vu32 *)(param_1 + 0x948) | 1;
    return func_02036e74(param_1);
}
