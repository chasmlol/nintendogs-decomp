#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_02165008(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x1a8;
    func_020264f4(p);
    return func_020255a4(p);
}
