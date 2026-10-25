#include "ctx.h"

extern s32 func_ov003_0217fe80(u8 *p, s16 a, s32 b);
extern s32 func_02035770(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s16 v);

void func_ov003_0217f184(u8 *param_1)
{
    s32 iVar1;
    iVar1 = func_ov003_0217fe80(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 5), 0);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_02035770(param_1, 0x1c);
    if (iVar1 != 0) {
        func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x211));
        return;
    }
}
