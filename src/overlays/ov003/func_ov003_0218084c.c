#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern u8 *data_0215942c;
extern s32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, u32 a, u32 b, s32 v);
extern s32 func_0203567c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_0218084c(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 30, 49, -FX_Mul(uVar1, 258));
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    if (*(u16 *)data_0215942c == 1) {
        goto A;
    }
    if (*(u16 *)data_0215942c != 4) {
        goto B;
    }
A:
    func_0203e908(param_1, 0x3ab);
    return;
B:
    iVar2 = func_020385e4(param_1);
    switch (iVar2) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
    }
}
