#include "ctx.h"

extern s32 func_02035744(s32 p, s32 q);
extern void func_0203e908(s32 p, s16 v);

void func_ov003_0217c1c8(s32 param_1)
{
    s32 iVar1;
    iVar1 = func_02035744(param_1, 6);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x385);
        return;
    }
}
