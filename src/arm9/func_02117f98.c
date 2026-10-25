#include "ctx.h"

extern s32 func_02112bf0(u32 a, u32 b);
extern s32 func_02112bc0(u32 a, u32 b);

void func_02117f98(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, s16 param_5, s16 param_6, u16 param_7)
{
    u16 v;
    s16 t;
    param_1[0] = param_2;
    param_1[1] = param_3;
    *(s16 *)(param_1 + 2) = (s16)param_4;
    *(s16 *)((u8 *)param_1 + 10) = param_5;
    *(s16 *)(param_1 + 3) = param_6;
    *(u16 *)((u8 *)param_1 + 14) = param_7;
    *(u16 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    *(u16 *)(param_1 + 7) = 0;
    t = (s16)func_02112bf0(param_2, param_4);
    *(s16 *)(param_1 + 6) = t;
    t = (s16)func_02112bc0(param_2, param_4);
    *(s16 *)((u8 *)param_1 + 26) = t;
    *(s16 *)((u8 *)param_1 + 30) = *(u16 *)((u8 *)param_1 + 16);
    (void)v;
}
