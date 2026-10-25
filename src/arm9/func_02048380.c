#include "ctx.h"

extern s32 func_02028124(u32 p);
extern void func_0202533c(u32 p, u32 v);
extern s32 func_0203567c(u32 p);
extern void func_020362f8(u32 p);
extern void func_0202fcc0(u32 p);

void func_02048380(u32 param_1)
{
    s32 uVar1;
    s64 t;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    t = (s64)uVar1 * 109 + 0x800;
    func_0202533c(param_1, (u32)(t >> 12));
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
        return;
    }
    return;
}
