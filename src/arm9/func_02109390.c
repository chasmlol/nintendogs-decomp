#include "ctx.h"
extern u32 func_01ffdb08(u32 a);
extern u32 func_020280f4(u32 a);
u32 func_02109390(u32 p0)
{
    u32 r = 0;
    u32 t = func_01ffdb08(p0);
    if (t != 0) {
        r = func_020280f4(t);
    }
    return r;
}
