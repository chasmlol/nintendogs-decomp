#include "ctx.h"

extern u8 *data_0215942c;
extern s32 func_01ffdb08(s32 v);
extern s32 func_0202817c(s32 v);

s32 func_020ae3c0(s32 p)
{
    s32 r = 0;
    if (p == 0x00030002) {
        r = func_01ffdb08(*(s16 *)(data_0215942c + 0xe));
        r = func_0202817c(r);
        r = r + 0x78;
    }
    return r;
}
