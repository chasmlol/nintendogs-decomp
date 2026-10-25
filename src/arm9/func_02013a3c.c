#include "ctx.h"

extern s32 func_0203567c(s32 a);
extern void func_02027f40(s32 a, s32 b, s32 c);
extern void func_ov003_0218e690(s32 a);

void func_02013a3c(s32 param_1)
{
    s32 iVar1;
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        *(s16 *)(param_1 + 0x104) = 0;
        func_02027f40(param_1, 2, 0);
        func_ov003_0218e690(param_1);
        return;
    }
}
