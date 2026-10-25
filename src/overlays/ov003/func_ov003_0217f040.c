#include "ctx.h"

s32 func_ov003_0217fe80(void *p, s16 a, s32 b);
s32 func_02035770(void *p, s32 v);
void func_0203e908(void *p, s16 v);

void func_ov003_0217f040(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_ov003_0217fe80(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 5), 0);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_02035770(param_1, 34);
    if (iVar1 != 0) {
        func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x211));
    }
}
