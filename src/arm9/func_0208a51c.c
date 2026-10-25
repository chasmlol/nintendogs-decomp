#include "ctx.h"

extern u8 data_02157c60[];

void func_0208a51c(s32 i)
{
    u8 *e = data_02157c60 + i * 12;
    e[8] = e[8] + 1;
}
