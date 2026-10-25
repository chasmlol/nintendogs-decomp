#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

#define FX_Mul(a, b) ((fx32)(((fx64)(fx32)(a) * (fx32)(b) + 0x800) >> 12))
#define FX_Mul64(a, b) ((fx32)(((a) * (b) + 0x800) >> 12))

typedef struct {
    u8 pad00[8];
    fx32 mass;
} Param;

typedef struct {
    u8 pad00[0x9e];
    u8 f9e;
    u8 pad9f[0xaf - 0x9f];
    s8 group;
    u8 flags;
    u8 padb1[0xea - 0xb1];
    s16 fea;
    u8 padec[0x264 - 0xec];
    s32 f264;
    u8 pad268[0x2a0 - 0x268];
    VecFx32 pos;
    VecFx32 prev;
    VecFx32 vel;
    u8 pad2c4[0x390 - 0x2c4];
    VecFx32 f390;
    u8 pad39c[0x484 - 0x39c];
    s32 f484;
    u8 pad488[0x918 - 0x488];
    fx32 floor;
    fx32 radius;
    u32 f920;
    u32 hit;
    VecFx32 center;
    VecFx32 push;
    u8 pad940[0x9e8 - 0x940];
    Param *param;
} Dog;

typedef struct {
    u8 pad00[0x54];
    Dog *dogs[3];
    u8 pad60[4];
    s32 f64;
} Game;

typedef struct {
    u8 pad00[0x1a];
    s16 n6;
    u8 pad1c[2];
    s16 n7;
    u8 pad20[2];
    s16 n8;
} Counts;

typedef struct {
    u8 pad00[0x20];
    Counts *counts;
} Course;

typedef struct {
    u8 pad00[0xc];
    fx32 ground;
} Env;

typedef struct {
    u8 pad00[4];
    u16 ang;
    u16 pad06;
    VecFx32 pos;
    fx32 f14;
    fx32 f18;
    fx32 f1c;
    s32 f20;
} Obj;

typedef struct {
    u8 pad00[8];
    VecFx32 pos;
    fx32 radius;
} Ball;

typedef struct {
    VecFx32 a;
    VecFx32 b;
} Path;

extern Game *data_0214f464;
extern Course *data_0214f45c;
extern Env *data_02159428;

extern void *func_0200c498(s32 kind, s32 idx);
extern fx32 func_0206782c(fx32 a);
extern fx32 func_01ff8958(fx32 a, fx32 b);
extern fx32 func_01ff8930(fx32 a);
extern BOOL func_0200a648(VecFx32 *pos, VecFx32 *prev, fx32 r, VecFx32 *out, VecFx32 *center, u16 ang, fx32 h, fx32 w, fx32 d);
extern BOOL func_0200aa74(VecFx32 *pos, VecFx32 *prev, fx32 r, VecFx32 *out, VecFx32 *center, u16 ang, fx32 h, fx32 w, fx32 d);
extern s32 func_02009f90(VecFx32 *pos, VecFx32 *prev, fx32 r, VecFx32 *out, Path *path, fx32 h, fx32 w, fx32 d, s32 f);
extern Path *func_ov006_02163288(s32 a);
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);

static inline Dog *GetDog(s16 i)
{
    if (i < 0 || i >= 3) {
        return NULL;
    }
    return data_0214f464->dogs[i];
}

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

