#include "ctx.h"

extern s32 func_01ffdb08(s32);
extern void func_020beec0(u8 *, s32, s32 *);

void func_020bee8c(u8 *param_1, s32 *param_2)
{
    s32 iVar1;
    iVar1 = func_01ffdb08((s32)*(s16 *)(param_1 + 0x98));
    func_020beec0(param_1, iVar1, param_2);
}
