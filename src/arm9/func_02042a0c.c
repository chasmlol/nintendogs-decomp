#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

void func_02042a0c(void)
{
    u8 *g;
    s32 ok;
    s32 v;
    u8 *q;
    u32 one;
    u32 k;
    g = data_0214f464;
    ok = 0;
    v = *(s8 *)(g + 9);
    if (v != -1) {
        if (*(s32 *)(g + 0x40) == 1) {
            ok = 1;
        }
    }
    if (ok == 0) {
        return;
    }
    if (v < 0 || v >= 3) {
        q = 0;
    } else {
        q = *(u8 **)(g + v * 4 + 0x54);
    }
    if (q == 0) {
        return;
    }
    one = 1;
    *(vu8 *)(q + 0xd2) = one;
    k = 0x1388;
    *(u16 *)(*(u8 **)(q + 0x9e8) + 0x18) = k;
    *(vu8 *)(q + 0xd2) = one;
    *(u16 *)(*(u8 **)(q + 0x9e8) + 0x1a) = 0;
    *(vu8 *)(q + 0xd2) = one;
    *(u16 *)(*(u8 **)(q + 0x9e8) + 0x22) = 0;
    *(u8 *)(q + 0xa8) = 0;
    *(u16 *)(q + 0x112) = 0;
    *(u16 *)(q + 0xf0) = 89;
    *(u8 *)(q + 0xa5) = 2;
    *(u32 *)(data_0214f464 + 0x40) = 0;
}
