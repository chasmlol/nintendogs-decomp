#include "ctx.h"

extern u8 *data_02159028;
extern u32 *func_0208f43c(u32 *a, s32 b);

void func_0208e214(u32 *p1, s32 p2)
{
    u32 *r = func_0208f43c(p1, p2);
    *(u32 **)(data_02159028 + 0x40) = r;
}
