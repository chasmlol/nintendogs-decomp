#include "ctx.h"

extern u32 data_021594ec[];
extern u32 data_021594e8[];

u32 func_020d66e0(u8 *param_1)
{
    if (*(u16 *)(param_1 + 2) == 0) {
        data_021594ec[0] = 0;
        data_021594e8[0] = 0;
        return 1;
    }
    data_021594ec[0] = 0;
    return 0;
}
