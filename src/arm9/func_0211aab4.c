#include "ctx.h"
extern u8 *data_0215be48;
void func_0211aab4(s32 *p)
{
    *p = *p + 1;
    if (*p > 20) {
        u8 *g = data_0215be48;
        *(u32 *)(g + 0x4000 + 0x868) = 1;
    }
}
