#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025490(u8 *p);

void func_ov003_0216ea40(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 165;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    *(param_1 + 147) = 12;
    *(param_1 + 151) = 1;
    *(param_1 + 152) = 6;
    func_02026bac(param_1);
    func_02025490(param_1);
    *(vu32 *)(param_1 + 0x948) = *(vu32 *)(param_1 + 0x948) | 16;
}
