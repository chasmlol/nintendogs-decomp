#include "ctx.h"

extern u32 func_02028124(u8 *p);
extern void func_02024f18(u8 *p, u32 a, s32 b);
extern s32 func_0204754c(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0204fc38(u8 *p);

void func_02047238(u8 *param_1)
{
    u32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    func_02024f18(param_1, 1, (s32)((((s64)(s32)uVar1 * (s64)491) + 0x800) >> 12));
    iVar2 = func_0204754c(param_1, 1);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0204fc38(param_1);
    }
}
