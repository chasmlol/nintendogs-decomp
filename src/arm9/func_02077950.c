#include "ctx.h"

extern u8 data_02155c40[];

void func_02077950(u32 *p)
{
    u32 *g = (u32 *)data_02155c40;
    if (*(u32 *)g == 0) {
        *p = 0;
        *(u32 **)data_02155c40 = p;
    }
}
