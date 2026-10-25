#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020ad77c(u32 p);
extern u32 func_020ad690(u32 p);
extern u32 func_020ad8f0(u32 p);

u32 func_020bb504(u32 param_1)
{
    u32 keep = param_1;
    u32 rv;
    switch (*(s16 *)(keep + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
    case 2:
    case 3:
        break;
    case 4:
        rv = func_020ad690(param_1);
        if (rv == 0) {
            return rv;
        }
        rv = func_020ad8f0(keep);
        break;
    }
    return rv;
}
