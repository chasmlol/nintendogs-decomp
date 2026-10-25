#pragma avoid_byte strb
#include "ctx.h"

typedef volatile unsigned char vu8;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0202bd60(u8 *param_1)
{
    u32 one;
    u8 *q;
    s32 iVar2;
    one = 1;
    q = param_1 + 210;
    iVar2 = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 28) - 2000);
    SwapByte(one, q);
    if (iVar2 < 0) {
        iVar2 = 0;
    }
    if (iVar2 > 10000) {
        iVar2 = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 28) = (s16)iVar2;
    *(s16 *)(param_1 + 234) = 0x40b;
    *(s16 *)(param_1 + 250) = 0;
}
