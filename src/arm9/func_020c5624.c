#include "ctx.h"

extern void func_020bd858(int p);
extern void func_020c568c(int p);
extern int func_01ffdb08(int a);

void func_020c5624(int param_1)
{
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        func_020bd858(param_1);
        return;
    case 1:
        break;
    case 2:
        func_020c568c(param_1);
        return;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        func_01ffdb08((int)*(s16 *)(param_1 + 0x98));
    }
}
