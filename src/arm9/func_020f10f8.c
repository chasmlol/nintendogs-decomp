#include "ctx.h"

extern void func_020c79b8(u8 *p, u32 v, u32 w);

void func_020f10f8(u8 *p, u32 v)
{
    u8 *a = *(u8 **)(p + 0x214);
    u8 *b = *(u8 **)a;
    func_020c79b8(p, v, *(u32 *)(b + 0xc));
}
