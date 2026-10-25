#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_propagation off
#pragma opt_loop_invariants off

typedef struct { u32 a; u32 flags; u32 c; } E12;
typedef struct { u8 pad0[8]; s32 count; u8 pad0c[4]; E12 *arr; } Sub;
typedef struct { u8 pad0[24]; Sub sub; u8 rest[440 - 24 - 20]; } Rec;
typedef struct { u32 x0; Rec recs[25]; } Mgr;

extern Mgr *data_0215be4c;

void func_021017d4(u32 param_1, s32 idx, s32 pal)
{
    Rec *recs = data_0215be4c->recs;
    s32 i;
    Sub *s;
    u32 off;

    if (pal < 0 || pal > 15)
        return;
    if (idx < 0 || idx > 24)
        return;
    s = &recs[idx].sub;
    i = 0;
    if (s->count <= 0)
        return;
    off = 0;
    do {
        E12 *e = (E12 *)((u8 *)s->arr + off);

        i++;
        e->flags = (e->flags & ~0xf000) | ((pal & 15) << 12);
        off += 12;
    } while (i < s->count);
}
