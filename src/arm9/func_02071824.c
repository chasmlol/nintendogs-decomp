#include "ctx.h"

extern u8 *data_02152260;

u32 func_02071824(u32 i)
{
    u8 *a = *(u8 **)(data_02152260 + 0x80);
    u32 cnt = *(u32 *)(a + 8);
    if (i >= cnt) {
        return 0;
    }
    return *(u32 *)(a + i * 16 + 0x10);
}
