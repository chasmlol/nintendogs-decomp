#include "ctx.h"

extern s32 func_0203567c(u32);
extern void func_02022b7c(u32);
extern void func_ov003_021894ec(u32, u32, u32, s32);

void func_ov003_02186654(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_0203567c(param_1);
    func_02022b7c(param_1);
    func_ov003_021894ec(param_1, 5, 0x57, iVar1);
}
