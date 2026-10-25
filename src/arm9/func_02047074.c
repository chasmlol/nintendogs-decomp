#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern void func_0202508c(u8 *p, u32 a, u32 b, u32 c);
extern s32 func_0204754c(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0204fc38(u8 *p);

void func_02047074(u8 *param_1)
{
    s32 uVar1;
    s64 t;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    t = (s64)uVar1 * 279 + 0x800;
    func_0202508c(param_1, 16, 38, (u32)(t >> 12));
    iVar2 = func_0204754c(param_1, 1);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0204fc38(param_1);
        return;
    }
}
