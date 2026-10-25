#include "ctx.h"

extern void func_020bd858(int p);
extern void func_020e4c9c(int p);

void func_020e4c34(int param_1)
{
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        func_020bd858(param_1);
        return;
    case 2:
        func_020e4c9c(param_1);
        return;
    case 1:
        *(u16 *)(*(int *)(param_1 + 0x214) + 0x10) = 0;
        *(u16 *)(param_1 + 0xa6) = 2;
        break;
    case 3:
        break;
    }
}
