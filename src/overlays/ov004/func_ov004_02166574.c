#include "ctx.h"

extern int func_02028124(int);
extern void func_0202508c(int, int, int, u32);
extern void func_02024d40(int, int, int, u32);
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern void func_ov004_02169ff4(int);
extern int func_0203567c(int);
extern void func_0203e908(int, int);

void func_ov004_02166574(int param_1)
{
    int v;
    int iVar2;

    v = func_02028124(param_1);
    func_0202508c(param_1, 14, 40, (u32)((((s64)v * 0x9d) + 0x800) >> 12));
    v = func_02028124(param_1);
    func_02024d40(param_1, 17, 35, -(u32)((((s64)v * -68) + 0x800) >> 12));
    *(int *)(param_1 + 0x484) = 0;
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
    iVar2 = func_020f5220();
    if (iVar2 != 0) {
        func_020f3bdc(*(int *)(param_1 + 0x484));
    }
    func_ov004_02169ff4(param_1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 0x484);
    }
}
