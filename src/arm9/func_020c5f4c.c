#include "ctx.h"

s32 func_020bd824(s32 a, s32 b, s32 c, s32 d);
s32 func_01ffdb08(s32 a);
void func_0202707c(s32 a, s32 b);

u32 func_020c5f4c(s32 param_1, s32 param_2)
{
    s32 bVar1;
    s32 iVar2;

    bVar1 = func_020bd824(param_1, 4, param_2, -1);
    if (bVar1 != 0) {
        iVar2 = func_01ffdb08(param_2);
        if (*(s16 *)(param_1 + 0x90) == 6) {
            func_0202707c(iVar2, 0x2a);
        } else {
            func_0202707c(iVar2, 0x25);
        }
        return 1;
    }
    return 0;
}
