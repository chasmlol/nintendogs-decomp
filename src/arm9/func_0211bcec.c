#include "ctx.h"

typedef struct { u32 w[8]; } E8;

extern E8 data_0214b3a4[];

s32 func_0211bcec(E8 *out, u32 unused, u16 mask)
{
    E8 *e = data_0214b3a4;
    s32 n = 0;
    s16 s = *(s16 *)((u8 *)e + 4);
    u16 flags;
    s32 take;
    while (s != -1) {
        flags = *(u16 *)((u8 *)e + 0x14);
        take = 0;
        if (flags & mask) {
            if (flags & 0x38) {
                take = *(s16 *)((u8 *)e + 0x16) != 0;
            } else {
                take = 1;
            }
        }
        if (take) {
            *out = *e;
            out = out + 1;
            n = n + 1;
        }
        e = e + 1;
        s = *(s16 *)((u8 *)e + 4);
    }
    return n;
}
