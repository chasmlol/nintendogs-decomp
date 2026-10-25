#include "ctx.h"

extern u8 *data_02159064;
extern void func_0200719c(u32 *a, u32 *b);
extern u64 func_02092140(u32 *a, u32 *b, u32 *c);

u64 func_02099fc0(void)
{
    u32 a[4];
    u32 b[3];
    func_0200719c(a, b);
    return func_02092140((u32 *)(data_02159064 + 0x10), a, b);
}
