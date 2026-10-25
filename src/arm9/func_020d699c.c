#include "ctx.h"

extern u8 data_021594ec[];
extern u8 data_021594e8[];

int func_020d699c(u8 *param_1)
{
    if (*(u16 *)(param_1 + 2) != 0) {
        goto nz;
    }
    {
        u32 *a = (u32 *)data_021594ec;
        u32 *b = (u32 *)data_021594e8;
        *a = 0;
        *b = 1;
        return 1;
    }
nz:
    {
        u32 *a = (u32 *)data_021594ec;
        *a = 0;
        return 0;
    }
}
