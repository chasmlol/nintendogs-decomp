#include "ctx.h"

typedef struct { u32 w[3]; } Blk12;

u32 func_020ab064(u8 *param_1, Blk12 *param_2)
{
    s32 t = *(u16 *)(param_1 + 184);
    if (t == 0) {
        *param_2 = *(Blk12 *)(*(u8 **)(param_1 + 0x1c) + 48);
        return 0;
    }
    if (t < 60) {
        *param_2 = *(Blk12 *)(*(u8 **)(param_1 + 0x1c) + 48);
        return 1;
    }
    *param_2 = *(Blk12 *)(param_1 + 156);
    return 1;
}
