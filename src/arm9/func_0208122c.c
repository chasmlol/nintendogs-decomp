#include "ctx.h"

extern int *func_02085a94(int *a);
extern void func_02082620(int *a, int b, int *c);
extern void func_02085ad8(int *a, int *b);

int *func_0208122c(int param_1, int param_2, int *param_3)
{
    int *piVar1;

    piVar1 = (int *)0x0;
    if (((int *)param_1)[3] != 0) {
        piVar1 = func_02085a94((int *)(param_1 + 0xc));
        func_02082620(piVar1, *(int *)(param_1 + 0x1c) + param_2 * 0x20, param_3);
        func_02085ad8((int *)(param_1 + 4), piVar1);
        if (((**(u32 **)piVar1[6]) << 17) >> 31) {
            piVar1 = (int *)0x0;
        }
    }
    return piVar1;
}
