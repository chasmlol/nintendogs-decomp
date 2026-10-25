#pragma avoid_byte strb
#include "ctx.h"

void func_020054ec(void *p, u8 a, u8 b)
{
    vu8 *t;
    vu8 *u;
    u8 old;
    t = (vu8 *)(*(u32 *)((u8 *)p + 0x74) + 2);
    *(u8 *)(t) = (u8)(a);
    u = (vu8 *)(*(u32 *)((u8 *)p + 0x74) + 3);
    *(u8 *)(u) = (u8)(b);
    return;
}
