#include "ctx.h"

extern u32 data_02152d80[];

void func_0207471c(u32 i, u32 v)
{
    data_02152d80[i] = v | (i << 30);
}
