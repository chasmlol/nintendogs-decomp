#include "ctx.h"

void func_020bd858(s32 a);
void func_020bd868(s32 a);
void func_020bf1ec(s32 a);

void func_020ea198(s32 param_1)
{
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        func_020bd858(param_1);
        return;
    case 1:
        func_020bd868(param_1);
        *(u32 *)(param_1 + 0xc0) = 0x1806;
        *(s16 *)(param_1 + 0xa6) = 1;
        return;
    case 2:
        break;
    case 3:
        break;
    case 4:
        func_020bf1ec(param_1);
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    }
    return;
}
