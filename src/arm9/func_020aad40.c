#pragma avoid_byte strb
#include "ctx.h"

void func_020aad40(u8 *o, s32 idx)
{
    s16 i;
    u8 *e;
    s16 s;
    s16 *slot;
    e = o + idx * 2;
    if (*(s16 *)(e + 198) == -1) {
        return;
    }
    i = 0;
    do {
        slot = (s16 *)((u32)o + ((u32)i << 1));
        s = slot[99];
        if (s > *(s16 *)(e + 198)) {
            slot[99] = s - 1;
        }
        i++;
    } while (i < 3);
    *(s16 *)(o + 204) = *(s16 *)(o + 204) - 1;
    ((s16 *)o + idx)[99] = -1;
}
