#pragma avoid_byte strb
#include "ctx.h"

extern s64 func_0205e0c0(s64 a, s64 b);

typedef struct {
    s16 v[5];
} Lim5;

typedef struct {
    u16 f0;
    s16 val;
    u8 pad04[60 - 4];
} Item;

typedef struct {
    u8 pad00[0x18];
    s16 p[46];
    u8 pad74;
    u8 pad74b;
    u8 pad76[0x88 - 0x76];
    s16 p88;
    u8 pad8a[0x90 - 0x8a];
    Item items[20];
} Stat;

typedef struct {
    u8 pad00[0x8e];
    s8 type;
    u8 pad8f[0xd2 - 0x8f];
    u8 dirty;
    u8 padd3[0x9e8 - 0xd3];
    Stat *st;
} Dog;

typedef struct {
    s32 hour;
    s32 minute;
} Clock;

typedef struct {
    u8 pad00[0x2c];
    Clock clock;
} Sys;

extern Lim5 data_0213b478;
extern Sys *data_0214f130;

static inline s64 ClampD(s64 delta)
{
    if (delta < -20000) {
        delta = -20000;
    }
    if (delta > 20000) {
        delta = 20000;
    }
    return delta;
}

static inline void AddRaw(Dog *d, s32 idx, s64 delta)
{
    s16 v = d->st->p[idx] + (s16)delta;
    d->dirty = 1;
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    d->st->p[idx] = v;
}

static inline void AddParam(Dog *d, s32 idx, s64 delta)
{
    AddRaw(d, idx, ClampD(delta));
}
static inline void AddParamX(Dog *d, s32 idx, s64 delta)
{
    s16 v;
    if (delta < -20000) {
        delta = -20000;
    }
    if (delta > 20000) {
        delta = 20000;
    }
    v = d->st->p[idx] + (s16)delta;
    d->dirty = 1;
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    d->st->p[idx] = v;
}

static inline void DecParam(Dog *d, s32 idx, s64 amt)
{
    s16 v = d->st->p[(s16)idx];
    if (v > 2500) {
        s16 nv;
        if (amt > 7500) {
            nv = 2500;
        } else {
            nv = v;
            nv -= amt;
        }
        d->dirty = 1;
        if (nv < 2500) {
            nv = 2500;
        }
        if (nv < 0) {
            nv = 0;
        }
        if (nv > 10000) {
            nv = 10000;
        }
        *(s16 *)((u8 *)d->st->p + ((idx << 16) >> 15)) = nv;
    }
}

static inline void SetP88(Stat *st, s16 v)
{
    st->p88 = v;
    if (st->p88 < 0) {
        st->p88 = 0;
    } else if (st->p88 > 10000) {
        st->p88 = 10000;
    }
}

static inline Item *GetItem(Dog *d, s16 i)
{
    if (i < 0 || i >= 20) {
        return NULL;
    }
    return &d->st->items[(s16)i];
}

void func_0204160c(Dog *d, s64 secs)
{
    s64 mins;
    s64 hours;
    s16 dh;
    s16 dm;
    Lim5 lim;
    s32 a;
    s32 b;
    s16 i;
    Clock *c;
    s16 v;

    mins = func_0205e0c0(secs, 60);
    hours = func_0205e0c0(mins, 60);
    c = &data_0214f130->clock;
    dh = (s16)(c->hour - ((u8 *)d->st)[0x75]);
    dm = (s16)(c->minute - ((u8 *)d->st)[0x74]);
    lim = data_0213b478;
    if (dm < 0) {
        dm += 60;
        dh--;
    }
    if (dh < 0) {
        dh += 24;
    }
    dm += dh * 60;
    if (dm < lim.v[d->type]) {
        d->dirty = 1;
        d->st->p[2] = 10000;
    }
    AddParam(d, 7, -mins);
    {
        s64 t = ClampD(mins << 3);
        a = (10000 - d->st->p[3]) / 8;
        v = d->st->p[3] + (s16)t;
        d->dirty = 1;
        if (v < 0) {
            v = 0;
        }
        if (v > 10000) {
            v = 10000;
        }
        d->st->p[3] = v;
    }
    {
        s64 t = ClampD(mins << 3);
        b = (10000 - d->st->p[4]) / 8;
        v = d->st->p[4] + (s16)t;
        d->dirty = 1;
        if (v < 0) {
            v = 0;
        }
        if (v > 10000) {
            v = 10000;
        }
        d->st->p[4] = v;
    }
    AddParam(d, 6, secs << 2);
    if (a < mins || b < mins) {
        s64 t;
        if (a < b) {
            t = (mins - a) * 3;
        } else {
            t = (mins - b) * 3;
        }
        if (t < 0) {
            t = 0;
        }
        if (t > 20000) {
            t = 20000;
        }
        d->dirty = 1;
        {
            Stat *st = d->st;
            v = st->p88 + (s16)t;
            if (v < 0) {
                SetP88(st, 0);
            } else if (v >= 10000) {
                SetP88(st, 10000);
            } else {
                SetP88(st, v);
            }
        }
    }
    hours *= 6;
    for (i = 0; i < 6; i++) {
        DecParam(d, i + 8, hours);
    }
    for (i = 0; i < 4; i++) {
        DecParam(d, i + 14, hours);
    }
    for (i = 0; i < 20; i++) {
        Item *it = GetItem(d, i);
        if (it != NULL && it->val > 2500) {
            s16 nv;
            if (hours > 7500) {
                nv = 2500;
            } else {
                nv = it->val - hours;
            }
            d->dirty = 1;
            if (nv < 2500) {
                nv = 2500;
            }
            it->val = nv;
        }
    }
}
