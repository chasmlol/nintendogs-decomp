#include "ctx.h"

extern u8 *data_02159464;
extern void func_020d3a40(u8 *p, u32 b);

void func_020bbd38(void)
{
    void (*fp)(u8 *, u32) = func_020d3a40;
    fp(data_02159464 + 0x21c, 1);
}
