#include "ctx.h"

extern void func_020776d4(int a, u32 *b, int c);

void func_0207b068(u32 *param_1)
{
    int bVar2;
    u32 uVar1;

    uVar1 = *param_1;
    bVar2 = 0;
    if ((uVar1 & 4) == 0) {
        bVar2 = 1;
    }
    if (((uVar1 & 0x20) != 0) && ((uVar1 & 8) == 0)) {
        if (bVar2) {
            func_020776d4(0x1c, param_1 + 0x13, 3);
            bVar2 = 0;
        }
        func_020776d4(0x1b, param_1 + 4, 3);
    }
    if ((*param_1 & 2) == 0) {
        if (bVar2) {
            func_020776d4(0x19, param_1 + 10, 0xc);
        }
        else {
            func_020776d4(0x1a, param_1 + 10, 9);
        }
    }
    else if (bVar2) {
        func_020776d4(0x1c, param_1 + 0x13, 3);
    }
    if ((*param_1 & 1) == 0) {
        func_020776d4(0x1b, param_1 + 1, 3);
        return;
    }
}
