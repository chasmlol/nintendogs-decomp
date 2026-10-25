#include "ctx.h"

extern s32 data_0215be48;
extern void func_0210a854(s32 a);
extern void func_0210b4c0(s32 a, s32 b);

void func_02108aa4(s32 param_1)
{
    s32 uVar1;

    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xa8) != 5) {
        return;
    }
    func_0210a854(5);
    uVar1 = 0;
    switch (param_1) {
    case 0:
        uVar1 = 1;
        break;
    case 1:
        uVar1 = 2;
        break;
    case 2:
        uVar1 = 3;
        break;
    case 3:
        uVar1 = 4;
    }
    func_0210b4c0(uVar1, data_0215be48 + 0x5264);
}
