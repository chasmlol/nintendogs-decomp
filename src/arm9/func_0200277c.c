#include "ctx.h"

extern void func_02002de0(void);
extern s32 func_020027b8(u32, s32 *);
extern void func_02002de8(void);

s32 func_0200277c(void)
{
    s32 iVar1;
    s32 local;
    iVar1 = func_020027b8((u32)func_02002de0, &local);
    if (iVar1 == 0) {
        func_02002de8();
        return local;
    }
    return iVar1;
}
