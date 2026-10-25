#include "ctx.h"
#pragma opt_propagation off

extern u8 data_02150600[];
extern u64 func_02080b08(void);
extern u64 func_0207f554(u32 a, u32 b);
extern void func_02080b1c(u32 a);

void func_02065950(void)
{
    u32 base;
    u32 lo;
    u32 hi;
    u32 r5;
    u32 zero;
    base = (u32)data_02150600;
    zero = 0;
    r5 = base + 60;
    for (;;) {
        u64 x = func_02080b08();
        lo = (u32)x;
        hi = (u32)(x >> 32);
        for (;;) {
            if (*(u32 *)(base + 0x34) & 8) {
                break;
            }
            *(u32 *)(base + 0xd0) = r5;
            x = func_0207f554(zero, hi);
            hi = (u32)(x >> 32);
        }
        func_02080b1c(lo);
        {
            void (*cb)(u8 *) = *(void (**)(u8 *))(base + 0x30);
            cb((u8 *)base);
        }
    }
}
