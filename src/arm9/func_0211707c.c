#include "ctx.h"

void func_02116cf8(void);
void func_020fcf48(void);

void func_0211707c(s32 *param_1)
{
    if (*param_1 == 1) {
        func_02116cf8();
    }
    *param_1 = *param_1 + 1;
    if (10 < *param_1) {
        func_020fcf48();
    }
}
