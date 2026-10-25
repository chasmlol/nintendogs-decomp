#include "ctx.h"

extern u8 *data_ov007_02160d80;
extern s32 func_020d69fc(u8 *p);

void func_ov007_0215d860(u8 *p)
{
    if (func_020d69fc(p) != 0) {
        *(u32 *)(data_ov007_02160d80 + 0x28) = 1;
    }
}
