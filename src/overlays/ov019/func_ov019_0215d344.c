#include "ctx.h"
extern s32 func_ov019_021611a0(void);
u32 func_ov019_0215d344(s32 param_1)
{
    s32 iVar1;
    if (param_1 < 0) {
        goto zero;
    }
    if (param_1 < 50) {
        goto body;
    }
zero:
    return 0;
body:
    iVar1 = func_ov019_021611a0();
    return *(u32 *)(iVar1 + param_1 * 4 + 4);
}
