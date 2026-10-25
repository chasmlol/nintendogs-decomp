#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u8 data_0213b80c[];

u32 func_0203945c(u8 *param_1, s32 *param_2, u8 param_3)
{
    u32 v;
    u32 five;
    u32 t;
    s16 s;
    u8 *g;
    s32 d0;
    s32 d1;

    d0 = param_2[0] - *(s32 *)(param_1 + 0x2a0);
    d1 = param_2[2] - *(s32 *)(param_1 + 0x2a8);
    s = (s16)((s32)(((s64)d0 * *(s32 *)(param_1 + 0x18c) + 0x800) >> 12) + (s32)(((s64)d1 * *(s32 *)(param_1 + 0x194) + 0x800) >> 12) >= 0);
    t = data_0213b80c[(s8)param_1[0x8d]];
    g = (u8 *)data_0214f464;
    v = *(u32 *)g * 0x10dcd;
    v = v + 1;
    five = (u16)(((u32)(u16)v * 5) >> 16) + 5;
    *(u32 *)g = v;
    switch (five - t) {
    case 0:
        *(u16 *)(param_1 + 0xea) = 0x259;
        param_1[138] = param_3;
        return 1;
    case 1:
        *(u16 *)(param_1 + 0xea) = s + 0x25a;
        param_1[138] = param_3;
        return 1;
    default:
        *(u16 *)(param_1 + 0xea) = s + 0x25c;
        param_1[138] = param_3;
        return 1;
    }
}
