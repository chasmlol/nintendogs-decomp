#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159028;
extern u64 func_0205e270(u32 a, u32 b);

u8 func_0208e264(u32 p)
{
    u8 sum;
    u8 *w;
    u8 *e;
    u8 b0;
    u8 b1;
    u8 b2;
    u64 r;

    w = *(u8 **)(data_02159028 + 8);
    e = w + (p << 2);
    b1 = e[1];
    b0 = w[p << 2];
    b2 = e[2];
    sum = (b0 + b1) & 0xff;
    r = func_0205e270(b1 + 1, b2);
    e[1] = (u8)(r >> 32);
    return sum;
}
