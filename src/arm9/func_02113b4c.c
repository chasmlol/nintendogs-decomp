#include "ctx.h"

void func_02113ba8(void);
void func_020fc594(u32 a, u32 b, u32 c);

void func_02113b4c(void)
{
    u16 *p;
    func_02113ba8();
    func_020fc594(2, 8, 1);
    p = (u16 *)0x0400100e;
    *(u32 *)0x0400101c = 0;
    *p = (u16)(*p & ~0x40);
    *p = (u16)((*p & ~3) | 1);
}
