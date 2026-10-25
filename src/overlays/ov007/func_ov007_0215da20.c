#include "ctx.h"

extern u32 data_ov007_02160d80;

u16 func_ov007_0215da20(void)
{
    return *(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x30);
}
