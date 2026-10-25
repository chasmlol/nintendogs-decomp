#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
#define FX32_SHIFT 12
#define FX32_ONE 4096
typedef struct { fx32 x, y, z; } VecFx32;

#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> FX32_SHIFT))

typedef struct {
    u8 pad00[0x30];
    VecFx32 pos;        /* 0x30 */
    VecFx32 dir;        /* 0x3c */
} Ent;

typedef struct {
    u32 unk00;
    s32 flagB[2];       /* 0x04 */
    VecFx32 pos[2];     /* 0x0c */
    VecFx32 vel[2];     /* 0x24 */
    s32 flagA[2];       /* 0x3c */
    s32 sndDone[2];     /* 0x44 */
    s32 timer[2];       /* 0x4c */
    u32 unk54;
    Ent *ents[2];       /* 0x58 */
} Work;

typedef struct {
    u8 pad00[0x2c];
    Work *work;         /* 0x2c */
} Obj;

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

static inline void SetVec(VecFx32 *dst, const VecFx32 *src)
{
    VEC_Set(dst, src->x, src->y, src->z);
}

extern void *func_01ffdb08(s32 i);
extern fx32 func_02028130(void *obj);
extern void func_02027668(void *obj, VecFx32 *out);
extern void func_02027654(void *obj, VecFx32 *out);
extern void func_02027618(void *obj, VecFx32 *out);
extern void func_020275dc(void *obj, VecFx32 *out);
extern void func_02027550(void *obj, VecFx32 *out);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern fx32 func_02067df0(const VecFx32 *a, const VecFx32 *b);
extern fx32 func_02067c30(const VecFx32 *v);
extern void func_02067af0(const VecFx32 *src, VecFx32 *dst);
extern void func_01ff832c(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *dst);
extern fx32 func_0206782c(fx32 x);
extern void func_020a0b40(s32 se, fx32 v);

void func_ov006_02162a80(Obj *p)
{
    Work *w;
    void *obj;
    s16 i, j, k;
    BOOL hit;
    fx32 r, dot, len, d;

    w = p->work;
    obj = NULL;
    for (i = 0; i < 3; i++) {
        if (func_01ffdb08(i) != NULL) {
            obj = func_01ffdb08(i);
        }
    }
    for (k = 0; k < 2; k++) {
        if (obj == NULL) {
            continue;
        }
        {
            VecFx32 pos;
            VecFx32 a;
            VecFx32 acc = {0, 0, 0};
            VecFx32 proj;
            VecFx32 epos;
            VecFx32 diff;
            VecFx32 v;
            VecFx32 dir;
            VecFx32 n;
            VecFx32 out;
            VecFx32 spd;

            hit = FALSE;
            func_02027668(obj, &pos);
            d = pos.x - w->ents[k]->pos.x;
            if (d <= 0) {
                d = -d;
            }
            if (d >= 0xa000) {
                continue;
            }
            d = pos.z - w->ents[k]->pos.z;
            if (d <= 0) {
                d = -d;
            }
            if (d >= 0xa000) {
                continue;
            }
            for (j = 0; j < 3; j++) {
                switch (j) {
                case 0:
                    r = FX_MUL(func_02028130(obj), 0xb33);
                    func_02027654(obj, &a);
                    break;
                case 1:
                    r = FX_MUL(func_02028130(obj), 0xccd);
                    func_02027618(obj, &a);
                    break;
                case 2:
                    r = FX_MUL(func_02028130(obj), 0xccd);
                    func_020275dc(obj, &a);
                    break;
                }
                SetVec(&dir, &w->ents[k]->dir);
                epos = w->ents[k]->pos;
                func_02067e34(&a, &epos, &diff);
                dot = func_02067df0(&diff, &dir);
                func_01ff832c(dot, &dir, &epos, &proj);
                func_02067e34(&a, &proj, &v);
                len = func_02067c30(&v);
                if (len < r && dot > -0x4000 && dot < 0x4000) {
                    hit = TRUE;
                    if (len > 41) {
                        func_02067af0(&v, &n);
                        func_01ff832c(-r, &n, &v, &out);
                        func_02067e68(&acc, &out, &acc);
                    }
                }
            }
            if (!hit) {
                continue;
            }
            func_02027550(obj, &spd);
            func_02067e68(&w->pos[k], &acc, &w->pos[k]);
            w->vel[k].x = spd.x >> 1;
            w->vel[k].y = spd.y >> 1;
            w->vel[k].z = spd.z >> 1;
            func_01ff832c(FX32_ONE / 2, &acc, &w->vel[k], &w->vel[k]);
            w->flagA[k] = 1;
            w->flagB[k] = 1;
            w->timer[k] = 300;
            if (w->sndDone[k] == 0) {
                func_020a0b40(14, func_0206782c(FX_MUL(w->vel[k].x, w->vel[k].x) + FX_MUL(w->vel[k].y, w->vel[k].y) +
                                                FX_MUL(w->vel[k].z, w->vel[k].z)));
                w->sndDone[k] = 1;
            }
        }
    }
}
