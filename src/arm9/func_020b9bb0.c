#include "ctx.h"

extern int data_0215be48;
extern u8 func_020ad77c(int a);
extern short *func_020b9d98(short *a);
extern u8 func_020ad690(int a);
extern short *func_020ad8f0(int a);

short *func_020b9bb0(short *param_1)
{
    u8 bVar1;

    switch (param_1[0x17]) {
    case 0:
        if (*(int *)(data_0215be48 + 0xb8) != 0x26) {
            break;
        }
        bVar1 = func_020ad77c((int)param_1);
        return (short *)(u32)bVar1;
    case 1:
        return func_020b9d98(param_1);
    case 4:
        bVar1 = func_020ad690((int)param_1);
        if (!bVar1) {
            return (short *)(u32)bVar1;
        }
        return func_020ad8f0((int)param_1);
    case 2:
    case 3:
        break;
    default:
        break;
    }
}
