#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
s32 func_02024e40(u8 *p, s32 a, s32 b);
void func_02024d40(u8 *p, s32 a, s32 b, s32 c);
void func_0201d1f0(u8 *p);
void func_02035c98(u8 *p, s32 a);
s32 func_0203567c(u8 *p);
void func_0202fcc0(u8 *p);

void func_0201cde4(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024e40(param_1, 24, -FX_Mul(uVar1, 85));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 24, 37, -FX_Mul(uVar1, 126));
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0202fcc0(param_1);
    }
}
