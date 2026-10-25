#include "ctx.h"
extern u8 *data_ov007_02160d9c;
u32 func_ov007_0215ece8(void)
{
    u8 *p = data_ov007_02160d9c;
    if (*(s32 *)(p + 0x10c) == 1 && *(s32 *)(p + 0x110) == 1) {
        return 1;
    }
    return 0;
}
