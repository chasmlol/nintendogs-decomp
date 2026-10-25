#include "ctx.h"

extern u32 data_0215603c;
extern void func_0206555c(u16 a, s32 b, u32 c, u32 d);
extern void func_0206553c(u16 a);

u32 func_02088660(u8 *param_1, s32 param_2, u32 param_3, u32 param_4)
{
    switch (param_2) {
    case 9:
        func_0206555c((u16)data_0215603c, param_2, param_3, param_4);
        return 0;
    case 10:
        func_0206553c((u16)data_0215603c);
        return 0;
    case 1:
        return 4;
    default:
        return 8;
    }
}
