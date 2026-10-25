#include "ctx.h"

extern int data_0215942c;
extern int func_02109340(int a);

u32 func_021071a0(void)
{
    u32 uVar2;
    int uVar1;

    uVar2 = 0xffff;
    uVar1 = func_02109340((int)*(s16 *)(data_0215942c + 0xe));
    switch (uVar1) {
    case 0:
        uVar2 = 1;
        break;
    case 1:
        break;
    case 2:
        uVar2 = 2;
        break;
    case 3:
        uVar2 = 4;
        break;
    case 4:
        uVar2 = 0;
        break;
    case 5:
        uVar2 = 5;
        break;
    case 6:
        uVar2 = 3;
        break;
    }
    return uVar2;
}
