#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464[];
extern u16 data_0213b5bc[];

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0203e1a0(u8 *param_1)
{
    s32 i;
    u32 v1;
    s32 t;
    s32 bnd;
    u8 *tb;
    bnd = *(s8 *)(param_1 + 0x88);
    tb = *(u8 **)data_0214f464;
    i = 0;
    v1 = 0;
    do {
        if (i != bnd) {
            if (i < 0 || i >= 3) {
                v1 = 0;
            } else {
                v1 = *(u32 *)(tb + i * 4 + 0x54);
            }
            if (v1 != 0) {
                goto found;
            }
        }
        i = (s16)(i + 1);
    } while (i < 3);
    v1 = 0;
found:
    if (v1 != 0) {
        SwapByte(1, (vu8 *)(param_1 + 210));
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x24) = 0;
        return;
    }
    t = (s16)((u16)data_0213b5bc[*(s8 *)(param_1 + 0x8d)] >> 1);
    SwapByte(1, (vu8 *)(param_1 + 210));
    if (t < 0) {
        t = 0;
    }
    if (t > 10000) {
        t = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x24) = (s16)t;
}
