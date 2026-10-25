#include "ctx.h"

extern u32 data_02159034;
void func_0200719c(u32 *a, u32 *b);
u64 func_02092140(u32 *p, u32 *a, u32 *b);

u32 func_02093e58(void)
{
    u32 r6;
    u8 *iVar2;
    u8 *r4;
    u32 a[4];
    u32 b[4];
    u64 t;

    r6 = 0;
    iVar2 = *(u8 **)(*(u8 **)&data_02159034 + 0x141c);
    r4 = iVar2 + 0x60;
    if (*(u16 *)(r4 + 32) != 0xffff) {
        func_0200719c(a, b);
        t = func_02092140((u32 *)(r4 + 44), a, b);
        if ((s64)t >= 0x15180) {
            *(u16 *)(r4 + 28) = *(u16 *)(r4 + 32);
            *(u16 *)(r4 + 32) = 0xffff;
            r6 = 1;
            *(u16 *)(iVar2 + 0x6ae) = *(u16 *)(iVar2 + 0x6ae) | 1;
        }
    }
    return r6;
}
