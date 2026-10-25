#include "ctx.h"

extern s32 func_020c8db4(s32 a);
extern s32 func_020bc1c4(void);
extern void func_020c9404(s32 *p, s32 v);
extern void func_020c92a0(s32 *p, s32 v);
extern void func_020d075c(s32 *p, s32 v);

void func_020d82d4(s32 *param_1, s32 param_2)
{
    s32 iVar1;
    s32 iVar2;

    iVar1 = func_020c8db4(-1);
    iVar2 = func_020bc1c4();
    if (iVar2 == 0x11) {
        func_020c9404(param_1, iVar1);
    } else {
        iVar2 = func_020bc1c4();
        if (iVar2 == 0x12) {
            func_020c92a0(param_1, iVar1);
        }
    }
    func_020d075c(param_1, param_2);
}
