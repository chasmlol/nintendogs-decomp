#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_020256fc(u8 *p);

u8 func_02059884(u8 *p)
{
    *(u16 *)(p + 0x152) = 0xe5;
    func_02026c24(p);
    return func_020256fc(p);
}
