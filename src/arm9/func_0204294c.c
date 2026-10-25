#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u8 *data_0214f464;

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline void SwapR0(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0204294c(void)
{
    s32 n;
    u8 *o;
    u8 *g;
    u32 z;
    s32 m1;
    u8 * volatile *gp;
    u8 *gq;
    g = data_0214f464;
    n = *(s8 *)(g + 9);
    if (n == -1) {
        return;
    }
    if (n < 0) goto Lzero;
    if (n < 3) goto Ltab;
Lzero:
    o = 0;
    goto Ljoin;
Ltab:
    o = *(u8 **)(g + n * 4 + 0x54);
Ljoin:
    if (o == 0) {
        return;
    }
    z = 0;
    SwapR0(z, (vu8 *)(o + 168));
    *(u16 *)((u32)(o + 256) + 18) = (u16)z;
    *(u16 *)(o + 0xf0) = 89;
    SwapByte(3, (vu8 *)(o + 165));
    m1 = -1;
    gp = (u8 * volatile *)&data_0214f464;
    gq = *gp + 9;
    SwapR0(m1, (vu8 *)gq);
    *(u32 *)(*gp + 0x40) = z;
}
