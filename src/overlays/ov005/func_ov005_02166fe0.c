#include "ctx.h"

void func_ov005_0216702c(u8 *a);

void func_ov005_02166fe0(u8 *param_1)
{
    s16 s = *(s16 *)(param_1 + 0x90);
    if (s == 0) {
        return;
    }
    if (s == 2) {
        goto call;
    }
    if (s == 3) {
        *(u32 *)(param_1 + 0xa8) = 0;
    }
    return;
call:
    func_ov005_0216702c(param_1);
}
