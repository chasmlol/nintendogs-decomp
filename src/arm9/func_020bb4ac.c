#include "ctx.h"

extern BOOL func_020ad77c(u8 *p);
extern BOOL func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020bb4ac(u8 *param_1)
{
    u8 *keep;
    BOOL b;
    u32 rv;

    keep = param_1;
    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
    case 2:
    case 3:
        break;
    case 4:
        b = func_020ad690(param_1);
        if (b == 0) {
            return b;
        }
        rv = func_020ad8f0(keep);
        break;
    default:
        break;
    }
    return rv;
}
