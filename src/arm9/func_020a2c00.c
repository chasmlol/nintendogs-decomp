#include "ctx.h"

extern u8 data_02159324[];

void func_020a2c00(void)
{
    u8 *p = data_02159324;
    if (*(u32 *)(p + 0x8c) != 0) {
        *(u32 *)(p + 0x8c) = 0;
        *(s16 *)(p + 2) = -1;
    }
}
