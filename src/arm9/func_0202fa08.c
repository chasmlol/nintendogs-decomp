#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

static inline u32 SwapB(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

s32 func_0202fa08(u8 *p)
{
    u32 iv;
    u16 k;
    if (*(s16 *)(p + 0xf0) == 0x34) {
        u16 z = 0;
        vu8 *q;
        u32 o;
        *(s16 *)(p + 0xea) = 0x473;
        o = SwapB(z, (vu8 *)(p + 0xa8));
        q = (vu8 *)(p + 0xa3);
        *(u16 *)(p + 0x112) = z;
        *(s16 *)(p + 0xf0) = 0x6f;
        SwapB(z, (vu8 *)(p + 0xa5));
        o = SwapB(z, q);
        return 1;
    }
    if (*(s16 *)(p + 0xf0) == 0x35) {
        u16 z = 0;
        vu8 *q;
        u32 o;
        *(s16 *)(p + 0xea) = 0x472;
        o = SwapB(z, (vu8 *)(p + 0xa8));
        q = (vu8 *)(p + 0xa3);
        *(u16 *)(p + 0x112) = z;
        *(s16 *)(p + 0xf0) = 0x6f;
        SwapB(z, (vu8 *)(p + 0xa5));
        o = SwapB(z, q);
        return 1;
    }
    {
        iv = *(u32 *)data_0214f464 * 0x10dcd + 1;
        k = (iv << 16) >> 30;
        *(u32 *)data_0214f464 = iv;
        switch (k) {
        case 0:
            *(s16 *)(p + 0xea) = 0x470;
            return 1;
        case 1:
            *(s16 *)(p + 0xea) = 0x471;
            return 1;
        case 2:
            *(s16 *)(p + 0xea) = 0x472;
            return 1;
        case 3:
            *(s16 *)(p + 0xea) = 0x473;
            return 1;
        default:
            return 0;
        }
        }
}
