#include "ctx.h"

extern u32 func_01ffdb08(s32 a);
extern u32 func_020341fc(u32 a);

s32 func_020c8db4(s32 param_1)
{
    u32 iVar2;
    do {
        param_1 = (s16)(param_1 + 1);
        iVar2 = func_01ffdb08(param_1);
        if (iVar2 != 0) {
            if (func_020341fc(iVar2) == 0) {
                return param_1;
            }
        }
    } while (param_1 < 3);
    return -1;
}
