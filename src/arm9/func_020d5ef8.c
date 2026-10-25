#include "ctx.h"

extern u64 func_02080858(void);
extern u32 func_0205e074(u64 x, u32 a, u32 b);

u32 func_020d5ef8(void)
{
    u64 r = func_02080858();
    u32 v = func_0205e074(r, 10, 0);
    return (u16)(((u16)v) + 300);
}
