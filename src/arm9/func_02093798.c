#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159034;

void func_02093798(s32 param_1)
{
    u8 *b;
    u8 *q;
    u8 *t;

    b = *(u8 **)((u8 *)data_02159034 + 0x1000 + 0x41c);
    q = b + 96;
    if (param_1 <= *(s8 *)(q + 42)) {
        return;
    }
    t = q + 42;
    *(u8 *)(t) = (u8)(param_1);
    *(u16 *)(b + 0x600 + 174) = *(u16 *)(b + 0x600 + 174) | 1;
}
