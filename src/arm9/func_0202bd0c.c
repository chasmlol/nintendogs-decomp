#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0202bd0c(u8 *param_1)
{
    u32 one = 1;
    vu8 *pb = (vu8 *)(param_1 + 210);
    s16 iVar2 = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 28) - 1000;
    SwapByte(one, pb);
    if (iVar2 < 0) {
        iVar2 = 0;
    }
    if (iVar2 > 10000) {
        iVar2 = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 28) = iVar2;
    *(s16 *)(param_1 + 234) = 0x40a;
    *(s16 *)(param_1 + 250) = 0;
}
