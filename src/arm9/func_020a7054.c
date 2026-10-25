#include "ctx.h"

extern u8 *data_02159428;
extern u8 data_0212f720[];

s32 func_020a7054(void)
{
    return *(s8 *)(data_0212f720 + *(u16 *)(data_02159428 + 6) * 28 + 24);
}
