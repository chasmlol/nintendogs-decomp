#include "ctx.h"

extern int *data_0215be44;
extern void func_020f43f4(void);
extern void func_020f405c(void);

void func_020f4008(void)
{
    int *piVar1;

    piVar1 = data_0215be44;
    if (*piVar1 != 0) {
        if (piVar1[2] != 0) {
            piVar1[1] = piVar1[1] + piVar1[3];
        }
        func_020f43f4();
        func_020f405c();
        return;
    }
    return;
}
