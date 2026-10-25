#include "ctx.h"

extern s32 func_020d1094(u32 *p);

s32 func_020ced70(u16 *param_1)
{
    if (*(u32 *)((u8 *)param_1 + 0x2c) == 0) {
        return 0;
    }
    if (*param_1 == 1) {
        return func_020d1094((u32 *)((u8 *)param_1 + 44));
    }
    return 0;
}
