#include "ctx.h"

extern u8 *data_02159464;
extern void func_020d3a40(void *p, u32 b);

void func_020bbd18(void)
{
    void (*fp)(void *, u32) = func_020d3a40;
    fp(data_02159464 + 0x21c, 2);
}
