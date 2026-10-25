#include "ctx.h"

extern u32 data_02159068;

void func_0209a710(void)
{
    u8 *p = *(u8 **)&data_02159068;
    if (*(s16 *)(p + 6) != 5) {
        *(u16 *)(p + 8) = 1;
    }
}
