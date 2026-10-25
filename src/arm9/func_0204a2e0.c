#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_0204d0bc(u8 *p, s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern BOOL func_0203592c(u8 *p, u32 a);
extern BOOL func_020357c8(u8 *p, u32 a);
extern void func_020362f8(u8 *p);
extern u32 func_0202fcc0(u8 *p);

void func_0204a2e0(u8 *param_1)
{
    s32 iVar2;
    BOOL bVar1;

    iVar2 = func_02036578(param_1);
    func_0204d0bc(param_1, iVar2);
    func_02035be8(param_1);
    if (func_020289d0(param_1, 0, 1) != 0) {
        return;
    }
    bVar1 = func_0203592c(param_1, 0);
    if (bVar1) {
        return;
    }
    if (func_020357c8(param_1, 0) != 0) {
        return;
    }
    if (iVar2 != 0) {
        if (*(s16 *)(iVar2 + 0xea) < 655) {
            goto bz;
        }
        if (*(s16 *)(iVar2 + 0xea) > 656) {
            goto bz;
        }
        bVar1 = TRUE;
        goto chk;
bz:
        bVar1 = FALSE;
chk:
        if (bVar1) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
