#include "ctx.h"

extern void func_020c7434(u8 *p, u32 v, u32 w, u32 z);

void func_020f10a8(u8 *p, u32 v)
{
    u8 *a = *(u8 **)(p + 0x214);
    u8 *b = *(u8 **)a;
    func_020c7434(p, v, *(u32 *)(b + 8), 0);
}
