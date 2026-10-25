#include "ctx.h"

extern s16 data_02132958[][4];
extern s32 func_02028130(u32 p);

s32 func_020bd5e8(u32 p0, u8 *p1)
{
    s32 acc = 0;
    s32 v = func_02028130(p0);
    s32 i = 0;
    u32 one = 1;
    s32 fld = *(s16 *)(p1 + 0x94);
    do {
        if (v > data_02132958[fld][i]) {
            acc = acc + (one << i);
        }
        i = i + 1;
    } while (i < 4);
    return acc;
}
