#include "ctx.h"

extern int *data_0214f464;
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern int func_0203567c(int);
extern void func_0209f59c(int);
extern void func_0203e908(int, int);

void func_ov004_02165e0c(int param_1)
{
    int iVar1;
    int iVar2;
    int *pp;
    u16 uVar3;

    *(int *)(param_1 + 0x484) = 0;
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(*(int *)(param_1 + 0x484));
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    func_0209f59c(1);
    pp = data_0214f464;
    iVar2 = *pp * 0x10dcd + 1;
    iVar1 = iVar2 * 0x10000;
    *pp = iVar2;
    uVar3 = (u32)iVar1 >> 31;
    switch (uVar3) {
    case 0:
        func_0203e908(param_1, 0x48d);
        break;
    case 1:
        func_0203e908(param_1, 0x48e);
        break;
    }
}
