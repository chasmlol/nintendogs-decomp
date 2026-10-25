#include "ctx.h"

extern u8 *data_0215be40;
extern void func_0208daf8(u32 a, u32 b);

void func_020f1d14(void)
{
    u8 *p = data_0215be40;
    func_0208daf8(*(u32 *)(p + 0x1c), *(u32 *)(p + 0x20));
}
