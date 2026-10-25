#include "ctx.h"

extern u32 data_0215ad38;
extern s32 func_020d69fc(u8 *p);

void func_020d7274(u8 *p)
{
    s32 v = func_020d69fc(p);
    if (v != 0) {
        data_0215ad38 = 1;
    }
}
