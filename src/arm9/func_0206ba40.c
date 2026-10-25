#include "ctx.h"

extern u32 data_02150e68;
extern u32 data_02150e78;

u32 func_02068be0(void);

void func_0206ba40(void)
{
    u32 uVar1;

    uVar1 = func_02068be0();
    data_02150e68 = uVar1;
    switch (uVar1) {
    case 2:
    case 3:
        data_02150e78 = 0x6800000;
        return;
    case 8:
    case 12:
        data_02150e78 = 0x06840000;
        return;
    case 1:
        data_02150e78 = 0x067e0000;
        return;
    case 4:
        data_02150e78 = 0x06820000;
        break;
    case 0:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
        break;
    }
}
