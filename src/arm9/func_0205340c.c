#include "ctx.h"

extern s32 func_02036578(u32);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u32);
extern void func_0203e908(u32, s16);

u32 func_0205340c(u32 param_1)
{
    s32 iVar1;
    u32 uVar2;
    u32 uVar3;
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 4) == 0) {
        uVar3 = func_0202fd7c(param_1);
        return uVar3;
    }
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x289);
        return 1;
    }
    return 0;
}
