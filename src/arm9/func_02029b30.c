#include "ctx.h"

extern u16 data_0213b648[];

u32 func_02029b30(u8 *param_1, s16 param_2)
{
    if (*(s8 *)(param_1 + 139) == 2) {
        s32 idx = *(s8 *)(param_1 + 141);
        u8 *p = *(u8 **)(param_1 + 0x9e8);
        if ((s32)*(s16 *)(p + 34) > (s32)data_0213b648[idx]) {
            *(s16 *)(param_1 + 234) = param_2 + 0x1d5;
            return 1;
        }
    }
    return 0;
}
