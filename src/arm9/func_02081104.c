#include "ctx.h"

extern int *func_02085a94(int *p);
extern void func_02085ad8(int *a, int *b);
extern void func_02085a28(int *a, int *b);

void func_02081104(int param_1, int *param_2)
{
    int *piVar1;

    piVar1 = func_02085a94(param_2 + 2);
    if (piVar1 != (int *)0) {
        do {
            func_02085ad8((int *)(param_1 + 0x14), piVar1);
            piVar1 = func_02085a94(param_2 + 2);
        } while (piVar1 != (int *)0);
    }
    piVar1 = func_02085a94(param_2 + 4);
    if (piVar1 != (int *)0) {
        do {
            func_02085ad8((int *)(param_1 + 0x14), piVar1);
            piVar1 = func_02085a94(param_2 + 4);
        } while (piVar1 != (int *)0);
    }
    func_02085a28((int *)(param_1 + 4), param_2);
    func_02085ad8((int *)(param_1 + 0xc), param_2);
}
