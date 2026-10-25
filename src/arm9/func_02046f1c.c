#include "ctx.h"
extern s32 func_02028124(u8 *p);
extern void func_0202508c(u8 *p, u32 a, u32 b, u32 c);
extern u32 func_0203567c(u8 *p);
extern void func_0202fd7c(u8 *p);
void func_02046f1c(u8 *param_1)
{
    s32 uVar1;
    s64 v;
    u32 iVar2;
    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * (s64)-630 + 0x800;
    func_0202508c(param_1, 9, 0x11, (u32)(v >> 12));
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0202fd7c(param_1);
        return;
    }
}
