#include "ctx.h"
extern u32 data_021594ec;
extern u32 data_021594e8;
s32 func_020d6888(u8 *param_1)
{
    if (*(u16 *)(param_1 + 2) == 0) {
        *(u32 *)&data_021594ec = 0;
        *(u32 *)&data_021594e8 = 2;
        return 1;
    }
    *(u32 *)&data_021594ec = 0;
    return 0;
}
