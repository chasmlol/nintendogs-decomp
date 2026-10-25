#include "ctx.h"
extern u8 *data_02159028;
extern u32 *func_0208f43c(u32 a, u32 b);
void func_0208e23c(u32 p0, u32 p1)
{
    u32 *r = func_0208f43c(p0, p1);
    u8 *g = data_02159028;
    *(u32 **)(g + 0x3c) = r;
}
