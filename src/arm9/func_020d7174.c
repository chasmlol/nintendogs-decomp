#include "ctx.h"

extern u32 data_0215ad38;
extern s32 func_020d6888(s32 p);

void func_020d7174(s32 param_1)
{
    s32 iVar1 = func_020d6888(param_1);
    if (iVar1 != 0) {
        *(u32 *)&data_0215ad38 = 1;
    }
}
