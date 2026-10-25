#include "ctx.h"

extern u16 func_0207d224(u8 *p);
extern s32 func_0207d238(u8 *p);

void func_02003980(u8 *p, u32 unused, u16 *q)
{
    u16 v = func_0207d224(p);
    if (*q == v) {
        s32 d = func_0207d238(p);
        *(s32 *)(q + 2) = *(s32 *)(q + 2) + d;
    }
}
