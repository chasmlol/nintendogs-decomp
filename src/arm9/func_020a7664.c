#include "ctx.h"

extern u16 func_02093e0c(void);
extern u32 func_020a77ec(u32 a);
extern u32 func_020a778c(u32 a);
extern u32 func_020a772c(u32 a);

u32 func_020a7664(u32 param_1, u32 param_2)
{
    u16 uVar1;
    u32 uVar2;

    uVar2 = 0xffff;
    switch (param_1) {
    case 0:
        uVar1 = func_02093e0c();
        uVar2 = uVar1;
        break;
    case 1:
        uVar2 = func_020a77ec(param_2);
        break;
    case 2:
        uVar2 = func_020a778c(param_2);
        break;
    case 3:
        uVar2 = func_020a772c(param_2);
        break;
    case 4:
        uVar2 = 0x18;
        break;
    case 5:
        uVar2 = 0x19;
        break;
    case 6:
        uVar2 = 0x1a;
        break;
    case 7:
        uVar2 = 0x1c;
        break;
    case 8:
        uVar2 = 0x1d;
        break;
    case 9:
        uVar2 = 0x1b;
        break;
    case 10:
        uVar2 = 0x1e;
    }
    return uVar2;
}
