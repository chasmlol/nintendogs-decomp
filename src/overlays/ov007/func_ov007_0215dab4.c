#include "ctx.h"

extern u8 *data_ov007_02160d80;

u32 func_ov007_0215dab4(void)
{
    return *(u32 *)(*(u8 **)&data_ov007_02160d80 + 0x28);
}
