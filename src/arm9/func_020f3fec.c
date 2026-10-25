#include "ctx.h"

extern u8 *data_0215be44;
extern void func_0208f704(u32 a, u8 *b);

void func_020f3fec(u32 x)
{
    void (*fp)(u32, u8 *) = func_0208f704;
    fp(x, data_0215be44 + 0x230);
}
