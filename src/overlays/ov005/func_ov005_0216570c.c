#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_0216570c(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x1c2;
    func_020264f4(p);
    return func_020255a4(p);
}
