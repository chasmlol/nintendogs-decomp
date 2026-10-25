#include "ctx.h"

extern u32 data_02159464;
void func_020cf9d8(u32 a);

void func_020bbfe8(void)
{
    void (*fp)(u32) = func_020cf9d8;
    fp(*(u32 *)&data_02159464 + 0x88);
}
