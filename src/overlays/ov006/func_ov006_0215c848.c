#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    VecFx32 pos;            /* 0x00 */
    u8 pad0c[0x24 - 0x0c];
    u32 flag;               /* 0x24 */
    u8 pad28[0x44 - 0x28];
} Cell;

typedef struct {
    s16 start;              /* 0x00 */
    s16 n;                  /* 0x02 */
    u8 pad04[0x24 - 0x04];
} Path;

typedef struct {
    u8 pad00[0x18];
    Path *paths;            /* 0x18 */
    Cell *cells;            /* 0x1c */
} Mgr;

typedef struct {
    u8 pad00[0x2c];
    s32 id;                 /* 0x2c */
    void *list;             /* 0x30 */
    s32 dir;                /* 0x34 */
} Ctl;

typedef struct {
    u8 pad00[4];
    u16 angle;              /* 0x04 */
    u8 pad06[2];
    VecFx32 pos;            /* 0x08 */
    u8 pad14[0x20 - 0x14];
    s32 path;               /* 0x20 */
} Rec;

typedef struct {
    u32 seed;               /* 0x00 */
    u8 pad04[0x2c - 0x04];
    s16 count;              /* 0x2c */
    s16 mode;               /* 0x2e */
    u8 pad30[0x74 - 0x30];
    VecFx32 target;         /* 0x74 */
} Rng;

typedef struct {
    u8 pad00[0x30];
    VecFx32 pos;            /* 0x30 */
} Ani;

typedef struct {
    u8 pad00[0x1c];
    Ani *ani;               /* 0x1c */
    u8 pad20[0x84 - 0x20];
    u16 flags;              /* 0x84 */
} Flg;

typedef struct {
    u8 pad000[0x97];
    u8 b97;                 /* 0x097 */
    u8 pad098[0xfc - 0x98];
    u16 ufc;                /* 0x0fc */
    u8 pad0fe[0x148 - 0xfe];
    s16 s148;               /* 0x148 */
    u8 pad14a[0x26c - 0x14a];
    VecFx32 v26c;           /* 0x26c */
    VecFx32 v278;           /* 0x278 */
    u8 pad284[0x2a0 - 0x284];
    VecFx32 v2a0;           /* 0x2a0 */
    u8 pad2ac[0x2b8 - 0x2ac];
    VecFx32 v2b8;           /* 0x2b8 */
    u8 pad2c4[0x3b4 - 0x2c4];
    VecFx32 v3b4;           /* 0x3b4 */
    u8 pad3c0[0x464 - 0x3c0];
    s32 c464;               /* 0x464 */
    s32 c468;               /* 0x468 */
    s32 state;              /* 0x46c */
    u32 mask;               /* 0x470 */
    s32 last;               /* 0x474 */
} Obj;

extern Mgr *data_0214f45c;
extern void *data_0214f460;
extern Rng *data_0214f464;
extern Flg *data_02159444;
extern const fx16 data_02126868[];

