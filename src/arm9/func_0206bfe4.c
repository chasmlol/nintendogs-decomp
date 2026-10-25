#include "ctx.h"
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
void func_0206bfe4(s32 p)
{
    s32 idx;
    u32 r;
    u32 base;
    r = func_02080b08();
    idx = (p * 6 + 5) * 2;
    *(vu16 *)(0x040000b0 + idx) = *(vu16 *)(0x040000b0 + idx) & ~0x3a00;
    *(vu16 *)(0x040000b0 + idx) = *(vu16 *)(0x040000b0 + idx) & ~0x8000;
    *(vu16 *)(0x040000b0 + idx);
    *(vu16 *)(0x040000b0 + idx);
    if (p == 0) {
        base = 0x040000b0 + p * 12;
        *(vu32 *)base = 0;
        *(vu32 *)(base + 4) = 0;
        *(vu32 *)(base + 8) = 0x81400001;
    }
    func_02080b1c(r);
}
