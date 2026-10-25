#include "ctx.h"

extern u32 data_02144884[];
extern u32 data_02144310[];
extern u32 data_0214425c;
extern u32 data_02144928;

u32 func_020d5d18(u32 param_1)
{
    if (param_1 < 0x29) {
        return data_02144884[param_1];
    }
    if (param_1 >= 0x80 && param_1 < 0x84) {
        return data_02144310[param_1 - 0x80];
    }
    if (param_1 == 0xff) {
        return data_0214425c;
    }
    return (u32)&data_02144928;
}
