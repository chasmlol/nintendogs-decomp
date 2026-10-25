#include "ctx.h"

extern u32 func_02028124(int);
extern void func_0202508c(int, int, int, int);
extern void func_02024d40(int, int, int, int);
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern void func_ov004_02169ff4(int);
extern int func_0203567c(int);
extern void func_0203e908(int, int);

void func_ov004_02166694(int param_1)
{
    u32 uVar1;
    int iVar2;

    uVar1 = func_02028124(param_1);
    func_0202508c(param_1, 14, 0x28,
                  (u32)(((s64)(s32)uVar1 * 157 + 0x800) >> 12));
    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 0x11, 0x23,
                  (u32)(((s64)(s32)uVar1 * -68 + 0x800) >> 12));
    *(u32 *)(param_1 + 0x484) = 0;
    *(u32 *)(param_1 + 0x2a0) = *(u32 *)(param_1 + 0x2a0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3f0) = *(u32 *)(param_1 + 0x3f0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3fc) = *(u32 *)(param_1 + 0x3fc) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    iVar2 = func_020f5220();
    if (iVar2 != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    func_ov004_02169ff4(param_1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 0x483);
        return;
    }
    return;
}
