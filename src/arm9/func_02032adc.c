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
    fx32 _30, _31, _32;
} MtxFx43;

typedef struct {
    u8 pad0[8];
    fx32 scale;
} Sub;

typedef struct {
    u8 pad0[0x18c];
    VecFx32 v18c;
    u8 pad198[0x1a4 - 0x198];
    VecFx32 v1a4;
    u8 pad1b0[0x1e0 - 0x1b0];
    MtxFx43 mtx;
    u8 pad210[0x2d0 - 0x210];
    VecFx32 v2d0;
    VecFx32 v2dc;
    u8 pad2e8[0x9e8 - 0x2e8];
    Sub *sub;
} Obj;

extern void func_020271e8(Obj *obj, MtxFx43 *m, s32 joint);
extern void func_01ff810c(const MtxFx43 *a, const MtxFx43 *b, MtxFx43 *ab);
extern void func_01ff832c(fx32 a, const VecFx32 *v, const VecFx32 *b, VecFx32 *out);
extern BOOL func_02051764(Obj *obj);

#define FX_MUL(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))

static inline void VecSet(VecFx32 *v, fx32 x, fx32 y, fx32 z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

void func_02032adc(Obj *obj, VecFx32 *out, s32 type)
{
    switch (type) {
    case 0: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        func_020271e8(obj, &m, 12);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0x802, &x, out, out);
        func_01ff832c(0x1cd4, &y, out, out);
        out->y += FX_MUL(obj->sub->scale, 0xcd0);
        return;
    }
    case 1: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        func_020271e8(obj, &m, 12);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0xcd0, &x, out, out);
        func_01ff832c(0x1338, &y, out, out);
        out->y += FX_MUL(obj->sub->scale, 0x1338);
        return;
    }
    case 2: {
        fx32 t;
        VecFx32 v;
        t = FX_MUL(obj->sub->scale, 0xe6a);
        *out = obj->v2dc;
        v = obj->v18c;
        func_01ff832c(t >> 1, &v, out, out);
        if (func_02051764(obj)) {
            v = obj->v1a4;
            func_01ff832c(-(t >> 3), &v, out, out);
        }
        out->y += t;
        return;
    }
    case 3: {
        fx32 t;
        VecFx32 v;
        t = FX_MUL(obj->sub->scale, 0xe6a);
        *out = obj->v2dc;
        v = obj->v18c;
        func_01ff832c(-(t >> 1), &v, out, out);
        if (func_02051764(obj)) {
            v = obj->v1a4;
            func_01ff832c(-(t >> 3), &v, out, out);
        }
        out->y += t;
        return;
    }
    case 4: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 12);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0x4ce, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(-0xcd, &z, out, out);
        return;
    }
    case 5: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 12);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0x4ce, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(0xcd, &z, out, out);
        return;
    }
    case 6: {
        fx32 t;
        VecFx32 v;
        t = FX_MUL(obj->sub->scale, 0xcd0);
        *out = obj->v2d0;
        v = obj->v18c;
        func_01ff832c(t >> 1, &v, out, out);
        if (func_02051764(obj)) {
            v = obj->v1a4;
            func_01ff832c(-(t >> 2), &v, out, out);
        }
        v = obj->v1a4;
        func_01ff832c(-(t >> 1), &v, out, out);
        out->y += t;
        return;
    }
    case 7: {
        fx32 t;
        VecFx32 v;
        t = FX_MUL(obj->sub->scale, 0xcd0);
        *out = obj->v2d0;
        v = obj->v18c;
        func_01ff832c(-(t >> 1), &v, out, out);
        if (func_02051764(obj)) {
            v = obj->v1a4;
            func_01ff832c(-(t >> 2), &v, out, out);
        }
        v = obj->v1a4;
        func_01ff832c(-(t >> 1), &v, out, out);
        out->y += t;
        return;
    }
    case 8: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 11);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0xcd, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(-0x802, &z, out, out);
        return;
    }
    case 9: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 11);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0xcd, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(0x802, &z, out, out);
        return;
    }
    case 10: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0x802, &x, out, out);
        func_01ff832c(0x1cd4, &y, out, out);
        return;
    }
    case 11: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0x1cd4, &x, out, out);
        func_01ff832c(0x4ce, &y, out, out);
        func_01ff832c(-0x4ce, &z, out, out);
        if (func_02051764(obj)) {
            out->y += FX_MUL(obj->sub->scale, 0x1cd4);
            return;
        }
        out->y += FX_MUL(obj->sub->scale, 0x166c);
        return;
    }
    case 12: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0x1cd4, &x, out, out);
        func_01ff832c(0x4ce, &y, out, out);
        func_01ff832c(0x4ce, &z, out, out);
        if (func_02051764(obj)) {
            out->y += FX_MUL(obj->sub->scale, 0x1cd4);
            return;
        }
        out->y += FX_MUL(obj->sub->scale, 0x166c);
        return;
    }
    case 13: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0x1338, &x, out, out);
        func_01ff832c(-0x334, &y, out, out);
        func_01ff832c(0xc03, &z, out, out);
        return;
    }
    case 14: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0x1338, &x, out, out);
        func_01ff832c(-0x334, &y, out, out);
        func_01ff832c(-0xc03, &z, out, out);
        return;
    }
    case 15: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0x1806, &x, out, out);
        func_01ff832c(0x19a, &y, out, out);
        func_01ff832c(0xb36, &z, out, out);
        return;
    }
    case 16: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0x1806, &x, out, out);
        func_01ff832c(0x19a, &y, out, out);
        func_01ff832c(-0xb36, &z, out, out);
        return;
    }
    case 17: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0x1338, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(0xc03, &z, out, out);
        return;
    }
    case 18: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 18);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(-0x1338, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(-0xc03, &z, out, out);
        return;
    }
    case 19: {
        fx32 t;
        MtxFx43 m;
        VecFx32 v;
        t = FX_MUL(obj->sub->scale, 0x668);
        func_020271e8(obj, &m, 21);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(out, m._30, m._31, m._32);
        v = obj->v18c;
        func_01ff832c(t >> 1, &v, out, out);
        out->y += t;
        return;
    }
    case 20: {
        fx32 t;
        MtxFx43 m;
        VecFx32 v;
        t = FX_MUL(obj->sub->scale, 0x668);
        func_020271e8(obj, &m, 25);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(out, m._30, m._31, m._32);
        v = obj->v18c;
        func_01ff832c(-(t >> 1), &v, out, out);
        out->y += t;
        return;
    }
    case 21: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 21);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0x4ce, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(-0xcd, &z, out, out);
        return;
    }
    case 22: {
        MtxFx43 m;
        VecFx32 x;
        VecFx32 y;
        VecFx32 z;
        func_020271e8(obj, &m, 25);
        func_01ff810c(&m, &obj->mtx, &m);
        VecSet(&x, m._00, m._01, m._02);
        VecSet(&y, m._10, m._11, m._12);
        VecSet(&z, m._20, m._21, m._22);
        VecSet(out, m._30, m._31, m._32);
        func_01ff832c(0x4ce, &x, out, out);
        func_01ff832c(-0x99c, &y, out, out);
        func_01ff832c(0xcd, &z, out, out);
        return;
    }
    }
}
