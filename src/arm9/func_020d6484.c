#include "ctx.h"

extern u8 data_021594ec[];
extern u8 data_021594e8[];

u32 func_020d6484(u8 *param_1)
{
    if (*(u16 *)(param_1 + 2) != 0) {
        goto nz;
    }
    *(u32 *)data_021594ec = 0;
    *(u32 *)data_021594e8 = 7;
    return 1;
nz:
    if (*(u16 *)(param_1 + 8) == 4) {
        *(u32 *)data_021594ec = 0;
    }
    return 0;
}
