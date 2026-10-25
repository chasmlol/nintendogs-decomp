#include "ctx.h"

void func_0206f63c(u16 *p, s32 n);

void func_0206f19c(u16 *param_1, s32 param_2)
{
    if (param_1 == NULL) {
        return;
    }
    if (param_2 != 0) {
        if (param_2 != 0xffff) {
            func_0206f63c(param_1, param_2);
            return;
        }
        return;
    }
    return;
}
