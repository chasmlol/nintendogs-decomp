#include "ctx.h"

s32 func_020ad77c(u8 *p);
u32 func_020b0e5c(u8 *p);
s32 func_020ad690(u8 *p);
u32 func_020ad8f0(u8 *p);

u32 func_020b0df8(u8 *param_1)
{
    s32 b;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        return func_020b0e5c(param_1);
    case 2:
        break;
    case 3:
        break;
    case 4:
        b = func_020ad690(param_1);
        if (b == 0) {
            return (u32)b;
        }
        return func_020ad8f0(param_1);
    }
}
