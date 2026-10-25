#include "ctx.h"

extern u32 data_021594ec[];
extern u32 data_021594e8[];
extern u16 data_021594e0[];

u32 func_020d62e4(u8 *param_1)
{
    if (*(u16 *)(param_1 + 2) == 0) {
        if (*(u16 *)(param_1 + 8) == 6) {
            data_021594ec[0] = 0;
            data_021594e8[0] = 8;
        } else if (*(u16 *)(param_1 + 8) == 7) {
            data_021594e0[0] = *(u16 *)(param_1 + 10);
        }
        return 1;
    } else {
        if (*(u16 *)(param_1 + 8) == 6) {
            data_021594ec[0] = 0;
        }
        return 0;
    }
}
