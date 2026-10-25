#include "ctx.h"

u32 func_0207420c(u32 *p, u32 a);

void func_020741a4(u32 *param_1, u32 param_2)
{
    u32 r;
    r = func_0207420c(param_1 + 2, param_2);
    if (r == 0) {
        r = func_0207420c(param_1 + 4, param_2);
        if (r == 0) {
            r = func_0207420c(param_1 + 6, param_2);
            if (r == 0) {
                return;
            }
        }
    }
    *param_1 |= 0x10;
}
