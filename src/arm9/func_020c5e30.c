#include "ctx.h"

extern BOOL func_020bd824(int p, int a, s16 b, int c);
extern int func_01ffdb08(int a);
extern void func_0202707c(int p, int a);
extern void func_020274f0(int p, int a);

u32 func_020c5e30(int param_1, u32 param_2)
{
    BOOL bVar1;
    int iVar2;

    bVar1 = func_020bd824(param_1, 8, *(s16 *)(param_1 + 0x98), -1);
    if (bVar1) {
        iVar2 = func_01ffdb08((int)*(s16 *)(param_1 + 0x98));
        func_0202707c(iVar2, 0x2c);
        func_020274f0(iVar2, param_2);
        return 1;
    }
    return 0;
}
