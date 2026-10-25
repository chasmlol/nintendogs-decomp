#include "ctx.h"

u32 *func_0208a240(u32 v);
u64 func_020705b8(void);
u64 func_0207154c(u32 lo, u32 hi);
void func_0207341c(u32 lo, u32 hi);
void func_02089f9c(u32 v);

void func_0206fe48(void)
{
    u32 *piVar1;
    u64 uVar2;

    do {
        piVar1 = func_0208a240(0);
    } while (piVar1 != 0);
    uVar2 = func_020705b8();
    uVar2 = func_0207154c((u32)uVar2, (u32)(uVar2 >> 32));
    func_0207341c((u32)uVar2, (u32)(uVar2 >> 32));
    func_02089f9c(0);
}
