#include "ctx.h"

extern s32 func_02035744(u32 p, s32 q);
extern void func_0203e908(u32 p, s16 q);

void func_ov003_0217c37c(u32 param_1)
{
    if (func_02035744(param_1, 6) != 0) {
        func_0203e908(param_1, (s16)0x380);
    }
}
