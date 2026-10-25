#include "ctx.h"

void func_0207fe70(void *p, void *n)
{
    u32 *x;
    u32 *q;
    q = (u32 *)n;
    x = (u32 *)p;
    {
        u32 cur = *(u32 *)((u8 *)p + 0x80);
        if (cur == 0) {
            *(u32 *)((u8 *)p + 0x7c) = (u32)n;
        } else {
            *(u32 *)((u8 *)(cur) + 0x10) = (u32)n;
        }
        *(u32 *)((u8 *)n + 0xc) = cur;
        *(u32 *)((u8 *)n + 0x10) = 0;
        *(u32 *)((u8 *)p + 0x80) = (u32)n;
    }
}
