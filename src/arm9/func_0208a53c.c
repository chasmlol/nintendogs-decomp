#include "ctx.h"

extern u32 data_02157c60[];

void func_0208a53c(void)
{
    s32 i = 0;
    u8 *p = (u8 *)data_02157c60;
    do {
        u32 z = 0;
        *(u32 *)p = z;
        *(u32 *)(p + 4) = z;
        i = i + 1;
        *(u8 *)(p + 8) = (u8)z;
        p = p + 12;
    } while (i < 8);
}
