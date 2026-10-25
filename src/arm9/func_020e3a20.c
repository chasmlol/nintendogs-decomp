#include "ctx.h"

extern void func_020e3a78(int a);
extern void func_020e40d4(int a);
extern void func_020e3ea0(int a);

void func_020e3a20(int param_1)
{
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 2:
        func_020e40d4(param_1);
        return;
    case 3:
        func_020e3ea0(param_1);
        return;
    case 1:
        func_020e3a78(param_1);
        break;
    }
}
