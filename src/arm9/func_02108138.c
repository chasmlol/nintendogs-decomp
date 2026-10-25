#include "ctx.h"

extern u8 *data_0215be48;

void func_020fddc0(u32 x);

void func_02108138(s32 param_1, u16 param_2)
{
    u32 v = *(u32 *)(data_0215be48 + 0x1cf0);

    if (param_1 == 4 && v != 1) {
        func_020fddc0(12);
        *(u16 *)(data_0215be48 + 0x1d44) = param_2;
        return;
    }
    func_020fddc0(7);
    *(u32 *)(data_0215be48 + 0x1cec) = param_1;
    *(u16 *)(data_0215be48 + 0x1cf4) = param_2;
}
