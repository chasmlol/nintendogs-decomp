#include "ctx.h"

extern void func_020fcf48(void);

void func_0211aaf0(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 > 20) {
        func_020fcf48();
        return;
    }
}
