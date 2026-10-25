#include "ctx.h"
extern void func_02069fb8(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_0211c64c(u32 *param_1)
{
    if (param_1[3] != 0 && param_1[3] != 1) {
        return;
    }
    func_02069fb8(0x04001050, 0, 4, param_1[0], 16 - param_1[0]);
}
