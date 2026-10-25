#include "ctx.h"
extern void func_020266f8(u8 *p);
extern u8 func_02025bb0(u8 *p);
u8 func_0205a2ec(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x11;
    func_020266f8(p);
    return func_02025bb0(p);
}
