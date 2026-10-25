#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22; } MtxFx33;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32; } MtxFx43;

typedef struct {
    u32 hdr;            /* 0x000 */
    s32 id[6];          /* 0x004 */
    s32 inited[6];      /* 0x01c */
    MtxFx43 rec[6];     /* 0x034 */
    VecFx32 pos[6];     /* 0x154 */
    VecFx32 vel[6];     /* 0x19c */
    s16 *len;           /* 0x1e4 */
} JointTbl;

typedef struct {
    u8 pad00[0x90];
    s16 mode;           /* 0x090 */
    u8 pad92[0xbc - 0x92];
    VecFx32 trans;      /* 0x0bc */
    MtxFx33 rot;        /* 0x0c8 */
    u8 padec[0x214 - 0xec];
    JointTbl *tbl;      /* 0x214 */
} Model;

typedef struct { u8 b0; u8 id; } Info;
typedef struct { Info *info; } Node;

extern Model *data_027c0360;
extern s32 data_0213304c[];

extern void func_01ff8058(const VecFx32 *v, const MtxFx33 *m, VecFx32 *out);   /* MTX_MultVec33 */
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);    /* VEC_Add */
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);    /* VEC_Subtract */
extern void func_02067d04(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);    /* VEC_CrossProduct */
extern void func_02067af0(const VecFx32 *a, VecFx32 *out);                     /* VEC_Normalize */

#define FX_Mul(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

static inline void VecScale(VecFx32 *v, fx32 s)
{
    v->x = FX_Mul(v->x, s);
    v->y = FX_Mul(v->y, s);
    v->z = FX_Mul(v->z, s);
}

static inline void MtxTranspose33To43(const MtxFx33 *src, MtxFx43 *dst)
{
    dst->_00 = src->_00; dst->_01 = src->_10; dst->_02 = src->_20;
    dst->_10 = src->_01; dst->_11 = src->_11; dst->_12 = src->_21;
    dst->_20 = src->_02; dst->_21 = src->_12; dst->_22 = src->_22;
    dst->_30 = 0; dst->_31 = 0; dst->_32 = 0;
}


/* (('BOOL big;', 'MtxFx43 *rec;', 's32 i;', 's32 k;', 'JointTbl *t;', 's32 len;', 'Model *obj;'), 0, 0, 1, 0) */
static inline fx32 ClampLo(fx32 v, fx32 lo) { if (v < lo) v = lo; return v; }
static inline fx32 ClampHi(fx32 v, fx32 hi) { if (v > hi) v = hi; return v; }
#define MAXV(a, b) ((a) > (b) ? (a) : (b))
#define MINV(a, b) ((a) < (b) ? (a) : (b))


/* (('t01 = src->_01;', 't12 = src->_12;', 't02 = src->_02;'), ('dst->_01 = src->_10;', 'dst->_02 = src->_20;', 'dst->_12 = src->_21;', 'dst->_20 = t02;', 'dst->_21 = t12;', 'dst->_10 = t01;', 'dst->_00 = src->_00;', 'dst->_11 = src->_11;', 'dst->_22 = src->_22;'), 0, 0) */
static inline void Tr_1(const MtxFx33 *src, MtxFx43 *dst) { fx32 t01; fx32 t02; fx32 t12; t01 = src->_01; t02 = src->_02; t12 = src->_12; dst->_01 = src->_10; dst->_02 = src->_20; dst->_12 = src->_21; dst->_20 = t02; dst->_21 = t12; dst->_10 = t01; dst->_00 = src->_00; dst->_11 = src->_11; dst->_22 = src->_22; dst->_30 = 0; dst->_31 = 0; dst->_32 = 0; }

