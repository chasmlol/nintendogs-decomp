#include "ctx.h"

extern u32 func_020e71ec(u32 p);
extern u8 func_020c5fbc(u32 p);

u32 func_020e71a8(u32 param_1)
{
    u8 bVar1;

    if (*(s16 *)(param_1 + 0x90) != 1) {
        if (*(s16 *)(param_1 + 0x90) != 2) {
            return param_1;
        }
        bVar1 = func_020c5fbc(param_1);
        return (u32)bVar1;
    }
    return func_020e71ec(param_1);
}
