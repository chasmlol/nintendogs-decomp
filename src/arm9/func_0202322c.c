#include "ctx.h"

extern u32 data_0213a8d4[];
extern u8 data_021369a8[][5];

typedef struct {
    u16 a;
    u16 b;
} Ent;

typedef struct {
    u8 pad0[0x13];
    u8 lvl;
} Base;

typedef struct {
    u8 pad[0x940];
    u32 m0;
    u32 m1;
    u8 pad2[0x9e8 - 0x948];
    Base *base;
} Obj;

static inline Ent *GetEnt(Obj *o, s16 i)
{
    if (i < 0 || i >= 20) {
        return 0;
    }
    return (Ent *)((u8 *)o->base + 144 + i * 60);
}

static inline s32 Sel(Obj *o, Ent *e)
{
    u8 *ent;
    u32 a;
    if (e == 0) {
        return 0;
    }
    a = e->a;
    if (a == 0) {
        return 0;
    }
    if (e->b == 0) {
        return 0;
    }
    if (a >= 79 && a < 99) {
        ent = (u8 *)*(vu32 *)&data_0213a8d4[79];
    } else {
        ent = (u8 *)*(vu32 *)&data_0213a8d4[a];
    }
    if (e->b < data_021369a8[ent[2] - 1][o->base->lvl - 1]) {
        return 1;
    }
    return 2;
}

void func_0202322c(Obj *o)
{
    s16 i;
    o->m0 = 0;
    o->m1 = 0;
    i = 0;
    do {
        Ent *e = GetEnt(o, i);
        if (Sel(o, e) == 2) {
            if (e->a == 1) {
                o->m0 |= 1 << i;
            }
            o->m1 |= 1 << i;
        }
        i = i + 1;
    } while (i < 20);
}
