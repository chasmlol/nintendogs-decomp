#include "ctx.h"

void func_020d055c(void *p, u8 v);

void func_020d35d0(s32 *param_1, u8 param_2)
{
    u8 v = param_2 + 2;
    if (*param_1 == 2) {
        v = v + 1;
    }
    func_020d055c(param_1 + 2, v);
}
