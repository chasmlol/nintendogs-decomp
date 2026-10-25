#include "ctx.h"

extern u32 data_02159464;
extern void func_020cfad0(u8 *p);

void func_020bc130(void)
{
    void (*fp)(u8 *) = func_020cfad0;
    fp(*(u8 **)&data_02159464 + 0x88);
}
