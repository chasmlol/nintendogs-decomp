#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;
typedef struct { u32 w[12]; } T12;

void func_020e37e4(u8 *p0)
{
    u8 *p;
    u8 *iv;
    p = (__typeof__(p))(p0);
    iv = (__typeof__(iv))(*(u32 *)((u8 *)(p) + (0x214)));
    *(u32 *)(p + 0xb0) = 0;
    *(u32 *)(p + 0xb4) = 0;
    *(u32 *)(p + 0xb8) = 0;
    *(u16 *)(p + 0xa6) = 0;
    *(u32 *)(iv + 0x4) = 0;
    *(u32 *)(iv + 0xc) = 0;
    *(u32 *)(iv + 0x14) = 0;
    *(u32 *)(iv + 0x10) = 0;
    *(u32 *)(iv + 0x38) = 0;
    if (*(u32 *)(iv + 0x34) != 0) {
        *(u32 *)(iv + 0x3c) = 0xa000;
    } else {
        *(u32 *)(iv + 0x3c) = 0x28000;
    }
    *(T3 *)(iv + 0x28) = *(T3 *)(p + 0xbc);
    *(T12 *)(iv + 0x40) = *(T12 *)(p + 0xc8);
    *(u32 *)(p + 0xa8) = 0;
}
