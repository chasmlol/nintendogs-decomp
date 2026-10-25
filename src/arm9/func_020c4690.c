#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02142a4c[];

void func_020c4690(s32 param_1, u8 *param_2)
{
    u32 *e = (u32 *)((u8 *)data_02142a4c + param_1 * 16);
    u32 t;
    u32 e0;
    *(u32 *)(param_2 + 0xf8) = e[2];
    t = e[2];
    e0 = *(u32 *)((u8 *)data_02142a4c + param_1 * 16);
    *(u32 *)(param_2 + 0xfc) = t;
    *(u32 *)(param_2 + 0x100) = e0;
    *(u32 *)(param_2 + 0x104) = t;
    *(u32 *)(param_2 + 0x120) = (u32)(((s64)(s32)e[2] * 2048 + 2048) >> 12);
    *(u32 *)(param_2 + 0x108) = 41;
    *(u32 *)(param_2 + 0x10c) = 41;
    *(u32 *)(param_2 + 0x110) = 41;
    *(u32 *)(param_2 + 0x114) = 20480;
    *(u32 *)(param_2 + 0x118) = 41;
    *(u32 *)(param_2 + 0x11c) = 41;
    *(u32 *)(param_2 + 0x128) = e[3];
    *(u32 *)(param_2 + 0x124) = *(u32 *)((u8 *)data_02142a4c + param_1 * 16);
    *(u32 *)(param_2 + 0x12c) = 4;
    *(u8 *)(param_2 + 0x160) = 0;
    *(u32 *)(param_2 + 0x168) = 0;
    *(u32 *)(param_2 + 0xac) = e[1];
    *(u16 *)(param_2 + 0xa6) = 2;
}
