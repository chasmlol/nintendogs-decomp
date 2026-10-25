#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;

typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;

typedef struct {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
} MtxFx33;

typedef struct {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;

typedef struct {
    u8 pad[0xbc];
    VecFx32 pos;
    MtxFx43 mtx;
} Obj;

extern const fx64 data_02126728;
extern const VecFx32 data_02142b70;
extern const VecFx32 data_02142b7c;
extern void func_01ff8058(const VecFx32 *v, const MtxFx43 *m, VecFx32 *dst);
extern fx32 func_02067898(fx32 a, fx32 b);
extern fx32 func_02067df0(const VecFx32 *a, const VecFx32 *b);
extern fx32 func_02067c30(const VecFx32 *a);
extern void func_02067af0(const VecFx32 *a, VecFx32 *b);
extern void func_02067d04(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern BOOL func_02006a30(const VecFx32 *a, VecFx32 *b);

#define FX_MUL(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))

static inline void VecSet(VecFx32 *v, fx32 x, fx32 y, fx32 z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline BOOL SafeNormalize(VecFx32 *v)
{
    BOOL ok;
    if ((fx64)v->x * v->x + (fx64)v->y * v->y + (fx64)v->z * v->z < data_02126728) {
        ok = FALSE;
    } else {
        ok = func_02006a30(v, v);
    }
    return ok;
}

BOOL func_020c6578(Obj *obj, const VecFx32 *ext, const fx32 *size, VecFx32 *move, MtxFx43 *out)
{
    VecFx32 pos;
    MtxFx43 mtx;
    MtxFx33 scl;
    VecFx32 up;
    VecFx32 down;
    MtxFx33 rows;
    MtxFx33 res;
    VecFx32 axes[6];
    VecFx32 offs[6];
    fx32 t;
    s32 i;
    s32 idx;
    fx32 minY;
    fx32 push;

    pos = obj->pos;
    mtx = obj->mtx;
    push = 0;
    idx = -1;
    minY = 0x3e8000;
    scl._00 = ext->x;
    scl._01 = 0;
    scl._02 = 0;
    scl._11 = ext->y;
    scl._10 = 0;
    scl._12 = 0;
    scl._22 = ext->z;
    scl._20 = 0;
    scl._21 = 0;
    func_01ff8058((VecFx32 *)&scl._00, &mtx, &axes[0]);
    func_01ff8058((VecFx32 *)&scl._10, &mtx, &axes[2]);
    func_01ff8058((VecFx32 *)&scl._20, &mtx, &axes[4]);
    axes[1].x = -axes[0].x;
    axes[1].y = -axes[0].y;
    axes[1].z = -axes[0].z;
    axes[3].x = -axes[2].x;
    axes[3].y = -axes[2].y;
    axes[3].z = -axes[2].z;
    axes[5].x = -axes[4].x;
    axes[5].y = -axes[4].y;
    axes[5].z = -axes[4].z;
    if (size != NULL) {
        fx32 s;
        s = size[0];
        offs[0].x = FX_MUL(axes[0].x, s);
        offs[0].y = FX_MUL(axes[0].y, s);
        offs[0].z = FX_MUL(axes[0].z, s);
        s = size[1];
        offs[1].x = FX_MUL(axes[1].x, s);
        offs[1].y = FX_MUL(axes[1].y, s);
        offs[1].z = FX_MUL(axes[1].z, s);
        s = size[2];
        offs[2].x = FX_MUL(axes[2].x, s);
        offs[2].y = FX_MUL(axes[2].y, s);
        offs[2].z = FX_MUL(axes[2].z, s);
        s = size[3];
        offs[3].x = FX_MUL(axes[3].x, s);
        offs[3].y = FX_MUL(axes[3].y, s);
        offs[3].z = FX_MUL(axes[3].z, s);
        s = size[4];
        offs[4].x = FX_MUL(axes[4].x, s);
        offs[4].y = FX_MUL(axes[4].y, s);
        offs[4].z = FX_MUL(axes[4].z, s);
        s = size[5];
        offs[5].x = FX_MUL(axes[5].x, s);
        offs[5].y = FX_MUL(axes[5].y, s);
        offs[5].z = FX_MUL(axes[5].z, s);
    } else {
        fx32 s;
        s = func_02067898(FX_MUL(ext->y, ext->z), ext->x);
        offs[0].x = FX_MUL(axes[0].x, s);
        offs[0].y = FX_MUL(axes[0].y, s);
        offs[0].z = FX_MUL(axes[0].z, s);
        s = func_02067898(FX_MUL(ext->z, ext->x), ext->y);
        offs[2].x = FX_MUL(axes[2].x, s);
        offs[2].y = FX_MUL(axes[2].y, s);
        offs[2].z = FX_MUL(axes[2].z, s);
        s = func_02067898(FX_MUL(ext->x, ext->y), ext->z);
        offs[4].x = FX_MUL(axes[4].x, s);
        offs[4].y = FX_MUL(axes[4].y, s);
        offs[4].z = FX_MUL(axes[4].z, s);
        offs[1].x = -offs[0].x;
        offs[1].y = -offs[0].y;
        offs[1].z = -offs[0].z;
        offs[3].x = -offs[2].x;
        offs[3].y = -offs[2].y;
        offs[3].z = -offs[2].z;
        offs[5].x = -offs[4].x;
        offs[5].y = -offs[4].y;
        offs[5].z = -offs[4].z;
    }
    for (i = 0; i < 6; i++) {
        if (axes[i].y < minY) {
            fx32 d;
            minY = axes[i].y;
            d = pos.y + axes[i].y;
            if (d < 0) {
                idx = i;
                push = -d;
            }
        }
    }
    move->y += push;
    if (idx >= 0) {
        minY = 0x2710000;
        for (i = 0; i < 6; i++) {
            if (offs[i].y < minY) {
                idx = i;
                minY = offs[i].y;
            }
        }
    }
    if (idx >= 0) {
    up = data_02142b70;
    down = data_02142b7c;
    t = (func_02067898(func_02067df0(&axes[idx], &up), func_02067c30(&axes[idx])) >> 3) + 0xcc;
    VecSet((VecFx32 *)&rows._00, obj->mtx._00, obj->mtx._01, obj->mtx._02);
    VecSet((VecFx32 *)&rows._10, obj->mtx._10, obj->mtx._11, obj->mtx._12);
    VecSet((VecFx32 *)&rows._20, obj->mtx._20, obj->mtx._21, obj->mtx._22);
    if (t > 0x1000) {
        t = 0x1000;
    }
    switch (idx) {
    case 0:
        res._00 = rows._00 + FX_MUL(t, up.x - rows._00);
        res._01 = rows._01 + FX_MUL(t, up.y - rows._01);
        res._02 = rows._02 + FX_MUL(t, up.z - rows._02);
        break;
    case 1:
        res._00 = rows._00 + FX_MUL(t, down.x - rows._00);
        res._01 = rows._01 + FX_MUL(t, down.y - rows._01);
        res._02 = rows._02 + FX_MUL(t, down.z - rows._02);
        break;
    case 2:
        res._10 = rows._10 + FX_MUL(t, up.x - rows._10);
        res._11 = rows._11 + FX_MUL(t, up.y - rows._11);
        res._12 = rows._12 + FX_MUL(t, up.z - rows._12);
        break;
    case 3:
        res._10 = rows._10 + FX_MUL(t, down.x - rows._10);
        res._11 = rows._11 + FX_MUL(t, down.y - rows._11);
        res._12 = rows._12 + FX_MUL(t, down.z - rows._12);
        break;
    case 4:
        res._20 = rows._20 + FX_MUL(t, up.x - rows._20);
        res._21 = rows._21 + FX_MUL(t, up.y - rows._21);
        res._22 = rows._22 + FX_MUL(t, up.z - rows._22);
        break;
    case 5:
        res._20 = rows._20 + FX_MUL(t, down.x - rows._20);
        res._21 = rows._21 + FX_MUL(t, down.y - rows._21);
        res._22 = rows._22 + FX_MUL(t, down.z - rows._22);
        break;
    }
    switch (idx) {
    case 0:
    case 1:
        func_02067af0((VecFx32 *)&res._00, (VecFx32 *)&res._00);
        func_02067d04((VecFx32 *)&res._00, (VecFx32 *)&rows._10, (VecFx32 *)&res._20);
        if (!SafeNormalize((VecFx32 *)&res._20)) {
            if (res._00 == 0 && res._01 == 0) {
                VecSet((VecFx32 *)&res._20, 0x1000, 0, 0);
            } else {
                VecSet((VecFx32 *)&res._20, res._01, -res._00, 0);
                func_02067af0((VecFx32 *)&res._20, (VecFx32 *)&res._20);
            }
        }
        func_02067d04((VecFx32 *)&res._20, (VecFx32 *)&res._00, (VecFx32 *)&res._10);
        break;
    case 2:
    case 3:
        func_02067af0((VecFx32 *)&res._10, (VecFx32 *)&res._10);
        func_02067d04((VecFx32 *)&res._10, (VecFx32 *)&rows._20, (VecFx32 *)&res._00);
        if (!SafeNormalize((VecFx32 *)&res._00)) {
            if (res._10 == 0 && res._11 == 0) {
                VecSet((VecFx32 *)&res._00, 0x1000, 0, 0);
            } else {
                VecSet((VecFx32 *)&res._00, res._11, -res._10, 0);
                func_02067af0((VecFx32 *)&res._00, (VecFx32 *)&res._00);
            }
        }
        func_02067d04((VecFx32 *)&res._00, (VecFx32 *)&res._10, (VecFx32 *)&res._20);
        break;
    case 4:
    case 5:
        func_02067af0((VecFx32 *)&res._20, (VecFx32 *)&res._20);
        func_02067d04((VecFx32 *)&res._20, (VecFx32 *)&rows._00, (VecFx32 *)&res._10);
        if (!SafeNormalize((VecFx32 *)&res._10)) {
            if (res._20 == 0 && res._21 == 0) {
                VecSet((VecFx32 *)&res._10, 0x1000, 0, 0);
            } else {
                VecSet((VecFx32 *)&res._10, res._21, -res._20, 0);
                func_02067af0((VecFx32 *)&res._10, (VecFx32 *)&res._10);
            }
        }
        func_02067d04((VecFx32 *)&res._10, (VecFx32 *)&res._20, (VecFx32 *)&res._00);
        break;
    }
    out->_00 = res._00;
    out->_01 = res._01;
    out->_02 = res._02;
    out->_10 = res._10;
    out->_11 = res._11;
    out->_12 = res._12;
    out->_20 = res._20;
    out->_21 = res._21;
    out->_22 = res._22;
    out->_30 = 0;
    out->_31 = 0;
    out->_32 = 0;
    return TRUE;
    }
    return FALSE;
}
