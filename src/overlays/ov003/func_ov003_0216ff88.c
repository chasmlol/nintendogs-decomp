#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern void func_02025bb0(u8 *p);
extern u8 func_02036e74(u8 *p);

u8 func_ov003_0216ff88(u8 *param_1)
{
    u32 flags;
    *(u16 *)(param_1 + 256 + 82) = 17;
    *(u16 *)(param_1 + 256 + 86) = 1;
    param_1[152] = 1;
    func_020266f8(param_1);
    func_02025bb0(param_1);
    flags = *(u32 *)(param_1 + 0x948);
    *(u32 *)(param_1 + 0x948) = flags | 1;
    return func_02036e74(param_1);
}
