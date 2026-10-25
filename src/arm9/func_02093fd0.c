#include "ctx.h"

extern u8 *data_02159034;

void func_02093fd0(s32 param_1)
{
    u8 *s;
    u8 *a;
    u8 *b;
    s32 v;
    u32 w;
    s = data_02159034;
    s = s + 0x1000;
    a = *(u8 **)(s + 0x41c);
    b = a + 96;
    v = *(s32 *)(b + 0x18) + param_1;
    *(s32 *)(b + 0x18) = v;
    if (*(s32 *)(b + 0x18) > 0x05f5e0ff) {
        *(s32 *)(b + 0x18) = 0x05f5e0ff;
    }
    w = *(u16 *)(a + 1536 + 174);
    *(u16 *)(a + 1536 + 174) = w | 1;
}
