#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern u8 *data_0214f464;

static inline void SwapA(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline void SwapB(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02022a90(void)
{
    s32 i;
    u32 *p;
    s32 neg;
    i = 0;
    do {
        if (*(u32 **)(data_0214f464 + i * 4 + 0x73e0) != 0) {
            p = *(u32 **)(*(u8 **)(data_0214f464 + i * 4 + 0x73e0) + 8);
            if (p != 0) {
                do {
                    *(u16 *)((u8 *)p + 0x2e) = *(u16 *)((u8 *)p + 0x2c);
                    p = (u32 *)*p;
                } while (p != 0);
            }
            p = *(u32 **)(*(u8 **)(data_0214f464 + i * 4 + 0x73e0) + 0x10);
            if (p != 0) {
                do {
                    *(u16 *)((u8 *)p + 0x2e) = *(u16 *)((u8 *)p + 0x2c);
                    p = (u32 *)*p;
                } while (p != 0);
            }
            *(u32 *)(*(u8 **)(data_0214f464 + i * 4 + 0x73e0) + 0x1c) =
                (*(u32 *)(*(u8 **)(data_0214f464 + i * 4 + 0x73e0) + 0x1c) & 0xfffffffe) | 1;
        }
        *(u32 *)(data_0214f464 + i * 4 + 0x73e0) = 0;
        i = (s16)(i + 1);
    } while (i < 9);
    neg = -1;
    SwapA(0, (vu8 *)(data_0214f464 + 12));
    *(u16 *)(data_0214f464 + 42) = 0;
    SwapB(neg, (vu8 *)(data_0214f464 + 10));
    *(s16 *)(data_0214f464 + 32) = neg;
}
