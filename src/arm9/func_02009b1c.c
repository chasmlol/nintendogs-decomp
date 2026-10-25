#pragma avoid_byte strb
#include "ctx.h"

void func_02009b1c(u8 *param_1)
{
    s16 i = 0;
    u8 *q = param_1;
    u32 zero = 0;
    s16 neg = -1;
    do {
        u8 *b;
        s16 *hp;
        *(u32 *)(param_1 + i * 4 + 0x8fc) = zero;
        hp = (s16 *)(param_1 + i * 2);
        hp += 1024;
        hp[14] = neg;
        b = param_1 + i;
        *(s8 *)(b + 0x838) = -1;
        *(s8 *)(b + 0x831) = -1;
        *(s8 *)(b + 0x82a) = -1;
        *(s8 *)(b + 0x83f) = 1;
        hp[35] = 0;
        i = (s16)(i + 1);
        *(u32 *)(q + 0x854) = zero;
        *(u32 *)(q + 0x858) = zero;
        *(u32 *)(q + 0x85c) = zero;
        *(u32 *)(q + 0x8a8) = zero;
        *(u32 *)(q + 0x8ac) = zero;
        *(u32 *)(q + 0x8b0) = zero;
        q = q + 12;
    } while (i < 7);
}
