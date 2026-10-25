#include "ctx.h"

extern u32 data_0215942c;

typedef struct { u16 fl; s16 idx; s32 a; s32 b; s32 c; s32 d; } Ent;
typedef struct { u8 pad0[4]; u16 st; u8 pad1[8]; s16 cur; u8 pad2[12]; s16 nxt; u8 pad3[2]; Ent ent[3]; } G;

void func_020a85c4(u8 *p, s32 v);

void func_020a7b70(u16 param_1, s32 param_2)
{
    s16 sVar1;
    G *g;
    Ent *e;

    g = *(G **)&data_0215942c;
    func_020a85c4((u8 *)g, 11);
    g->st = 5;
    g->cur = param_1;
    sVar1 = g->cur;
    e = &(*(G **)&data_0215942c)->ent[sVar1];
    e->fl |= 1;
    e->idx = sVar1;
    sVar1 = (s16)((g->cur + 1) % 3);
    e = &(*(G **)&data_0215942c)->ent[sVar1];
    e->fl |= 1;
    e->fl |= 2;
    e->a = param_2;
    e->b = param_2 + 0x85c;
    e->c = param_2 + 0x210c;
    g->nxt = sVar1;
}
