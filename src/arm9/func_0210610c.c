#include "ctx.h"

extern void func_020fcf48(void);

void func_0210610c(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 > 0x10) {
        func_020fcf48();
        return;
    }
}
