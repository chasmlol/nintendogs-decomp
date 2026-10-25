#include "ctx.h"

extern u32 data_ov001_0215e260;

u32 func_ov001_0215c394(void)
{
    return *(u32 *)(*(u8 **)&data_ov001_0215e260 + 8);
}
