#include "ctx.h"

extern u32 data_02159074;
extern s32 func_020a191c(void);

u32 func_0209ab9c(void)
{
    s32 iVar1;
    iVar1 = func_020a191c();
    if (iVar1 != 0) {
        goto ret1;
    }
    if (*(s32 *)((u8 *)&data_02159074 + 0x20) == 0) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}
