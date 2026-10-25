#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;

void func_02020768(u8 *p)
{
    u8 *s = data_02159444;
    s32 i = *(s16 *)(s + 0x7a);
    u32 v;
    u8 *o;
    if (i < 0) {
        goto zero;
    }
    o = data_02159468;
    if (*(s16 *)(o + 0x20) > i) {
        goto load;
    }
zero:
    v = 0;
    goto have;
load:
    v = *(u32 *)(o + i * 4 + 4);
have:
    if (v != 0) {
        if (*(s8 *)(p + 0x88) == *(s16 *)(v + 0x98)) {
            *(s16 *)(p + 0x156) = 1;
        }
    }
}
