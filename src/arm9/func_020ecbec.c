#include "ctx.h"
extern u32 func_01ffdb08(s32 a);
extern void func_020276b4(u32 a, u32 b);
void func_020ecbec(u8 *p)
{
    u32 r = func_01ffdb08(*(s16 *)(p + 0x8c));
    if (r != 0) {
        func_020276b4(r, 0);
    }
}
