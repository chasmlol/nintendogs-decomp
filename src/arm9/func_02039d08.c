#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_common_subs off
#pragma opt_loop_invariants off

typedef struct {
    u16 kind;
    u16 cnt;
    u8 pad[56];
} Rec;

typedef struct {
    u8 pad00[0x13];
    u8 f13;
    u8 pad14[4];
    s16 param[18];
    s16 base[10];
    s16 cur[10];
    u8 pad64[0x72 - 0x64];
    u8 f72;
    u8 f73;
    u8 f74;
    u8 f75;
    u8 pad76[0x88 - 0x76];
    s16 f88;
    u8 pad8a[6];
    Rec rec[20];
    u8 pad540[0x7e8 - 0x540];
    u16 kinds[8];
} Stats;

typedef struct {
    u8 pad00[0x88];
    s8 slot;
    u8 pad89[4];
    u8 f8d;
    s8 f8e;
    u8 pad8f[0xd2 - 0x8f];
    u8 dirty;
    u8 padd3[0xea - 0xd3];
    s16 fea;
    u8 padec[0x10c - 0xec];
    u16 f10c;
    u8 pad10e[0x114 - 0x10e];
    s16 f114;
    u8 pad116[0x13e - 0x116];
    s16 f13e;
    u8 pad140[0x9e8 - 0x140];
    Stats *so;
} Dog;

typedef struct {
    u32 seed;
    u8 pad04[0x1c - 4];
    s8 flags[0x54 - 0x1c];
    Dog *dogs[3];
} Game;

typedef struct {
    s32 hour;
    s32 minute;
} Time;

typedef struct {
    u8 pad[0x2c];
    Time time;
} Clock;



typedef struct {
    u8 pad[0x94];
    s16 f94;
} Item;

typedef struct {
    u32 pad;
    Item *items[7];
    s16 count;
} ItemTab;

typedef struct {
    s16 w[5];
} T5;

extern u16 *data_0215942c;
extern Clock *data_0214f130;
extern T5 data_0213b478;
extern ItemTab *data_02159468;
extern s8 data_02143be4[][12];
extern Game *data_0214f464;
extern u8 *data_0213a8d4[];
extern u8 data_021369a8[][5];

extern void func_02093a04(s32 a);
extern void func_0203e2c0(Dog *d, s32 a);
extern void func_02028f5c(Dog *d, s16 a, s32 b);

static inline s16 GetParam(Dog *p, s16 id)
{
    return p->so->param[id];
}

static inline void SetParam(Dog *p, s16 id, s16 v)
{
    p->dirty = 1;
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    p->so->param[id] = v;
}

