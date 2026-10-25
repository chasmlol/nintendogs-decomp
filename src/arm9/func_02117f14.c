#include "ctx.h"

extern u32 func_02112bf0(u32 a, u32 b);
extern u32 func_02112bc0(u32 a, u32 b);

void func_02117f14(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, s16 param_5, s16 param_6, u16 param_7)
{
    u8 *s;
    s = (u8 *)param_1;
    param_1[0] = param_2;
    param_1[1] = param_3;
    *(u16 *)(s + 8) = (u16)param_4;
    *(u16 *)(s + 14) = param_7;
    *(u16 *)(s + 16) = 0;
    *(u32 *)(s + 20) = 0;
    *(u16 *)(s + 28) = 0;
    *(u16 *)(s + 24) = (u16)func_02112bf0(param_2, param_4);
    *(u16 *)(s + 26) = (u16)func_02112bc0(param_2, param_4);
    *(s16 *)(s + 10) = (s16)(*(s16 *)(s + 24) + param_5);
    *(s16 *)(s + 12) = (s16)(*(s16 *)(s + 26) + param_6);
    *(u16 *)(s + 30) = *(u16 *)(s + 16);
}
