#include "ctx.h"
extern s32 func_02088b6c(u16 *a, u32 b, u32 c);
extern s32 func_02088acc(u32 a);
extern void func_02088928(u32 *a);
u32 func_020887a8(u32 param_1, u32 param_2)
{
    s32 iVar1;
    u32 auStack_30[11];
    iVar1 = func_02088b6c((u16 *)auStack_30, param_1, param_2);
    if (iVar1 == 0) {
        goto zero;
    }
    iVar1 = func_02088acc((u32)auStack_30);
    if (iVar1 != 0) {
        goto ret1;
    }
zero:
    return 0;
ret1:
    func_02088928(auStack_30);
    return 1;
}
