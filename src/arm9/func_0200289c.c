#include "ctx.h"

extern void func_02002de0(void);
extern s32 func_020028d8(s32 a, u32 b, s32 *c);
extern void func_02002de8(void);

s32 func_0200289c(s32 param_1)
{
    s32 iVar1;
    s32 aiStack_8[1];
    iVar1 = func_020028d8(param_1, (u32)func_02002de0, aiStack_8);
    if (iVar1 == 0) {
        func_02002de8();
        return aiStack_8[0];
    }
    return iVar1;
}
