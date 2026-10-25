#include "ctx.h"

extern int func_0203567c(int p);
extern void func_ov003_0217b43c(u32 p, int a, int b, int c, int d, int e, int f, int g);
extern int func_0203579c(u32 p, int a);
extern s32 func_02028124(int p);

void func_ov003_0217b184(u32 param_1)
{
    int iVar1;
    s32 uVar2;
    s64 v;

    iVar1 = func_0203567c(param_1);
    func_ov003_0217b43c(param_1, 0x18, 0x38, 1, 0, iVar1, 0x13, 0x13);
    iVar1 = func_0203579c(param_1, 0x18);
    if (iVar1 == 0) {
        return;
    }
    uVar2 = func_02028124(param_1);
    v = (s64)uVar2 * (s64)-64 + 0x800;
    *(u32 *)(param_1 + 0x25c) = (u32)(v >> 12);
    *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x25c) * -0x10;
}
