#include "ctx.h"

extern u32 data_021594ec;
extern u32 data_021594e8;
extern u32 data_021594d4;

u32 func_020d65c4(u8 *param_1)
{
    u16 v;
    if (*(u16 *)(param_1 + 2) != 0) {
        goto nonzero;
    }
    v = *(u16 *)(param_1 + 8);
    if (v == 0) {
        *(u32 *)&data_021594ec = 0;
        *(u32 *)&data_021594e8 = 4;
    } else if (v != 2 && v != 7 && v == 9) {
        *(u16 *)&data_021594d4 = *(u16 *)&data_021594d4 & ~(u16)(1 << *(u16 *)(param_1 + 0x10));
    }
    return 1;
nonzero:
    if (*(u16 *)(param_1 + 8) == 0) {
        *(u32 *)&data_021594ec = 0;
    }
    return 0;
}
