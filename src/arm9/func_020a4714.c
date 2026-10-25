#include "ctx.h"

extern u64 func_02097cb4(void);
extern u64 func_0209aed4(u32 a, u32 b);
extern u64 func_0209a66c(void);
extern void func_020d6d34(u32 a, u32 b);
extern u32 data_02159068;

void func_020a4714(void)
{
    u64 uVar1;
    u32 hi;
    u32 lo;

    uVar1 = func_02097cb4();
    hi = (u32)(func_0209aed4((u32)uVar1, (u32)(uVar1 >> 32)) >> 32);
    lo = data_02159068;
    if (lo != 0) {
        u64 t = func_0209a66c();
        lo = (u32)t;
        hi = (u32)(t >> 32);
    }
    func_020d6d34(lo, hi);
}
