#include "ctx.h"

void func_020edcc8(u8 *p);
void func_020ecf88(u8 *p);

void func_020ecf40(u8 *param_1)
{
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        func_020edcc8(param_1);
        return;
    case 3:
        func_020ecf88(param_1);
        break;
    }
}
