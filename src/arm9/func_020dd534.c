#include "ctx.h"

extern u8 *volatile data_0215aea4[];

u32 func_020dd534(u32 p1, u8 *p2)
{
    s32 i;
    u32 bits;
    u8 *p;
    u32 off;
    u32 one;
    u32 z;
    bits = 0;
    i = 0;
    p = p2;
    off = 0;
    one = 1;
    z = 0;
    for (; i < 20; i++) {
        if (p2 != 0) {
            if (*(u16 *)p == 0 || *(u16 *)(p + 2) != 256) {
                bits |= one << i;
            }
            *(u8 **)(data_0215aea4[p1] + off + 0xa8) = p;
            {
                u8 *rec = data_0215aea4[p1] + off;
                if (*(u16 *)*(u8 **)(rec + 0xa8) != 0) {
                    *(u32 *)(rec + 0x94) = z;
                    *(u32 *)(data_0215aea4[p1] + off + 0x98) = one;
                }
            }
        } else {
            *(u32 *)(data_0215aea4[p1] + off + 0x94) = 0;
            *(u32 *)(data_0215aea4[p1] + off + 0x98) = 0;
        }
        p += 316;
        off += 24;
    }
    return bits;
}
