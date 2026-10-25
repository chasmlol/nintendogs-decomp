#include "ctx.h"
extern s32 func_02035770(u8 *p, s32 v);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);
void func_02045dc8(u8 *param_1)
{
    s32 iVar1 = func_02035770(param_1, 50);
    if (iVar1 != 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
    }
}
