#include "ctx.h"

extern u8 *data_02159034;

void func_0209401c(s32 x)
{
    u8 *s = data_02159034;
    u8 *iv = *(u8 **)(s + 0x1000 + 0x41c);
    u8 *t = iv + 96;
    s32 v;
    if (*(s32 *)(t + 0x18) == x) {
        return;
    }
    *(s32 *)(t + 0x18) = x;
    v = *(s32 *)(t + 0x18);
    if (v <= 99999999) {
        goto H;
    }
    *(s32 *)(t + 0x18) = 99999999;
H:
    *(u16 *)(iv + 0x600 + 0xae) = *(u16 *)(iv + 0x600 + 0xae) | 1;
}
