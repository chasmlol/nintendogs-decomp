#include "ctx.h"

extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern BOOL func_0203592c(u8 *p, u32 a);
extern BOOL func_020357c8(u8 *p, u32 a);
extern void func_0203e908(u8 *p, s32 v);
extern void func_020362f8(u8 *p);
extern u32 func_0202fcc0(u8 *p);

u32 func_0204be88(u8 *param_1, u8 *param_2, s32 param_3)
{
    BOOL bVar1;
    s32 iVar2;

    func_02035be8(param_1);
    iVar2 = func_020289d0(param_1, 0, 1);
    if (iVar2 != 0) {
        return 1;
    }
    bVar1 = func_0203592c(param_1, 0);
    if (bVar1) {
        return 1;
    }
    bVar1 = func_020357c8(param_1, 0);
    if (bVar1) {
        return 1;
    }
    if (*(s16 *)(param_1 + 250) == 27) {
        func_0203e908(param_1, 0x281);
        *(s16 *)(param_1 + 250) = 0;
        goto ret0;
    }
    if (param_2 == 0) {
        goto rf;
    }
    if (param_3 == 0) {
        goto ret0;
    }
    if (*(s16 *)(param_2 + 234) < 632) {
        goto bz;
    }
    if (*(s16 *)(param_2 + 234) > 635) {
        goto bz;
    }
    bVar1 = TRUE;
    goto chk;
bz:
    bVar1 = FALSE;
chk:
    if (bVar1 != 0) {
        goto ret0;
    }
rf:
    func_020362f8(param_1);
    return func_0202fcc0(param_1);
ret0:
    return 0;
}
