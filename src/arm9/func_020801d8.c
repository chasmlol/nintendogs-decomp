#include "ctx.h"

extern u32 data_02155f40;
extern u32 func_0207fb7c(void);

u32 func_020801d8(u32 param_1)
{
    u32 uVar1;

    switch (param_1) {
    case 0:
        return 0x0219a7c0;
    case 2:
        if (data_02155f40 != 0) {
            uVar1 = func_0207fb7c();
            if ((uVar1 & 3) != 1) goto big;
        }
    zero:
        return 0;
    big:
        return 0x2400000;
    case 3:
        return 0x01ffee20;
    case 4:
        return 0x027c0be0;
    case 5:
        return 0x027ff000;
    case 6:
        return 0x037f8000;
    case 1:
    default:
        return 0;
    }
}
