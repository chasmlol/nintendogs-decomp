#include "ctx.h"
extern u8 func_02072d28(u32 a, u32 *b);
u32 func_0209b53c(u32 p0, u32 *p1)
{
    if (p0 != 0xff) {
        return func_02072d28(p0, p1);
    }
    return p0;
}