extern s32 func_02027e4c(Obj *o, s32 a);
extern Ctl *func_020364a8(Obj *o);
extern Rec *func_0200c498(void *list, s16 id);
extern void func_0203e8cc(Obj *o, s32 a, s32 b);
extern void func_020266f8(Obj *o);
extern fx32 func_02028124(Obj *o);
extern s32 func_02038834(Obj *o, s32 a);
extern s32 func_02036f38(Obj *o, s32 a, s32 b);
extern BOOL func_0200b280(VecFx32 *a, VecFx32 *b, fx16 s, fx16 c, fx32 w, fx32 d);
extern void func_02026c24(Obj *o);
extern BOOL func_020aaf38(void *w, Cell *c, fx32 r);
extern BOOL func_0200b4d0(VecFx32 *a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
extern void func_02067e34(VecFx32 *a, VecFx32 *b, VecFx32 *out);
extern void func_02027de8(Obj *o, s32 a, s32 b);
extern void func_02029504(Obj *o);
extern u32 func_ov006_021607d0(Obj *o, Ctl *c, s32 a, s32 b);
extern void func_ov006_02161344(Obj *o);
extern void func_02037450(Obj *o, s32 a);
extern void func_02038128(Obj *o, s32 a);
extern void func_021089b8(s32 a);

#define FX_Mul(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))

static inline fx16 FX_SinIdx(int idx)
{
    return data_02126868[(idx >> 4) * 2];
}

static inline fx16 FX_CosIdx(int idx)
{
    return data_02126868[(idx >> 4) * 2 + 1];
}

static inline u16 Rand(u16 max)
{
    u32 s = data_0214f464->seed * 0x10dcd + 1;
    data_0214f464->seed = s;
    return (u16)(((u16)s * (u32)max) >> 16);
}

static inline Cell *GetCell(Ctl *ctl, const Path *path, s16 idx)
{
    Cell *c;
    if (idx < 0) {
        idx = 0;
    }
    if (idx >= path->n) {
        idx = path->n - 1;
    }
    if (ctl->dir == 0) {
        c = &data_0214f45c->cells[(s16)(path->start + idx)];
    } else if (ctl->dir == 1) {
        c = &data_0214f45c->cells[(s16)(path->start + path->n - 1 - idx)];
    }
    return c;
}

void func_ov006_0215c848(Obj *o)
{
    BOOL done;
    BOOL lost;
    s32 dist;
    Ctl *ctl;
    Rec *rec;
    Path *path;
    BOOL ok;

    done = FALSE;
    lost = done;
    dist = func_02027e4c(o, 3);
    ctl = func_020364a8(o);
    if (ctl != NULL) {
        rec = func_0200c498(ctl->list, ctl->id);
        if (rec != NULL) {
            path = &data_0214f45c->paths[(s16)rec->path];
            if (path != NULL) {
                ok = TRUE;
                goto check;
            }
        }
    }
    ok = FALSE;
check:
    if (ok) {
        if (dist < 1000) {
            o->state = 1;
        }
        switch (o->state) {
        case 0: {
            Cell *c0;
            Cell *c1;
            Cell *c2;
            c0 = GetCell(ctl, path, o->c464);
            c1 = GetCell(ctl, path, o->c464 + 1);
            c2 = GetCell(ctl, path, ((const Path *)path)->n - 1);
            o->v3b4 = c2->pos;
            o->v26c = c0->pos;
            o->v278 = c1->pos;
            {
                fx32 spd = func_02028124(o);
                if (func_02036f38(o, 0x100, func_02038834(o, func_02027e4c(o, 3))) < FX_Mul(spd, 0x1000)) {
                    o->c464++;
                    if (o->c464 >= path->n) {
                        done = TRUE;
                    }
                }
            }
            if (o->c464 >= 3 && o->c464 < path->n - 3) {
                VecFx32 tgt = data_0214f464->target;
                if ((data_02159444->flags & 1) &&
                    !func_0200b280(&tgt, &rec->pos, FX_SinIdx(rec->angle), FX_CosIdx(rec->angle), 0xa000, 0x32000)) {
                    o->state = 1;
                } else if (Rand(100) == 0 &&
                           ((dist < 5000 && dist + 4000 < Rand(10000)) ||
                            (dist >= 5000 && dist + 45000 < Rand(50000)))) {
                    func_0203e8cc(o, 0, 8);
                    func_02026c24(o);
                    o->state = 2;
                }
            }
            break;
        }
        case 1: {
            s32 anim;
            switch (o->s148) {
            case 17:
                anim = 0x120;
                break;
            default:
                o->s148 = 18;
                anim = 0x140;
                break;
            }
            if (data_02159444->flags & 1) {
                o->v26c = data_0214f464->target;
            }
            o->v3b4 = o->v26c;
            o->v278 = o->v3b4;
            func_02037450(o, anim);
            if (dist < 500) {
                func_02038128(o, 0);
            } else {
                func_02038128(o, 1);
            }
            if (o->ufc > 100) {
                if (!func_0200b280(&o->v2a0, &rec->pos, FX_SinIdx(rec->angle), FX_CosIdx(rec->angle), 0xf000, 0x32000)) {
                    lost = TRUE;
                }
            }
            if (!(data_02159444->flags & 1)) {
                o->c468++;
                if (o->c468 > 100) {
                    o->v3b4 = data_02159444->ani->pos;
                }
                if (o->c468 > 200) {
                    func_0203e8cc(o, 1, 6);
                    o->b97 = 2;
                }
            } else {
                func_0203e8cc(o, 1, 0);
                o->b97 = 0;
                o->c468 = 0;
            }
            break;
        }
        case 2:
            o->v3b4 = data_02159444->ani->pos;
            o->c468++;
            if (o->c468 > 200) {
                o->state = 1;
            } else if (o->c468 > 60) {
                s16 i;
                for (i = o->c464 + 1; i < path->n; i++) {
                    if (func_020aaf38(data_0214f460, GetCell(ctl, path, i), 0x24000)) {
                        func_0203e8cc(o, 0, 17);
                        func_020266f8(o);
                        o->state = 0;
                        break;
                    }
                }
            }
            break;
        }
        {
            s16 i;
            s32 s3 = FX_SinIdx(rec->angle) * 3;
            s32 c3 = FX_CosIdx(rec->angle) * 3;
            fx32 side;
            VecFx32 dv;
            if (ctl->dir) {
                side = -(FX_Mul(-c3, o->v2b8.x) + FX_Mul(s3, o->v2b8.z));
            } else {
                side = FX_Mul(-c3, o->v2b8.x) + FX_Mul(s3, o->v2b8.z);
            }
            func_02067e34(&o->v2a0, &o->v2b8, &dv);
            for (i = 0; i < path->n; i++) {
                if (i != o->last) {
                    Cell *c = GetCell(ctl, path, i);
                    if (c->flag) {
                        VecFx32 a;
                        VecFx32 b;
                        b = c->pos;
                        a = b;
                        b.x -= s3;
                        b.z -= c3;
                        a.x += s3;
                        a.z += c3;
                        if (func_0200b4d0(&a, &b, &o->v2a0, &dv)) {
                            u32 bit = 1 << i;
                            if ((s32)o->mask > (s32)bit || (o->mask & bit) || ((i & 1) ? -side : side) > 0) {
                                o->mask |= 1 << path->n;
                            }
                            o->mask |= bit;
                            o->last = i;
                            func_02027de8(o, 3, 15);
                        }
                    }
                }
            }
        }
    }
    func_02029504(o);
    if (!done && !lost) {
        return;
    }
    switch (func_ov006_021607d0(o, ctl, 1, 1)) {
    case 0:
        break;
    case 1:
        if (o->mask == 0x124924) {
            data_0214f464->mode = 7;
            {
                Rng *r = data_0214f464;
                r->count++;
                if (r->count >= 5) {
                func_021089b8(3);
            } else {
                func_021089b8(2);
            }
            }
        } else {
            data_0214f464->mode = 8;
            data_0214f464->count = 0;
            func_021089b8(1);
        }
        break;
    case 2:
        data_0214f464->mode = 8;
        data_0214f464->count = 0;
        func_021089b8(1);
        break;
    case 3:
        break;
    case 4:
        data_0214f464->mode = 9;
        data_0214f464->count = 0;
        func_021089b8(1);
        break;
    }
    func_ov006_021607d0(o, ctl, 0, 0);
    func_ov006_02161344(o);
}
