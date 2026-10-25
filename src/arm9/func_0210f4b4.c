#include "ctx.h"

extern u32 data_0214887c;
extern void func_020fc610(int a, void *b, int c);
extern void func_020421b8(int a);

void func_0210f4b4(int param_1)
{
    int iVar1;

    *(u32 *)(param_1 + 0x1c) = 0;
    func_020fc610(0xe, (void *)&data_0214887c, 2);
    iVar1 = 0;
    do {
        func_020421b8((int)(s8)iVar1);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
}
