#pragma avoid_byte strb
#include "ctx.h"

void func_0203ee90(u8 *param_1)
{
    s32 t;
    s32 k;

    param_1[0xd2] = 1;
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 0x18) = 5000;
    param_1[0xd2] = 1;
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1c) = 2000;
    t = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1e) + 200);
    param_1[0xd2] = 1;
    if (t < 0) t = 0;
    if (t > 10000) t = 10000;
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1e) = (s16)t;
    k = 10000;
    t = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x20) + 200);
    param_1[0xd2] = 1;
    if (t < 0) t = 0;
    if (t > 10000) t = 10000;
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x20) = (s16)t;
    param_1[0xd2] = 1;
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1a) = (s16)k;
    param_1[0xd2] = 1;
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 0x22) = 0;
    param_1[0xd2] = 1;
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 0x24) = 0;
    t = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x26) - 500);
    param_1[0xd2] = 1;
    if (t < 0) t = 0;
    if (t > 10000) t = 10000;
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x26) = (s16)t;
}
