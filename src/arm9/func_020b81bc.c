#include "ctx.h"

s32 func_020ad77c(u8 *p);
s32 func_020b8220(u8 *p);
s32 func_020ad690(u8 *p);
u32 func_020ad8f0(u8 *p);

u32 func_020b81bc(u8 *param_1)
{
    s32 t;
    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        return func_020b8220(param_1);
    case 4:
        t = func_020ad690(param_1);
        if (t == 0) {
            return t;
        }
        return func_020ad8f0(param_1);
    case 2:
    case 3:
        break;
    default:
        break;
    }
}
