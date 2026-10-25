#include "ctx.h"
u32 func_020bd51c(u8 *obj, u32 v)
{
    u32 (*cb)(u8 *) = *(u32 (**)(u8 *))(obj + 0x210);
    if (cb != NULL) {
        v = cb(obj);
    }
    return v;
}
