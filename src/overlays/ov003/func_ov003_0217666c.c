#include "ctx.h"

extern int func_0203579c(int a, int b);
extern u32 func_02028124(int a);
extern int func_ov003_02176714(int a);
extern int func_0203567c(int a);
extern void func_0203e908(int a, int b);

void func_ov003_0217666c(int param_1)
{
    int iVar1;
    u32 uVar2;

    iVar1 = func_0203579c(param_1, 3);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = (s32)((((s64)(s32)uVar2 * -32) + 0x800) >> 12);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -8;
    }
    iVar1 = func_ov003_02176714(param_1);
    if (iVar1 == 0) {
        iVar1 = func_0203567c(param_1);
        if (iVar1 != 0) {
            func_0203e908(param_1, 0x3a8);
        }
    }
}
