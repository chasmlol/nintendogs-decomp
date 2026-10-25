#include "ctx.h"
extern u8 data_02159560[];
u32 func_020d5d78(u32 param_1)
{
    if (*(u16 *)(data_02159560 + 0x3c) >= 8 && *(u32 *)(data_02159560 + 0x44) == param_1) {
        return 1;
    }
    return 0;
}
