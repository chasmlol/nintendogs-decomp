#include "ctx.h"

extern u8 func_020ad77c(u8 *p);
extern u8 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b3920(u8 *param_1)
{
    u8 t;
    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        t = func_020ad690(param_1);
        if (t == 0) {
            return t;
        }
        return func_020ad8f0(param_1);
    }
}
