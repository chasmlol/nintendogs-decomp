#include "ctx.h"

s32 func_0203567c(u8 *p);
s32 func_ov003_0217fe80(u8 *p, s16 v, s32 z);
void func_0203e908(u8 *p, s32 v);

void func_ov003_0217f1f0(u8 *param_1)
{
    s32 r4;

    r4 = func_0203567c(param_1);
    if (func_ov003_0217fe80(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 7), 0) != 0) {
        return;
    }
    if (r4 == 0) {
        return;
    }
    if (*(s32 *)(param_1 + 0x484) == 0) {
        func_0203e908(param_1, 0x20d);
        return;
    }
    func_0203e908(param_1, 0x20e);
}
