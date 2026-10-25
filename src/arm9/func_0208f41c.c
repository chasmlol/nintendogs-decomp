#include "ctx.h"

extern u32 data_02159028;
extern void func_0207cec8(u32 a, u32 b);

void func_0208f41c(u32 a)
{
    void (*fp)(u32, u32) = func_0207cec8;
    u32 first = **(u32 **)&data_02159028;
    fp(first, a);
}
