#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(u8 *p);
extern void func_02025d14(u8 *p);

void func_ov003_02164050(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x169;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    *(u8 *)(param_1 + 147) = 12;
    *(u8 *)(param_1 + 151) = 1;
    func_02025e34(param_1);
    func_02025d14(param_1);
    *(u32 *)(param_1 + 0x948) |= 4;
}
