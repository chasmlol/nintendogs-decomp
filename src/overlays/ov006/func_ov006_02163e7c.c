#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 m[9]; } MtxFx33;

typedef struct {
    u8 pad0[0xc];
    VecFx32 pos;
    u8 pad1[0x30 - 0x18];
} TabEnt;

typedef struct {
    u8 pad0[0x30];
    VecFx32 pos;
} Sub;

typedef struct {
    u32 f0;
    VecFx32 vecs[8];
    VecFx32 vels[8];
    Sub *sub;
    MtxFx33 mtx;
} Thing;

typedef struct {
    u8 pad0[0x2c];
    Thing *thing;
} Obj;

extern TabEnt data_ov006_02166040[];

extern s32 func_01ffdb08(s16 i);
extern void func_02027668(s32 a, VecFx32 *b);
extern s32 func_02028130(s32 a);
extern void func_02027654(s32 a, VecFx32 *b);
extern void func_02027618(s32 a, VecFx32 *b);
extern void func_020275dc(s32 a, VecFx32 *b);
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern fx32 func_02067df0(const VecFx32 *a, const VecFx32 *b);
extern void func_01ff832c(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *out);
extern fx32 func_02067c30(const VecFx32 *v);
extern void func_02067af0(const VecFx32 *src, VecFx32 *dst);
extern void func_01ff8058(const VecFx32 *v, const MtxFx33 *m, VecFx32 *dst);
extern void func_020a0e04(s32 se);

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

#define FX_MUL(a, b) ((fx32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov006_02163e7c(Obj *obj)
{
    Thing *t = obj->thing;
    s32 found = 0;
    s16 i;
    s16 j;
    s16 k;
    fx32 r;
    fx32 dot;
    fx32 mag;
    fx32 dx;
    fx32 dz;
    VecFx32 pos;
    VecFx32 a;
    VecFx32 d;
    VecFx32 b;
    VecFx32 c;
    VecFx32 e;
    VecFx32 tp;
    VecFx32 n;
    VecFx32 f;
    VecFx32 g;

    for (i = 0; i < 3; i++) {
        if (func_01ffdb08(i) != 0) {
            found = func_01ffdb08(i);
        }
    }
    if (found == 0) {
        return;
    }
    func_02027668(found, &pos);
    dx = pos.x - t->sub->pos.x;
    if (dx <= 0) {
        dx = -dx;
    }
    if (dx > 0x1e000) {
        return;
    }
    dz = pos.z - t->sub->pos.z;
    if (dz <= 0) {
        dz = -dz;
    }
    if (dz > 0x1e000) {
        return;
    }
    for (k = 0; k < 8; k++) {
        TabEnt *ent = &data_ov006_02166040[k];
        for (j = 0; j < 3; j++) {
            switch (j) {
            case 0:
                r = FX_MUL(func_02028130(found), 0xb33);
                func_02027654(found, &a);
                break;
            case 1:
                r = FX_MUL(func_02028130(found), 0xccd);
                func_02027618(found, &a);
                break;
            case 2:
                r = FX_MUL(func_02028130(found), 0xccd);
                func_020275dc(found, &a);
                break;
            }
            VEC_Set(&tp, ent->pos.x, ent->pos.y, ent->pos.z);
            func_02067e68(&t->sub->pos, &t->vecs[k], &b);
            func_02067e34(&a, &b, &c);
            dot = func_02067df0(&c, &tp);
            func_01ff832c(dot, &tp, &b, &d);
            func_02067e34(&a, &d, &e);
            mag = func_02067c30(&e);
            if (mag < r && dot > 0 && dot < 0x8000) {
                t->vels[k].x = 0;
                t->vels[k].y = 0;
                t->vels[k].z = 0;
                if (mag > 41) {
                    func_02067af0(&e, &n);
                    func_01ff832c(-r, &n, &a, &f);
                    func_02067e34(&f, &d, &g);
                    if (g.x < -410) {
                        g.x = -410;
                    }
                    if (g.x > 410) {
                        g.x = 410;
                    }
                    if (g.z < -410) {
                        g.z = -410;
                    }
                    if (g.z > 410) {
                        g.z = 410;
                    }
                    func_01ff8058(&g, &t->mtx, &g);
                    dx = ent->pos.x - g.x;
                    dz = ent->pos.z - g.z;
                    if (dx > 82) {
                        dx = 82;
                    }
                    if (dx < -82) {
                        dx = -82;
                    }
                    if (dz > 82) {
                        dz = 82;
                    }
                    if (dz < -82) {
                        dz = -82;
                    }
                    ent->pos.x -= dx;
                    ent->pos.z -= dz;
                    func_020a0e04(15);
                }
            }
        }
    }
}
