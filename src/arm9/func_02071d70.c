#include "ctx.h"

extern u32 func_02089ecc(void);
extern void func_02089f9c(u32 a);
extern void func_02089f0c(u32 a);

void func_02071d70(void)
{
    u32 uVar1;

    uVar1 = func_02089ecc();
    func_02089f9c(1);
    func_02089f0c(uVar1);
}