static inline void SetCur(Dog *p, s16 i, s32 v)
{
    s16 b;
    Stats *so;
    p->dirty = 1;
    so = p->so;
    b = so->base[i];
    if (v < b - 5000) {
        v = b - 5000;
    }
    if (v > b + 5000) {
        v = b + 5000;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    so->cur[i] = v;
}

static inline void AddCur(Dog *p, Item *e, s16 i, s32 *pv)
{
    s32 lo, hi;
    s16 b;
    Stats *so;
    s16 k;
    *pv = data_02143be4[e->f94][i] + p->so->cur[i];
    k = i;
    p->dirty = 1;
    so = p->so;
    b = so->base[k];
    lo = b - 5000;
    hi = b + 5000;
    if (*pv < lo) {
        *pv = lo;
    }
    if (*pv > hi) {
        *pv = hi;
    }
    if (*pv < 0) {
        *pv = 0;
    }
    if (*pv > 10000) {
        *pv = 10000;
    }
    so->cur[k] = *pv;
}

static inline Rec *GetRec(Stats *so, s16 i)
{
    if (i < 0 || i >= 20) {
        return NULL;
    }
    return &so->rec[i];
}

static inline Rec *GetRecD(Dog *d, s16 i)
{
    if (i < 0 || i >= 20) {
        return NULL;
    }
    return &d->so->rec[i];
}

static inline s32 RecState(Stats *so, Rec *r, u8 *def)
{
    u16 kind;
    u16 cnt;
    u8 *sp;
    if (r == NULL) {
        return 0;
    }
    kind = r->kind;
    if (kind == 0) {
        return 0;
    }
    cnt = r->cnt;
    if (cnt == 0) {
        return 0;
    }
    if (kind >= 79 && kind < 99) {
        sp = def;
    } else {
        sp = data_0213a8d4[kind];
    }
    if (cnt < data_021369a8[sp[2] - 1][so->f13 - 1]) {
        return 1;
    }
    return 2;
}

static inline s32 RecStateD(Dog *d, Rec *r, u8 *def)
{
    u16 kind;
    u16 cnt;
    u8 *sp;
    if (r == NULL) {
        return 0;
    }
    kind = r->kind;
    if (kind == 0) {
        return 0;
    }
    cnt = r->cnt;
    if (cnt == 0) {
        return 0;
    }
    if (kind >= 79 && kind < 99) {
        sp = def;
    } else {
        sp = data_0213a8d4[kind];
    }
    if (cnt < data_021369a8[sp[2] - 1][d->so->f13 - 1]) {
        return 1;
    }
    return 2;
}

static inline BOOL HasRec(Stats *so, u16 kind, u8 *def)
{
    s16 i;
    for (i = 0; i < 20; i++) {
        Rec *r = GetRec(so, i);
        if (RecState(so, r, def) == 2 && r->kind == kind) {
            return TRUE;
        }
    }
    return FALSE;
}

static inline BOOL HasRecD(Dog *d, u16 kind, u8 *def)
{
    s16 i;
    for (i = 0; i < 20; i++) {
        Rec *r = GetRecD(d, i);
        if (RecStateD(d, r, def) == 2 && r->kind == kind) {
            return TRUE;
        }
    }
    return FALSE;
}

static inline BOOL HasRecE(Dog *d, u16 kind)
{
    s16 i;
    Rec *r;
    u8 *def;
    i = 0;
    def = data_0213a8d4[79];
    for (; i < 20; i++) {
        if (i < 0 || i >= 20) {
            r = NULL;
        } else {
            r = &d->so->rec[i];
        }
        if (RecStateD(d, r, def) == 2 && r->kind == kind) {
            return TRUE;
        }
    }
    return FALSE;
}

static inline u16 RandMax(u32 n)
{
    u32 *sp = &data_0214f464->seed;
    u32 v = *sp;
    v = v * 0x10dcd + 1;
    *sp = v;
    return (u16)(((u32)(u16)v * n) >> 16);
}

static inline Dog *GetDog(s16 i)
{
    if (i < 0 || i >= 3) {
        return NULL;
    }
    return data_0214f464->dogs[i];
}

static inline Item *GetItem(s16 i)
{
    if (i < 0 || data_02159468->count <= i) {
        return NULL;
    }
    return data_02159468->items[i];
}

static inline s16 CurAt(Stats *so, s16 i)
{
    return so->cur[i];
}

static inline BOOL IsFull(Dog *p)
{
    if (GetParam(p, 3) >= 10000) {
        return TRUE;
    }
    if (GetParam(p, 4) >= 10000) {
        return TRUE;
    }
    return FALSE;
}

static inline void GetHM(Time *t, Stats *so, s16 *h, s16 *m)
{
    *h = t->hour - so->f75;
    *m = so->f74;
    *m = t->minute - *m;
}

static inline s16 Elapsed(Time *t, Stats *so)
{
    s16 h, m;
    h = t->hour - so->f75;
    m = t->minute - so->f74;
    if (m < 0) {
        m += 60;
        h--;
    }
    if (h < 0) {
        h += 24;
    }
    return h * 60 + m;
}

#define HASREC(GETREC, F13, KIND, RES, L)     for (j = 0; j < 20; j++) {         if (j < 0 || j >= 20) {             r = NULL;         } else {             r = GETREC;         }         if (r == NULL) {             state = 0;         } else if ((kind = r->kind) == 0) {             state = 0;         } else if ((cnt = r->cnt) == 0) {             state = 0;         } else {             if (kind >= 79 && kind < 99) {                 sp = def;             } else {                 sp = data_0213a8d4[kind];             }             if (cnt < data_021369a8[sp[2] - 1][F13 - 1]) {                 state = 1;             } else {                 state = 2;             }         }         if (state == 2 && r->kind == (KIND)) {             RES = TRUE;             goto L;         }     }     RES = FALSE; L:

void func_02039d08(Dog *p)
{
    Dog *other;
    s16 j;
    Rec *r;
    u16 uv;
    Stats *so;
    BOOL res;
    u16 kind;
    u16 cnt;
    u8 *def;
    u8 *sp;
    s32 state;

    SetParam(p, 3, GetParam(p, 3) + 8);
    SetParam(p, 4, GetParam(p, 4) + 8);

    switch (*data_0215942c) {
    case 3:
    case 10:
        SetParam(p, 7, GetParam(p, 7) - 50);
        break;
    case 7:
        SetParam(p, 7, GetParam(p, 7) - 10);
        break;
    case 8:
    case 16:
        break;
    default:
        SetParam(p, 7, GetParam(p, 7) - 1);
        break;
    }

    {
        Time *t = &data_0214f130->time;
        Stats *so = p->so;
        s16 h, m;
        T5 tab;
        GetHM(t, so, &h, &m);
        tab = data_0213b478;
        if (m < 0) {
            m += 60;
            h--;
        }
        if (h < 0) {
            h += 24;
        }
        if ((s16)(h * 60 + m) < tab.w[p->f8e]) {
            SetParam(p, 2, so->param[2] + 1000);
        } else {
            SetParam(p, 2, so->param[2] + 100);
        }
    }

    {
        if (IsFull(p)) {
        Stats *so;
        s16 v;
        p->dirty = 1;
        so = p->so;
        v = so->f88 + 3;
        if (v < 0) {
            so->f88 = 0;
            if (so->f88 < 0) {
                so->f88 = 0;
            } else if (so->f88 > 10000) {
                so->f88 = 10000;
            }
        } else if (v >= 10000) {
            so->f88 = 10000;
            if (so->f88 < 0) {
                so->f88 = 0;
            } else if (so->f88 > 10000) {
                so->f88 = 10000;
            }
        } else {
            so->f88 = v;
            if (so->f88 < 0) {
                so->f88 = 0;
            } else if (so->f88 > 10000) {
                so->f88 = 10000;
            }
        }
    }

    }

    p->f114++;
    if (p->f114 >= 60) {
        s16 i;
        p->f114 = 0;
        for (i = 0; i < 6; i++) {
            s16 v;
            s32 id = i + 8;
            v = GetParam(p, id);
            if (v > 2500) {
                v -= 6;
                if (v < 2500) {
                    v = 2500;
                }
                SetParam(p, id, v);
            }
        }
        for (i = 0; i < 4; i++) {
            s16 v;
            s32 id = i + 14;
            v = GetParam(p, id);
            if (v > 2500) {
                v -= 6;
                if (v < 2500) {
                    v = 2500;
                }
                SetParam(p, id, v);
            }
        }
        for (i = 0; i < 20; i++) {
            Rec *r = GetRecD(p, i);
            if (r != NULL && (s16)r->cnt > 2500) {
                s16 v = (s16)r->cnt - 6;
                if (v < 2500) {
                    v = 2500;
                }
                p->dirty = 1;
                r->cnt = v;
            }
        }
        if (p->so->f88 >= 10000 && data_0214f464->flags[p->slot] == 0) {
            func_02093a04(-2);
        }
        if (GetParam(p, 7) <= 0 && data_0214f464->flags[p->slot] == 0) {
            func_02093a04(-1);
        }
    }

    {
        Item *e = GetItem(p->f13e - 3);
        if (e != NULL) {
            s32 i;
            for (i = 0; i < 5; i = (s16)(i + 1)) {
                s32 v;
                AddCur(p, e, i, &v);
            }
            for (i = 0; i < 4; i = (s16)(i + 1)) {
                s32 v;
                AddCur(p, e, i + 5, &v);
            }
            func_0203e2c0(p, 0);
        }
    }

    {
        Stats *so = p->so;
        s32 j;
        s32 bi = 0;
        s16 best = 0;
        for (j = 0; j < 5; j = (s8)(j + 1)) {
            s16 c = CurAt(so, j);
            if (best <= c) {
                best = c;
                bi = j;
            }
        }
        p->f8e = bi;
        p->f8d = p->f8e;
    }

    switch (p->so->f72) {
    case 0:
    case 1:
    case 2:
        if (p->f8e != 3 && p->f8e != 4) {
            p->f8d = 5;
        } else {
            p->f8d = 7;
        }
        break;
    case 3:
    case 4:
        if (p->f8e != 3 && p->f8e != 4) {
            p->f8d = 6;
        } else {
            p->f8d = 8;
        }
        break;
    }

    if (p->fea >= 944 && p->fea <= 951) {
        SetParam(p, 11, GetParam(p, 11) + 50);
    }

    if (p->f10c != 0) {
        p->f10c--;
    }

    {
        u16 st = *data_0215942c;
        if (st == 11) {
            s16 n;
            s8 slot = p->slot;
            Game *g = data_0214f464;
            s16 i;
            u16 pick;
            for (n = 0; n < 3; n++) {
                if (n != slot) {
                    if (n < 0 || n >= 3) {
                        other = NULL;
                    } else {
                        other = g->dogs[n];
                    }
                    if (other != NULL) {
                        goto found;
                    }
                }
            }
            other = NULL;
        found:
            if (g->flags[p->slot] == 0) {
                return;
            }
            if (other == NULL) {
                return;
            }
            pick = 0;
            for (i = 0; i < 8; i++) {
                so = p->so;
                uv = so->kinds[i];
                if (uv != 0 && uv < 99) {
                    def = data_0213a8d4[79];
                    HASREC(&so->rec[j], so->f13, uv, res, h1)
                    if (res) {
                        HASREC(&other->so->rec[j], other->so->f13, uv, res, h2)
                        if (!res) {
                            pick = uv;
                            if (RandMax(2) != 0) {
                                break;
                            }
                        }
                    }
                }
            }
            if (pick == 0) {
                return;
            }
            func_02028f5c(p, pick + 12, 1);
        } else if (st == 0) {
            s16 i;
            u16 pick;
            if (RandMax(10) != 0) {
                return;
            }
            pick = 0;
            {
            s16 j;
            Rec *r;
            u16 uv;
            u8 *def;
            Stats *so;
            BOOL res;
            u16 kind;
            u16 cnt;
            u8 *sp;
            s32 state;
            for (i = 0; i < 8; i++) {
                so = p->so;
                uv = so->kinds[i];
                if (uv != 0 && uv < 99) {
                    def = data_0213a8d4[79];
                    HASREC(&so->rec[j], so->f13, uv, res, h3)
                    if (!res) {
                        pick = uv;
                        if (RandMax(2) != 0) {
                            break;
                        }
                    }
                }
            }
            }
            if (pick != 0) {
                func_02028f5c(p, pick + 12, 1);
                return;
            }
            {
            s16 j;
            Rec *r;
            u16 uv;
            u8 *def;
            BOOL res;
            u16 kind;
            u16 cnt;
            u8 *sp;
            s32 state;
            for (uv = 79; uv < 99; uv++) {
                def = data_0213a8d4[79];
                HASREC(&p->so->rec[j], p->so->f13, uv, res, hx1)
                if (res) {
                    if (RandMax(2) != 0) {
                        break;
                    }
                }
            }
            if (HasRecE(p, uv)) {
                func_02028f5c(p, uv + 12, 3);
            }
            }
        }
    }
}

