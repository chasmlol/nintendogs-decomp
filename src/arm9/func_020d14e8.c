#include "ctx.h"

typedef struct { u32 w[11]; } Blk;

void func_020d14e8(u8 *param_1, s32 param_2, u32 *param_3)
{
    Blk *src = (Blk *)(param_1 + param_2 * 44 + 0x20);
    *(Blk *)param_3 = *src;
}
