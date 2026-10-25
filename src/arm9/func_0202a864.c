#include "ctx.h"

extern u8 *data_0214f464;

s32 func_0202a864(u8 *param_1)
{
    s8 c = *(s8 *)(data_0214f464 + 7);
    if (c != -1 && *(s8 *)(param_1 + 136) != c) {
        return 1;
    }
    return 0;
}