void func_020ef2c8(Node *node, MtxFx43 *mtx)
{
    MtxFx43 m;
    VecFx32 a;
    VecFx32 b;
    VecFx32 x;
    VecFx32 y;
    VecFx32 z;
    VecFx32 u;
    VecFx32 w;
    VecFx32 v;
    VecFx32 d;
    Model *const obj = data_027c0360;
    JointTbl *t = obj->tbl;
    BOOL big;
    s32 k;
    s32 len;
    s32 i;
    MtxFx43 *rec;

    for (i = 0; i < 6; i++) {
        if (node->info->id == t->id[i]) {
            k = i;
        }
    }
    if (data_0213304c[k] == 0) {
        return;
    }
    rec = &t->rec[k];
    if (t->inited[k] == 0) {
        *rec = *mtx;
        t->inited[k] = 1;
        VEC_Set(&a, rec->_30, rec->_31, rec->_32);
        func_01ff8058(&a, &obj->rot, &a);
        func_02067e68(&a, &obj->trans, &t->pos[k]);
        VEC_Set(&b, mtx->_00, mtx->_01, mtx->_02);
        func_01ff8058(&b, &obj->rot, &b);
        len = t->len[k];
        t->vel[k].x = FX_Mul(b.x, len);
        t->vel[k].y = FX_Mul(b.y, len);
        t->vel[k].z = FX_Mul(b.z, len);
        return;
    }

    VEC_Set(&a, mtx->_30, mtx->_31, mtx->_32);
    func_01ff8058(&a, &obj->rot, &a);
    func_02067e68(&a, &obj->trans, &a);
    Tr_1(&obj->rot, &m);
    VEC_Set(&y, rec->_10, rec->_11, rec->_12);
    VEC_Set(&z, rec->_20, rec->_21, rec->_22);
    func_02067e34(&t->pos[k], &a, &d);
    func_02067e68(&d, &t->vel[k], &v);
    t->pos[k] = a;
    if (k != 5) {
        v.y -= t->len[k] >> 3;
    }
    if (obj->mode == 1 && k != 5 && a.y + v.y < 0) {
        fx32 over = -(a.y + v.y);
        fx32 abs;
        v.y += over;
        abs = v.x > 0 ? v.x : -v.x;
        if (abs < 41) {
            v.x = 41;
        } else if (v.x > 0) {
            v.x += over;
        } else {
            v.x -= over;
        }
        abs = v.z > 0 ? v.z : -v.z;
        if (abs < 41) {
            v.z = 41;
        } else if (v.z > 0) {
            v.z += over;
        } else {
            v.z -= over;
        }
    }
    func_01ff8058(&v, (MtxFx33 *)&m, &x);
    if (k >= 1 && k <= 4) {
        s32 half;
        len = t->len[k];
        half = len >> 1;
        if (x.y > (len >> 3)) {
            x.y = len >> 3;
        }
        if (k == 1 || k == 3) {
            if (x.x < -half) {
                x.x = -half;
            }
        } else {
            if (x.x > half) {
                x.x = half;
            }
        }
        VEC_Set(&w, mtx->_10, mtx->_11, mtx->_12);
        w.x >>= 4;
        w.y >>= 4;
        w.z >>= 4;
        func_02067e68(&y, &w, &y);
    }
    if (k == 5) {
        len = t->len[k];
        { s32 l = t->len[k];
        if (x.y < (0 - len)) x.y = (0 - len);
        if (x.y < 0) x.y = 0;
        if (x.x < -(fx32)l) x.x = -(fx32)l;
        if (x.x > l) x.x = l;
        if (x.z < 0x802) x.z = 0x802;
        if (y.y < 0x802) y.y = 0x802; }
        VEC_Set(&u, mtx->_00, mtx->_01, mtx->_02);
        VecScale(&u, t->len[k] >> 4);
        VEC_Set(&w, mtx->_10, mtx->_11, mtx->_12);
        VecScale(&w, t->len[k] >> 4);
        func_02067e68(&x, &u, &x);
        func_02067e68(&y, &w, &y);
    }
    if (x.x > 40) {
        big = TRUE;
    } else if (x.x < -40) {
        big = TRUE;
    } else if (x.y > 40) {
        big = TRUE;
    } else if (x.y < -40) {
        big = TRUE;
    } else if (x.z > 40) {
        big = TRUE;
    } else if (x.z < -40) {
        big = TRUE;
    } else {
        big = FALSE;
    }
    if (big) {
        func_02067af0(&x, &x);
    } else {
        VEC_Set(&x, rec->_00, rec->_01, rec->_02);
    }
    func_02067d04(&x, &y, &z);
    if (z.x == 0 && z.y == 0 && z.z == 0) {
        func_02067d04(&x, &z, &y);
        y.x = -y.x;
        y.y = -y.y;
        y.z = -y.z;
        if (y.x == 0 && y.y == 0 && y.z == 0) {
            VEC_Set(&y, rec->_10, rec->_11, rec->_12);
        } else {
            func_02067af0(&y, &y);
        }
        func_02067d04(&x, &y, &z);
        if (z.x == 0 && z.y == 0 && z.z == 0) {
            VEC_Set(&z, rec->_20, rec->_21, rec->_22);
        }
    } else {
        func_02067af0(&z, &z);
        func_02067d04(&z, &x, &y);
        if (y.x == 0 && y.y == 0 && y.z == 0) {
            VEC_Set(&y, rec->_10, rec->_11, rec->_12);
        }
    }
    mtx->_00 = x.x;
    mtx->_01 = x.y;
    mtx->_02 = x.z;
    mtx->_10 = y.x;
    mtx->_11 = y.y;
    mtx->_12 = y.z;
    mtx->_20 = z.x;
    mtx->_21 = z.y;
    mtx->_22 = z.z;
    *rec = *mtx;
    VEC_Set(&x, rec->_00, rec->_01, rec->_02);
    func_01ff8058(&x, &obj->rot, &v);
    len = t->len[k];
    t->vel[k].x = FX_Mul(v.x, len);
    t->vel[k].y = FX_Mul(v.y, len);
    t->vel[k].z = FX_Mul(v.z, len);
}






