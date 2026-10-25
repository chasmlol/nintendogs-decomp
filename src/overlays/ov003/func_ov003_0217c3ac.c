#include "ctx.h"

extern s32 func_02035744(u8 *p, u32 v);
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_0217c3ac(u8 *param_1)
{
    s32 r = func_02035744(param_1, 6);
    if (r != 0) {
        func_0203e908(param_1, 0x380);
    }
}
