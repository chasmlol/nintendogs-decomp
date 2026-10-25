#include "ctx.h"

extern u32 data_02159150;

u32 func_020df0d4(u8 *p);
u32 func_020a1164(u32 *d, s32 x, u32 a, u32 b, u32 c);

u32 func_0209d394(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 iVar1;

    iVar1 = func_020df0d4(param_1);
    if (iVar1 != 0xfffffff5) {
        return func_020a1164(&data_02159150, *(s16 *)(param_1 + 12), param_2, param_3, param_4);
    }
    return 0xffffffff;
}
