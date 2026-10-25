#include "ctx.h"

extern void func_0211392c(u32 *p);
extern void func_020fc594(u32 a, u32 b, u32 c);

void func_021138d0(u32 *p)
{
    func_0211392c(p);
    func_020fc594(2, 8, 1);
    *(u32 *)0x0400101c = 0;
    *(u16 *)0x0400100e = *(u16 *)0x0400100e & ~0x40u;
    *(u16 *)0x0400100e = (*(u16 *)0x0400100e & ~3u) | 1;
    p[0] = 0;
}
