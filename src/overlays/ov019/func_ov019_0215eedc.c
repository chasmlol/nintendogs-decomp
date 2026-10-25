#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32; } MtxFx43;

typedef struct {
    VecFx32 root;     /* 0x00 */
    VecFx32 tip;      /* 0x0c */
    VecFx32 v18;      /* 0x18 */
    VecFx32 v24;      /* 0x24 */
    VecFx32 pos[8];   /* 0x30 */
    VecFx32 prev[8];  /* 0x90 */
    VecFx32 vel[8];   /* 0xf0 */
} Rope;

typedef struct {
    u8 pad00[0x3c];
    VecFx32 pos;      /* 0x3c */
    MtxFx43 mtx;      /* 0x48 */
} Seg;

typedef struct {
    u32 hdr;
    Seg *seg[50];
} SegTbl;

typedef struct {
    u8 pad00[0x1c];
    s16 base;         /* 0x1c */
    u8 pad1e[0x2c - 0x1e];
    s16 id;           /* 0x2c */
    u8 pad2e[0xac - 0x2e];
    Rope *rope;       /* 0xac */
} Ctl;

extern void *func_ov019_0215cca8(s32 id);
extern void func_ov019_0215ca88(void *src, Rope *rope);
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);   /* VEC_Add */
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);   /* VEC_Subtract */
extern fx32 func_02067c30(const VecFx32 *v);                                  /* VEC_Mag */
extern fx32 func_01ff8958(fx32 a, fx32 b);                                    /* FX_Div */
extern void func_02067d04(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);   /* VEC_CrossProduct */
extern void func_01ff89d0(VecFx32 *v);                                        /* VEC_Normalize */
extern SegTbl *func_ov019_021611a0(void);

#define FX_Mul(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

static inline void VecSet(VecFx32 *v, fx32 x, fx32 y, fx32 z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline void VecScale(VecFx32 *v, fx32 s)
{
    v->x = FX_Mul(v->x, s);
    v->y = FX_Mul(v->y, s);
    v->z = FX_Mul(v->z, s);
}

static inline Seg *GetSeg(s16 n)
{
    if (n < 0 || n >= 50) {
        return NULL;
    }
    return func_ov019_021611a0()->seg[n];
}
static inline Seg *GetSeg2(s32 n)
{
    if (n < 0 || n >= 50) {
        return NULL;
    }
    return func_ov019_021611a0()->seg[n];
}

void func_ov019_0215eedc(Ctl *c)
{
    VecFx32 prev;
    VecFx32 diff;
    VecFx32 next;
    VecFx32 diff2;
    VecFx32 d;
    VecFx32 side;
    VecFx32 up;
    VecFx32 dir;
    VecFx32 mid;
    MtxFx43 m;
    VecFx32 tmp[8];
    s16 i;
    fx32 len;
    void *src;
    s16 start;

    start = 0;
    src = func_ov019_0215cca8(c->id);
    for (i = 0; i < 8; i++) {
        Rope *r = c->rope;
        r->prev[i] = r->pos[i];
    }
    if (src != NULL) {
        func_ov019_0215ca88(src, c->rope);
        c->rope->pos[0] = c->rope->root;
        start = 1;
        VecSet(&c->rope->v18, 0, 0, 0);
    }
    c->rope->tip = c->rope->root;
    VecScale(&c->rope->tip, 0x802);
    c->rope->tip.z = -0xa000;
    c->rope->pos[7] = c->rope->tip;
    VecSet(&c->rope->v24, 0, 0, 0);

    for (i = start; i < 7; i++) {
        VecScale(&c->rope->vel[i], 0xff8);
        c->rope->vel[i].y -= 0x40;
        func_02067e68(&c->rope->pos[i], &c->rope->vel[i], &c->rope->pos[i]);
        if (c->rope->pos[i].y < 0) {
            c->rope->pos[i].y = 0;
            if (c->rope->vel[i].y < 0) {
                c->rope->vel[i].y = 0;
            }
            c->rope->vel[i].x = FX_Mul(c->rope->vel[i].x, 0xf00);
            c->rope->vel[i].z = FX_Mul(c->rope->vel[i].z, 0xf00);
        }
    }

    for (i = 0; i < 8; i++) {
        tmp[i] = c->rope->pos[i];
    }

    for (i = start; i < 7; i++) {
        if (i > 0) {
            prev = tmp[i - 1];
            func_02067e34(&tmp[i], &prev, &diff);
            len = func_02067c30(&diff);
            if (len > 0x267a) {
                fx32 s = func_01ff8958(0x267a, len);
                diff.x = FX_Mul(diff.x, s);
                diff.y = FX_Mul(diff.y, s);
                diff.z = FX_Mul(diff.z, s);
                func_02067e68(&prev, &diff, &tmp[i]);
            }
        }
    }

    for (i = 6; i >= start; i--) {
        if (i < 7) {
            next = tmp[i + 1];
            func_02067e34(&tmp[i], &next, &diff2);
            len = func_02067c30(&diff2);
            if (len > 0x267a) {
                fx32 s = func_01ff8958(0x267a, len);
                diff2.x = FX_Mul(diff2.x, s);
                diff2.y = FX_Mul(diff2.y, s);
                diff2.z = FX_Mul(diff2.z, s);
                func_02067e68(&next, &diff2, &tmp[i]);
            }
        }
    }

    for (i = start; i < 7; i++) {
        func_02067e34(&tmp[i], &c->rope->pos[i], &d);
        VecScale(&d, 0x668);
        func_02067e68(&c->rope->vel[i], &d, &c->rope->vel[i]);
        c->rope->pos[i] = tmp[i];
    }

    for (i = 0; i < 7; i++) {
        s16 n = c->base + i;
        Seg *seg;
        if (n < 0 || n >= 50) {
            seg = NULL;
        } else {
            seg = func_ov019_021611a0()->seg[n];
        }
        if (seg != NULL) {
            func_02067e68(&c->rope->pos[i + 1], &c->rope->pos[i], &mid);
            VecScale(&mid, 0x800);
            func_02067e34(&c->rope->pos[i + 1], &c->rope->pos[i], &dir);
            if (dir.x == 0 && dir.z == 0) {
                VecSet(&up, 0x1000, 0, 0);
            } else {
                VecSet(&up, 0, 0x1000, 0);
            }
            func_02067d04(&up, &dir, &side);
            func_02067d04(&dir, &side, &up);
            func_01ff89d0(&side);
            func_01ff89d0(&up);
            func_01ff89d0(&dir);
            m._00 = side.x;
            m._01 = side.y;
            m._02 = side.z;
            m._10 = up.x;
            m._11 = up.y;
            m._12 = up.z;
            m._20 = dir.x;
            m._21 = dir.y;
            m._22 = dir.z;
            if (seg != NULL) {
                seg->pos = mid;
            }
            if (seg != NULL) {
                seg->mtx = m;
            }
        }
    }
}


