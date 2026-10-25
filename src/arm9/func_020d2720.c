#include "ctx.h"
extern u32 func_020d055c(u8 *p, u32 v);
extern void func_020d0810(u8 *p, u32 v);
extern BOOL func_020d1094(u8 *p);
BOOL func_020d2720(s32 *param_1, u32 param_2)
{
    u32 uVar2;
    BOOL bVar1;
    uVar2 = func_020d055c((u8 *)(param_1 + 4), param_2);
    func_020d0810((u8 *)param_1, uVar2);
    bVar1 = *param_1;
    if (bVar1 != 0) {
        return func_020d1094((u8 *)param_1);
    }
    return bVar1;
}