void func_02024158(void)
{
    fx32 y;
    s16 i;
    s16 b;
    s16 k;

    for (i = 0; i < 3; i++) {
        Dog *d = GetDog(i);
        if (d != NULL) {
            d->push.x = 0;
            d->push.y = 0;
            d->push.z = 0;
            d->hit = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        Dog *d1 = GetDog(i);
        if (d1 == NULL) {
            continue;
        }
        for (b = i + 1; b < 3; b++) {
            Dog *d2 = GetDog(b);
            fx32 r;
            fx32 dx;
            fx32 dy;
            fx32 dz;
            fx32 dist2;
            if (d2 == NULL) {
                continue;
            }
            r = d1->radius + d2->radius;
            dx = d2->center.x - d1->center.x;
            if ((dx > 0 ? dx : -dx) >= r) {
                continue;
            }
            dy = d2->center.y - d1->center.y;
            if ((dy > 0 ? dy : -dy) >= r) {
                continue;
            }
            dz = d2->center.z - d1->center.z;
            if ((dz > 0 ? dz : -dz) >= r) {
                continue;
            }
            {
                fx32 len;
                fx32 s;
                fx32 w1;
                fx32 w2;
                fx32 px;
                fx32 pz;
                dist2 = FX_Mul64((fx64)dz, dz) + (FX_Mul64((fx64)dx, dx) + FX_Mul(dy, dy));
                if (dist2 == 0 || dist2 >= FX_Mul(r, r)) {
                    continue;
                }
                len = func_0206782c(dist2);
                s = func_01ff8958(r - len, len);
                if (d1->group == d2->group) {
                    fx32 inv = func_01ff8930(d1->param->mass + d2->param->mass);
                    w1 = FX_Mul(inv, -d2->param->mass);
                    w2 = FX_Mul(inv, d1->param->mass);
                } else if (d1->group < d2->group) {
                    w1 = -0x1000;
                    w2 = 0;
                } else if (d1->group > d2->group) {
                    w1 = 0;
                    w2 = 0x1000;
                } else {
                    w1 = 0;
                    w2 = 0;
                }
                px = FX_Mul64((fx64)dx, s);
                d1->push.x += FX_Mul(px, w1);
                pz = FX_Mul64((fx64)dz, s);
                d1->push.z += FX_Mul(pz, w1);
                d2->push.x += FX_Mul(px, w2);
                d2->push.z += FX_Mul(pz, w2);
                d1->hit |= 1 << b;
                d2->hit |= 1 << i;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        Dog *d = GetDog(i);
        if (d == NULL) {
            continue;
        }
        if (d->flags & 2) {
            for (k = 0; k < data_0214f45c->counts->n6; k++) {
                Obj *o = func_0200c498(6, k);
                if (o != NULL && o->f20 == 1) {
                    if (func_0200a648(&d->pos, &d->prev, d->radius, &d->push, &o->pos, o->ang, o->f18, o->f14, o->f1c)) {
                        d->hit |= 0x20000000;
                    }
                }
            }
        }
        if (d->flags & 1) {
            VecFx32 p0 = d->pos;
            VecFx32 p1 = d->prev;
            p0.y += d->radius;
            p1.y += d->radius;
            for (k = 0; k < data_0214f45c->counts->n6; k++) {
                Obj *o = func_0200c498(6, k);
                if (o != NULL && o->f20 == 0) {
                    if (func_0200aa74(&p0, &p1, d->radius, &d->push, &o->pos, o->ang, o->f18, o->f14, o->f1c)) {
                        d->hit |= 0x20000000;
                    }
                }
            }
        }
        if (d->flags & 4) {
            VecFx32 p = d->pos;
            p.y += d->radius;
            for (k = 0; k < data_0214f45c->counts->n7; k++) {
                Ball *bl = func_0200c498(7, k);
                if (bl != NULL) {
                    fx32 r = d->radius + bl->radius;
                    fx32 dx = p.x - bl->pos.x;
                    fx32 dy;
                    fx32 dz;
                    if ((dx > 0 ? dx : -dx) >= r) {
                        continue;
                    }
                    dy = p.y - bl->pos.y;
                    if ((dy > 0 ? dy : -dy) >= r) {
                        continue;
                    }
                    dz = p.z - bl->pos.z;
                    if ((dz > 0 ? dz : -dz) >= r) {
                        continue;
                    }
                    {
                        fx64 X = dx;
                        fx64 Z = dz;
                        fx32 dist2 = FX_Mul(dz, dz) + (FX_Mul(dx, dx) + FX_Mul(dy, dy));
                        fx32 len;
                        fx32 s;
                        if (dist2 == 0 || dist2 >= FX_Mul(r, r)) {
                            continue;
                        }
                        len = func_0206782c(dist2);
                        s = func_01ff8958(r - len, len);
                        d->push.x += FX_Mul64(X, s);
                        d->push.z += FX_Mul64(Z, s);
                        d->hit |= 0x20000000;
                    }
                }
            }
        }
        if (d->flags & 8) {
            VecFx32 p0 = d->pos;
            VecFx32 p1 = d->prev;
            p0.y += d->radius;
            p1.y += d->radius;
            d->f484 = -1;
            for (k = 0; k < data_0214f45c->counts->n8; k++) {
                Obj *o = func_0200c498(8, k);
                if (o != NULL) {
                    Path *path = func_ov006_02163288((s16)o->f20);
                    switch (func_02009f90(&p0, &p1, d->radius, &d->push, path, o->f18, o->f14, o->f1c, d->fea == 0x4ec ? 1 : 0)) {
                    case 1:
                        d->hit |= 0x20000000;
                        d->hit |= 0x40000000;
                        d->hit |= 0x10000000;
                        d->f9e = 3;
                        d->f484 = (s16)o->f20;
                        VEC_Set(&d->f390, path->b.x, path->b.y, path->b.z);
                        break;
                    case 2:
                        d->hit |= 0x20000000;
                        d->hit |= 0x8000000;
                        d->f9e = 0;
                        break;
                    case 0:
                        d->f9e = 0;
                        break;
                    }
                }
            }
        }
        {
            fx32 x;
            fx32 z;
            fx32 dist2;
            fx32 lim;
            x = d->pos.x + d->push.x;
            y = d->pos.y + d->push.y;
            z = d->pos.z + d->push.z;
            dist2 = FX_Mul64((fx64)x, x) + FX_Mul64((fx64)z, z);
            lim = data_02159428->ground - FX_Mul64((fx64)d->param->mass, 0x14cc);
            if (d->flags & 0x10) {
                if (dist2 > FX_Mul(lim, lim)) {
                    fx32 len = func_0206782c(dist2);
                    fx32 s = func_01ff8958(lim - len, len);
                    d->push.x += FX_Mul64((fx64)x, s);
                    d->push.z += FX_Mul64((fx64)z, s);
                    d->hit |= 0x80000000;
                }
            }
            if (y <= d->floor) {
                d->push.y += d->floor - y;
                d->hit |= 0x40000000;
            }
            if ((d->hit & 0x40000000) && d->f264 < 0) {
                d->f264 = 0;
            }
            func_02067e68(&d->pos, &d->push, &d->pos);
            func_02067e34(&d->pos, &d->prev, &d->vel);
        }
    }
    data_0214f464->f64 = 0;
}


