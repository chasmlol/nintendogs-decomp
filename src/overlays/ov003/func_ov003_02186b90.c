#include "ctx.h"

s32 func_ov003_02187168(u8 *p, s32 a, s16 c);
void func_0203e908(u8 *p, s16 v);

void func_ov003_02186b90(u8 *param_1, s32 param_2, s16 param_3)
{
    s32 iVar1 = func_ov003_02187168(param_1, param_2, param_3);

    if (iVar1 == 0) {
        func_0203e908(param_1, (s16)(param_2 + 236));
    }
}
