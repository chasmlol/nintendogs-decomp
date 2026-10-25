#include "ctx.h"

extern void func_0206f518(u16 *p, s32 q);

void func_0206f1ec(u16 *param_1, s32 param_2)
{
    if (param_2 <= 0) {
        return;
    }
    if (param_1 != NULL) {
        func_0206f518(param_1, param_2);
    }
}
