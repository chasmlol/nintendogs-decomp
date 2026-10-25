#include "ctx.h"

extern u32 data_ov007_02160d80;
extern s32 func_020d6888(u32 p);

void func_ov007_0215d4b4(u32 param_1)
{
    if (func_020d6888(param_1) != 0) {
        *(u32 *)(*(u8 **)&data_ov007_02160d80 + 0x28) = 1;
    }
}
