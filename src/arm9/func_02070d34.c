#include "ctx.h"

extern void func_020898f4(int a, int b, int c, int d);
extern void func_02002220(int a);
extern void func_02002208(int a);
extern u32 func_02089ecc(void);
extern void func_02089f9c(int a);
extern void func_02089f0c(u32 a);
extern void func_02070d00(int a);

void func_02070d34(int param_1)
{
    u32 uVar1;

    if (((*(int *)(param_1 + 0x24) << 30) >> 31) != 0) {
        func_020898f4(*(int *)(param_1 + 0x44), 0, 1 << *(u32 *)(param_1 + 0x40), 0);
        func_02002220(param_1 + 8);
        func_02002208(param_1 + 0x14);
        *(u32 *)(param_1 + 0x24) = *(u32 *)(param_1 + 0x24) & 0xfffffffd;
        uVar1 = func_02089ecc();
        func_02089f9c(1);
        func_02089f0c(uVar1);
    }
    func_02070d00(param_1);
}
