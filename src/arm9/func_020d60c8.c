#include "ctx.h"

extern s32 data_021594e8;
extern s32 data_021594ec;

u32 func_020d60c8(u8 *p)
{
    s32 v;
    if (*(u16 *)(p + 2) != 0) {
        goto nz;
    }
    if (*(u16 *)(p + 4) != 10) {
        goto ret1;
    }
    data_021594ec = 0;
    v = data_021594e8;
    if (v == 8) {
        data_021594e8 = 9;
    } else if (v == 4) {
        data_021594e8 = 5;
    }
ret1:
    return 1;
nz:
    if (*(u16 *)(p + 4) == 10) {
        data_021594ec = 0;
    }
    return 0;
}
