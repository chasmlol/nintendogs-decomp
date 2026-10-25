#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern int func_0207ceb0(u32 *p, int a);
extern void func_0207cec8(u32 *p, int a);
extern void func_02073178(int a);

void func_020731b0(u32 *param_1, int param_2)
{
    u32 uVar3;
    int iVar1;
    int iVar2;

    uVar3 = func_02080b08();
    iVar1 = func_0207ceb0(param_1, 0);
    while (iVar1 != 0) {
        iVar2 = func_0207ceb0(param_1, iVar1);
        if (*(int *)(iVar1 + 8) == param_2) {
            func_0207cec8(param_1, iVar1);
            func_02073178(iVar1);
        }
        iVar1 = iVar2;
    }
    func_02080b1c(uVar3);
}
