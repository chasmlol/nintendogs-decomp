#include "ctx.h"

u32 func_0207ce08(u8 *p);
u32 func_0207ce20(u8 *p, u32 v);

u32 func_0207ca80(u8 *param_1)
{
    u32 v;

    if (func_0207ce08(param_1) != 0) {
        return 0;
    }
    v = *(u16 *)(param_1 + 10);
    *(u16 *)(param_1 + 10) = (u16)func_0207ce20(param_1, v);
    *(u16 *)(param_1 + 12) = *(u16 *)(param_1 + 12) + 1;
    return 1;
}
