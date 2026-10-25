#include "ctx.h"
extern u8 *func_020978d0(u32 a, u32 b);
extern u32 data_02159038;
extern u32 func_02096908(u32 a, u32 b, u32 c);
u32 func_02095d6c(u32 p0, u32 p1, u32 p2, u32 p3)
{
    u32 r4 = 0;
    u8 *o = func_020978d0(p0, p1);
    if (*(u32 *)(o + 0x10) != 0) {
        if (p3 != 0 || *(u32 *)(o + 0xc) != data_02159038) {
            r4 = func_02096908((u32)o, p2, 0);
        }
    }
    return r4;
}
