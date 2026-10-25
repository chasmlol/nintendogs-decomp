#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    u8 pad00[0x54];
    s32 f54;            /* 0x54 */
} Eff;

typedef struct {
    u8 pad00[0xc];
    fx32 fc;            /* 0x0c */
    u8 pad10[0xc];
    Eff *eff;           /* 0x1c */
} Work;

typedef struct Dog {
    u8 pad00[0x88];
    s16 f88;            /* 0x88 */
    u8 pad8a[0x12];
    s16 f9c;            /* 0x9c */
    u8 pad9e[0xa];
    s32 fa8;            /* 0xa8 */
    u8 padac[4];
    VecFx32 fb0;        /* 0xb0 */
    VecFx32 pos;        /* 0xbc */
    u8 padc8[0x190 - 0xc8];
    u8 f190[0x214 - 0x190];
    Work *work;         /* 0x214 */
} Dog;

typedef struct {
    u32 seed;           /* 0x00 */
    Dog *dog;           /* 0x04 */
    u8 pad08[0x18];
    s16 count;          /* 0x20 */
} Game;

typedef struct {
    u8 pad00[0x30];
    VecFx32 v30;        /* 0x30 */
    u8 pad3c[0xc];
    VecFx32 v48;        /* 0x48 */
} Cam;

typedef struct {
    u8 pad00[0x1c];
    Cam *cam;           /* 0x1c */
    u8 pad20[0x64];
    u16 flags;          /* 0x84 */
} Sys;

typedef struct {
    u8 pad00[0x4c];
    fx32 m[3][3];       /* 0x4c */
} CamMtx;

extern Game *data_02159468;
extern Sys *data_02159444;
extern s32 *data_0215be34;
extern CamMtx data_02152cd8;

extern s32 func_02044ca0(s32 a);
extern void func_020be4b4(Dog *a, VecFx32 *b, s32 c);
extern void func_020ab02c(s32 a, VecFx32 *b, VecFx32 *c);
extern void func_0209d4b0(void *a, s32 b);
extern void func_020e5a84(Dog *a);
extern void func_02081104(s32 a, Eff *b);
extern void func_01ff832c(fx32 a, const VecFx32 *b, const VecFx32 *c, VecFx32 *d);
extern Eff *func_0208122c(s32 a, s32 b, VecFx32 *c);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern void func_02067d04(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern s32 func_020c5fbc(Dog *a);

#define FX_MUL(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline s32 GetHeap(void)
{
    return (data_0215be34 != NULL) ? *data_0215be34 : 0;
}

static inline u32 Rand(void)
{
    u32 s = data_02159468->seed * 0x10dcd + 1;
    data_02159468->seed = s;
    return s;
}

static inline u16 RandM(u16 mask)
{
    u32 s = data_02159468->seed * 0x10dcd + 1;
    data_02159468->seed = s;
    return (u16)(s & mask);
}

static inline void VEC_Set(VecFx32 *v, fx32 x, fx32 y, fx32 z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline Dog *GetDog(void)
{
    if (data_02159468->count <= 0) {
        return NULL;
    }
    return data_02159468->dog;
}

s32 func_020e5594(Dog *p)
{
    VecFx32 v0;
    VecFx32 dir;
    VecFx32 right;
    VecFx32 cpos;
    VecFx32 d;
    VecFx32 cr;
    VecFx32 dir0;
    s32 r;
    Work *w;
    VecFx32 *tp;
    s16 r2;
    fx32 a;
    fx32 k;

    r = func_02044ca0(p->f9c);
    w = p->work;
    if (r == 0) {
        return r;
    }
    if (p->f88 == 0) {
        func_020be4b4(p, &v0, 0x4010);
        func_020ab02c(r, &p->pos, &v0);
        if (data_02159444->flags & 2) {
            func_0209d4b0(p->f190, 5);
        }
        func_020e5a84(p);
        p->fa8 = 0;
        return 0;
    }
    tp = &GetDog()->pos;
    if (w->eff != NULL) {
        func_02081104(GetHeap(), w->eff);
        w->eff = NULL;
    }
    dir = data_02159444->cam->v48;
    func_01ff832c(0x4cd, &dir, tp, &p->pos);
    p->pos.y += 0xee2;
    w->eff = func_0208122c(GetHeap(), 14, &p->pos);
    if (w->eff == NULL) {
        return (s32)w->eff;
    }
    w->fc = FX_MUL((s16)RandM(0xfff), 0x800) + 0xccd;
    w->eff->f54 = (s16)w->fc;
    r2 = (s16)RandM(0xfff);
    a = FX_MUL((s16)RandM(0xfff), 0x290) - 0x148;
    cpos = data_02159444->cam->v30;
    func_02067e34(&p->pos, &cpos, &d);
    d.y = 0;
    dir0 = dir;
    dir0.y = d.y;
    func_02067d04(&dir0, &d, &cr);
    a -= cr.y >> 4;
    k = FX_MUL(r2, 0x333) + 0x333;
    p->fb0.x = FX_MUL(dir.x, k);
    p->fb0.y = FX_MUL(dir.y, k);
    p->fb0.z = FX_MUL(dir.z, k);
    VEC_Set(&right, data_02152cd8.m[0][0], data_02152cd8.m[1][0], data_02152cd8.m[2][0]);
    func_01ff832c(a, &right, &p->fb0, &p->fb0);
    {
        s32 k2 = FX_MUL((s16)RandM(0xfff), 0xcd);
        p->fb0.y = k2 + FX_MUL(p->pos.y - 0x6000, 0x19a);
    }
    return func_020c5fbc(p);
}
