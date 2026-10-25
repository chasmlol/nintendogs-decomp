#pragma avoid_byte strb
#include "ctx.h"
typedef struct { u32 x, y, z; } Vec;
extern void func_020bd868(u8 *p);
extern void func_020bd858(u8 *p);

void func_020e5df4(u8 *p)
{
    u8 *o;
    u32 v;
    Vec *s;
    switch (*(s16 *)(p + 0x90)) {
    case 0:
        *(u16 *)(p + 0x20) |= 1;
        o = *(u8 **)(p + 0x18c);
        if (o != 0)
            *(u16 *)(o + 0x20) |= 1;
        return;
    case 2:
        *(u32 *)(*(u8 **)(p + 0x214) + 0x14) = 0;
        if (*(s16 *)(p + 0x88) == 0) {
            func_020bd868(p);
            return;
        }
        func_020bd858(p);
        *(u16 *)(*(u8 **)(p + 0x18c) + 0x20) |= 1;
        o = *(u8 **)(p + 0x18c);
        v = *(u32 *)(p + 0xac);
        s = (Vec *)(o + 0x24);
        s->x = v;
        s->y = v;
        s->z = v;
        return;
    case 1:
        *(u32 *)(*(u8 **)(p + 0x214) + 0x14) = 4800;
        *(u16 *)(p + 0xa6) = 2;
        *(u32 *)(p + 0xa8) = 8192000;
        *(u16 *)(*(u8 **)(p + 0x18c) + 0x20) &= ~1;
        *(*(u8 **)(p + 0x18c) + 1) &= ~1;
        return;
    case 3:
        break;
    }
}
