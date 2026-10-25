#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; u32 pad[2]; void *data; } E24;
typedef struct { u32 count; u8 pad[144]; E24 e[1]; } Tbl;
extern E24 *data_0215ae00;
extern void func_0206c9b8(void *dst, void *src, u32 size);

void func_020dd2d0(Tbl **pp, u32 idx)
{
    Tbl *t;
    E24 *g;
    E24 *e;

    if (pp == 0)
        return;
    t = *pp;
    if (t == 0)
        return;
    if (idx >= t->count)
        return;
    g = data_0215ae00;
    e = &t->e[idx];
    func_0206c9b8(g->data, e->data, 316);
    e->a = g->a;
    e->b = g->b;
    e->c = g->c;
}
