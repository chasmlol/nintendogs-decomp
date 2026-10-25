#include "ctx.h"

typedef struct { s32 count; u8 pad4[6]; u16 used; u8 padc[12]; void *slot[16]; } Pool;

s32 func_0209b878(Pool *p)
{
    s16 i;
    u16 mask;

    for (i = 0; i < p->count; i++) {
        mask = 1 << i;
        if (p->slot[i] == 0 && (p->used & mask) == 0) {
            p->used |= mask;
            return i;
        }
    }
    return -1;
}
