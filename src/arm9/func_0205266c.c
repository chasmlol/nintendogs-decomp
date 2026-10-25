#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

u32 func_0205266c(u8 *param_1)
{
    s32 r4 = func_02036578(param_1);
    u32 r = func_020449bc();
    if ((r & 8) == 0) {
        return func_0202fd7c(param_1);
    }
    if (r4 != 0) {
        func_0203e908(param_1, 0x28f);
        return 1;
    }
    return 0;
}
