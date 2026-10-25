#include "ctx.h"

extern void func_0200777c(u8 *p, u32 b, u32 c, u32 d);
extern u8 data_0214f138[];

void func_0200760c(u32 a, u32 b, u32 c)
{
    void (*fp)(u8 *, u32, u32, u32) = func_0200777c;
    fp(data_0214f138, b, c, a);
}
