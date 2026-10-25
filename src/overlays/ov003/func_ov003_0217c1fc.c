#include "ctx.h"

extern s32 func_02035744(u32, u32);
extern void func_0203e908(u32, s16);

void func_ov003_0217c1fc(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_02035744(param_1, 6);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x385);
        return;
    }
}
