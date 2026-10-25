#include "ctx.h"

extern u32 data_ov005_02167f04;

u32 func_ov005_02164898(void)
{
    return *(u32 *)(*(u8 **)&data_ov005_02167f04 + 0x88);
}
