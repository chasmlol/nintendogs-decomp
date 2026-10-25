#include "ctx.h"

extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern void func_ov004_02169ff4(int);
extern int func_0203567c(int);
extern void func_0203e908(int, int);

void func_ov004_021664e0(int param_1)
{
    int iVar1;

    *(u32 *)(param_1 + 0x484) = 0;
    *(u32 *)(param_1 + 0x2a0) = *(u32 *)(param_1 + 0x2a0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3f0) = *(u32 *)(param_1 + 0x3f0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3fc) = *(u32 *)(param_1 + 0x3fc) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    func_ov004_02169ff4(param_1);
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x485);
        return;
    }
    return;
}
