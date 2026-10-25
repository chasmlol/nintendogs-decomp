#include "ctx.h"

extern void func_0207ee48(u32);
extern void func_02080b1c(u32);

void func_02000bac(u32 param_1, s32 *param_2)
{
    if (*param_2 == 0) {
        func_0207ee48(param_1);
    }
    func_02080b1c(param_2[1]);
}
