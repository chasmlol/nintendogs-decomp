#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_0218f1f8(u8 *param_1)
{
    s32 iVar1;
    if (*(s16 *)(param_1 + 0xfa) == 0x20) {
        *(s16 *)(param_1 + 0xfa) = 0;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x436);
        return;
    }
}
