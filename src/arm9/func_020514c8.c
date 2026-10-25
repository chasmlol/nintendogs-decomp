#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u8 *p);
extern s32 func_02027894(u8 *p, s32 v);
extern void func_0203e908(u8 *p, s32 v);

u32 func_020514c8(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 0x10) == 0) {
        return func_0202fd7c(param_1);
    }
    if (iVar1 != 0) {
        iVar1 = func_02027894(param_1, iVar1);
        *(s32 *)(param_1 + 0x484) = iVar1;
        func_0203e908(param_1, (s16)0x295);
        return 1;
    }
    return 0;
}
