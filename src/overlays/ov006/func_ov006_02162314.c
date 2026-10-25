#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    u8 pad00[0x30];
    VecFx32 pos;     /* 0x30 */
    VecFx32 dir;     /* 0x3c */
} Target;

typedef struct {
    s32 f0;          /* 0x00 */
    VecFx32 pos;     /* 0x04 */
    VecFx32 vel;     /* 0x10 */
    s32 f1c;         /* 0x1c */
    s32 f20;         /* 0x20 */
    s32 f24;         /* 0x24 */
    u8 pad28[4];
    Target *target;  /* 0x2c */
} Work;

typedef struct {
    u8 pad00[0x2c];
    Work *work;      /* 0x2c */
} Obj;

extern void *func_01ffdb08(s16 i);
extern fx32 func_02028130(void *dog);
extern void func_02027668(void *dog, VecFx32 *v);
extern void func_02027654(void *dog, VecFx32 *v);
extern void func_02027618(void *dog, VecFx32 *v);
extern void func_020275dc(void *dog, VecFx32 *v);
extern void func_02027550(void *dog, VecFx32 *v);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern fx32 func_02067df0(const VecFx32 *a, const VecFx32 *b);
extern void func_01ff832c(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *dst);
extern fx32 func_02067c30(const VecFx32 *v);
extern void func_02067af0(const VecFx32 *src, VecFx32 *dst);
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern fx32 func_0206782c(fx32 x);
extern void func_020a0b40(s32 a, fx32 b);

#define FX_MUL(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

void func_ov006_02162314(Obj *o)
{
    Work *w;
    void *dog;
    s16 i;
    BOOL hit;

    w = o->work;
    dog = NULL;
    for (i = 0; i < 3; i++) {
        if (func_01ffdb08(i) != NULL) {
            dog = func_01ffdb08(i);
        }
    }
    if (dog == NULL) {
        return;
    }
    hit = FALSE;
    {
    s16 c;
    VecFx32 pos;
    VecFx32 v;
    VecFx32 acc = { 0, 0, 0 };
    VecFx32 q;
    VecFx32 p;
    VecFx32 d;
    VecFx32 u;
    VecFx32 dir;
    VecFx32 n;
    VecFx32 m;
    VecFx32 s;
    fx32 dx;
    fx32 dz;
    fx32 range;
    fx32 dot;
    fx32 mag;
    func_02027668(dog, &pos);
    dx = pos.x - w->target->pos.x;
    if (dx <= 0) {
        dx = -dx;
    }
    if (dx > 0xa000) {
        return;
    }
    dz = pos.z - w->target->pos.z;
    if (dz <= 0) {
        dz = -dz;
    }
    if (dz > 0xa000) {
        return;
    }
    for (c = 0; c < 3; c++) {
        switch (c) {
        case 0:
            range = FX_MUL(func_02028130(dog), 0xb33);
            func_02027654(dog, &v);
            break;
        case 1:
            range = FX_MUL(func_02028130(dog), 0xccd);
            func_02027618(dog, &v);
            break;
        case 2:
            range = FX_MUL(func_02028130(dog), 0xccd);
            func_020275dc(dog, &v);
            break;
        }
        {
            VecFx32 *src = &w->target->dir;
            VEC_Set(&dir, src->x, src->y, src->z);
        }
        p = w->target->pos;
        func_02067e34(&v, &p, &d);
        dot = func_02067df0(&d, &dir);
        func_01ff832c(dot, &dir, &p, &q);
        func_02067e34(&v, &q, &u);
        mag = func_02067c30(&u);
        if (mag < range && dot > -0x4000 && dot < 0x4000) {
            hit = TRUE;
            if (mag > 41) {
                func_02067af0(&u, &n);
                func_01ff832c(-range, &n, &u, &m);
                func_02067e68(&acc, &m, &acc);
            }
        }
    }
    if (!hit) {
        return;
    }
    func_02027550(dog, &s);
    func_02067e68(&w->pos, &acc, &w->pos);
    w->vel.x = s.x >> 1;
    w->vel.y = s.y >> 1;
    w->vel.z = s.z >> 1;
    func_01ff832c(0x800, &acc, &w->vel, &w->vel);
    w->f1c = 1;
    w->f0 = 1;
    w->f24 = 300;
    if (w->f20 == 0) {
        func_020a0b40(14, func_0206782c(FX_MUL(w->vel.z, w->vel.z) + (FX_MUL(w->vel.x, w->vel.x) + FX_MUL(w->vel.y, w->vel.y))));
        w->f20 = 1;
    }
    }
}
