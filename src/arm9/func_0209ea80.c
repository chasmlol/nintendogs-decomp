#include "ctx.h"

extern u8 data_02159198;
extern u32 data_0215919c;

void func_02070ac8(u32 *p, s32 a, u32 b);

u32 func_0209ea80(s32 param_1, u32 param_2)
{
    u8 *obj = (u8 *)&data_02159198;
    s32 lr;

    *(u16 *)(obj + 34) = (u16)param_1;
    if (data_0215919c == 0) {
        return 0;
    }
    lr = param_1 * (u16)*(u16 *)(obj + 36);
    func_02070ac8(&data_0215919c, lr / 100, param_2);
    return 1;
}
