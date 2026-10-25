#include "ctx.h"

extern u32 func_01ffdb08(s32 a);
extern void func_020276a4(u32 a);

void func_020a3798(void)
{
    s16 iVar2 = 0;
    u32 iVar1;
    do {
        iVar1 = func_01ffdb08(iVar2);
        if (iVar1 != 0) {
            func_020276a4(iVar1);
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
}
