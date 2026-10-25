#include "ctx.h"

extern u32 data_0214f9b4;

void func_0206431c(u32 i, u32 v)
{
    *(u32 *)(data_0214f9b4 + i * 4 + 0x18) = v;
}
