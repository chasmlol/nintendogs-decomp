#include "ctx.h"

extern u32 data_0214f464;
extern int func_0204754c(int a, int b);
extern void func_0204fc38(int a);

void func_020470fc(int param_1)
{
    int iVar1;
    u32 uVar2;
    u32 *q;

    iVar1 = func_0204754c(param_1, 1);
    if (iVar1 != 0) {
        return;
    }
    q = (u32 *)data_0214f464;
    uVar2 = *q * 0x10dcd + 1;
    *q = uVar2;
    if ((u16)(((u32)(u16)uVar2 * 0x32) >> 16) == 0) {
        func_0204fc38(param_1);
    }
}
