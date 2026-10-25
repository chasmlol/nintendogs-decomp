#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025d14(u8 *p);
extern void func_02044c24(s32 v);

void func_ov003_0216ed10(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 145;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    *(param_1 + 147) = 5;
    *(param_1 + 152) = 1;
    func_02026bac(param_1);
    func_02025d14(param_1);
    *(vu32 *)(param_1 + 0x948) = *(vu32 *)(param_1 + 0x948) | 2;
    func_02044c24(*(s8 *)(param_1 + 0x88));
}
