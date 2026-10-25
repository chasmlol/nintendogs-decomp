#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_02144f1c[];
typedef struct { u32 w[3]; } T3;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020f125c(s32 param_1, u8 *param_2)
{
    u8 *p3;
    s32 i;
    vu8 *sw;
    p3 = data_02144f1c + param_1 * 108;
    *(u32 *)(param_2 + 0xf8) = *(u32 *)(p3 + 0x1c);
    *(T3 *)(param_2 + 0xfc) = *(T3 *)(p3 + 0x20);
    *(u32 *)(param_2 + 0x120) = *(u32 *)(p3 + 0x1c);
    sw = (vu8 *)(param_2 + 352);
    i = 0;
    *(u32 *)(param_2 + 0x128) = *(u32 *)(p3 + 0x2c);
    *(u32 *)(param_2 + 0x124) = *(u32 *)(p3 + 0x14);
    *(u32 *)(param_2 + 0xac) = *(u32 *)(p3 + 0x18);
    SwapByte(*(u8 *)(p3 + 0x60), sw);
    *(u32 *)(param_2 + 0x12c) = *(u32 *)(p3 + 0x64);
    *(u32 *)(param_2 + 0x168) = *(u32 *)(p3 + 0x68);
    do {
        *(u32 *)(param_2 + i * 4 + 0x108) = *(u32 *)(p3 + i * 4 + 0x30);
        i = (s16)(i + 1);
    } while (i < 6);
}
