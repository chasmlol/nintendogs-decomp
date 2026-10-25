#include "ctx.h"

extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 v);
extern void func_02035c98(u8 *p, s32 v);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_020357c8(u8 *p, s32 a);
extern s32 func_02028124(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_ov003_0217e0b8(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;

    func_0203942c(param_1);
    iVar1 = func_02037450(param_1, 0x392);
    func_02035c98(param_1, 1);
    if (*(u16 *)(param_1 + 0xfc) > 40) {
        if (func_020289d0(param_1, 0, 1) != 0) {
            return;
        }
    }
    iVar2 = func_020357c8(param_1, 0);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_02028124(param_1);
    if (iVar1 >= iVar2 * 64) {
        goto late;
    }
    func_0202fcc0(param_1);
    return;
late:
    if (*(u16 *)(param_1 + 0xfc) <= 400) {
        return;
    }
    func_0202fcc0(param_1);
}
