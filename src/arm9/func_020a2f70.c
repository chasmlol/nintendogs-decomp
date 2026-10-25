#include "ctx.h"

extern u32 data_02159320;
extern u32 func_02027540(u32 p);
extern u32 func_02027708(u32 p);
extern u32 func_02044a6c(u32 p, u32 q);

u32 func_020a2f70(u32 param_1, u32 param_2)
{
    u32 r1;
    u32 r4;
    u32 r0;
    r4 = func_02027540(param_1);
    r0 = func_02027708(param_1);
    r0 = func_02044a6c(r0, param_2);
    *(u32 *)&data_02159320 = r0;
    *(u16 *)(r4 + 128) = (u16)param_2;
    *(u32 *)(r4 + 0x84) = 0;
    *(u16 *)(r4 + 138) = 16;
    r1 = 0;
    (void)r1;
    return 1;
}
