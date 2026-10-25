#include "ctx.h"

extern u8 *data_0214f464;

u32 func_02036510(u8 *param_1)
{
    s32 i = *(s8 *)(param_1 + 138);
    if (i < 0) {
        goto ret0;
    }
    if (i < 3) {
        goto body;
    }
ret0:
    return 0;
body:
    return *(u32 *)(data_0214f464 + i * 4 + 0x54);
}
