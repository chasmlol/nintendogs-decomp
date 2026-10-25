#include "ctx.h"

extern u32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, s32 a, s32 b, u32 v);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 x);
extern s32 func_0203567c(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0201cc10(u8 *param_1)
{
    u32 uVar1;
    s64 S;
    s64 U;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    S = (s64)(s32)uVar1 * (s64)0x102;
    U = S + 0x800;
    func_02024d40(param_1, 30, 49, (u32)((S + 0x800) >> 12));
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0202fcc0(param_1);
        return;
    }
}
