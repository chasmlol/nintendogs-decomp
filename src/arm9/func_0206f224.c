#include "ctx.h"

void func_0206f66c(u32 a, u16 *b, s32 c);

void func_0206f224(u16 *param_1, s32 param_2, u32 param_3)
{
    if (param_1 == NULL) {
        return;
    }
    if (param_2 != 0) {
        if (param_2 != 0xffff) {
            func_0206f66c(param_3, param_1, param_2);
            return;
        }
        return;
    }
    return;
}
