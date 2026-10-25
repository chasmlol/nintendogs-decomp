#include "ctx.h"

extern u32 *data_0214f464;
extern int func_02028124(int);
extern void func_0202508c(int, int, int, u32);
extern void func_02024d40(int, int, int, u32);
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern int func_0203567c(int);
extern void func_0209f59c(int);
extern void func_0203e908(int, int);

void func_ov004_021661b4(int param_1)
{
    int iVar2;
    u32 x;
    u16 f;
    int v;

    v = func_02028124(param_1);
    func_0202508c(param_1, 1, 0x17, (u32)((((s64)v * 0xba) + 0x800) >> 12));
    v = func_02028124(param_1);
    func_02024d40(param_1, 3, 0x18, -(u32)((((s64)v * 0x3a) + 0x800) >> 12));
    *(int *)(param_1 + 0x484) = 0;
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
    iVar2 = func_020f5220();
    if (iVar2 != 0) {
        func_020f3bdc(*(int *)(param_1 + 0x484));
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0209f59c(1);
    x = *data_0214f464 * 0x10dcd + 1;
    f = (u16)(((u32)x << 16) >> 31);
    *data_0214f464 = x;
    switch (f) {
    case 0:
        func_0203e908(param_1, 0x48d);
        return;
    case 1:
        func_0203e908(param_1, 0x48e);
        return;
    }
}
