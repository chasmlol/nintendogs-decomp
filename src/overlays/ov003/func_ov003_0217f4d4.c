#include "ctx.h"

s32 func_0203567c(u8 *p);
s32 func_ov003_0217fe80(u8 *p, s32 a, s32 b);
void func_0203e908(u8 *p, s32 v);

void func_ov003_0217f4d4(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;

    iVar1 = func_0203567c(param_1);
    iVar2 = func_ov003_0217fe80(param_1, (s16)(*(u32 *)(param_1 + 0x484) + 7), 0);
    if (iVar2 != 0) {
        return;
    }
    if (iVar1 != 0) {
        if (*(u32 *)(param_1 + 0x484) == 0) {
            func_0203e908(param_1, 0x20d);
            return;
        }
        func_0203e908(param_1, 0x20e);
        return;
    }
}
