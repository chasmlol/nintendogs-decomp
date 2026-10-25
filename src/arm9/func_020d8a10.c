#include "ctx.h"

extern void func_020cf9c8(u8 *p, u32 a, s32 b, u32 c);
extern void func_020cf9bc(u8 *p);
extern s32 func_020c8db4(s32 a);

void func_020d8a10(u8 *param_1, s32 param_2)
{
    s32 iVar1;

    if (param_2 == 0) {
        goto c0;
    }
    if (param_2 == 1) {
        goto c1;
    }
    if (param_2 == 2) {
        goto c2;
    }
    return;
c0:
    func_020cf9c8(param_1, 24, -1, 0);
    func_020cf9bc(param_1);
    return;
c1:
    iVar1 = func_020c8db4(-1);
    func_020cf9c8(param_1, 4, iVar1, 0);
    func_020cf9bc(param_1);
    return;
c2:
    func_020cf9c8(param_1, 16, -1, 0);
    func_020cf9bc(param_1);
}
