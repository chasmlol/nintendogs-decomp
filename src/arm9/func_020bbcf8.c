#include "ctx.h"

extern u32 data_02159464;
void func_020d39e8(u32 a, u32 b);

void func_020bbcf8(u32 param_1)
{
    void (*fp)(u32, u32) = func_020d39e8;
    fp(*(u32 *)&data_02159464 + 0x21c, param_1);
}
