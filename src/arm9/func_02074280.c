#include "ctx.h"

extern void func_0207431c(int a, int b);
extern void func_02074394(int *a, int b);

void func_02074280(int param_1, int param_2)
{
    u8 cVar1;

    cVar1 = **(u8 **)(param_2 + 8);
    switch (cVar1) {
    case 'M':
        func_0207431c(param_1 + 0x3c, param_2);
        func_02074394((int *)(param_1 + 8), param_2);
        break;
    case 'J':
        func_0207431c(param_1 + 0x44, param_2);
        func_02074394((int *)(param_1 + 0x10), param_2);
        break;
    case 'V':
        func_0207431c(param_1 + 0x4c, param_2);
        func_02074394((int *)(param_1 + 0x18), param_2);
        break;
    }
}
