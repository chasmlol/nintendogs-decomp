#include "ctx.h"

extern s32 func_020029fc(u32 a, u16 *b);

s32 func_020026d4(u32 *param_1, u32 *param_2)
{
    s32 iVar1;
    u16 auStack_10[2];

    iVar1 = func_020029fc(0, auStack_10);
    if (iVar1 != 0) {
        return iVar1;
    }
    if (param_1 != NULL) {
        *param_1 = (auStack_10[0] & 8) != 0;
    }
    if (param_2 != NULL) {
        *param_2 = (auStack_10[0] & 4) != 0;
    }
    return iVar1;
}
