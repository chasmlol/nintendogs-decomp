#include "ctx.h"
extern s32 func_020c8db4(s32 a);
extern void func_020cf9c8(u8 *p, u32 a, s32 b, u32 c);
extern void func_020be118(s32 *a);
extern void func_020be1d8(u32 a);
extern void func_020cf9bc(u8 *p);
void func_020d84c0(u8 *param_1)
{
    s32 iVar1;
    s32 aiStack_18[3];
    iVar1 = func_020c8db4(-1);
    if (iVar1 == -1) {
        func_020cf9c8(param_1, 2, -1, 0);
        return;
    }
    if (*(s32 *)(param_1 + 0x34) != 4) {
        aiStack_18[0] = 0x1000;
        aiStack_18[1] = 0x5000;
        aiStack_18[2] = 0x1000;
        func_020be118(aiStack_18);
        func_020be1d8(0);
        func_020cf9bc(param_1);
        func_020cf9c8(param_1, 4, iVar1, 0);
        return;
    }
}
