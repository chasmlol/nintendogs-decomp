#pragma opt_propagation off
#include "ctx.h"
#ifndef C_COMMON_H
#define C_COMMON_H

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

#define FX_Mul(a, b) ((fx32)((((fx64)(a) * (fx64)(b)) + 0x800) >> 12))

typedef struct {
    u8 pad00[8];
    fx32 f8;
} Param;

typedef struct {
    fx32 f0;          /* 0x00 */
    fx32 f4;          /* 0x04 */
    u16 f8;           /* 0x08 */
    u16 fa;
    fx32 fc;          /* 0x0c */
    u8 pad10[4];
    Param *f14;       /* 0x14 */
} Work;

typedef struct {
    u8 pad00[0x9c];
    s16 f9c;          /* 0x9c */
    u16 pad9e;
    u16 fa0;          /* 0xa0 */
    u8 pada2[0xe];
    VecFx32 fb0;      /* 0xb0 */
    VecFx32 fbc;      /* 0xbc */
    VecFx32 fc8;      /* 0xc8 */
    VecFx32 fd4;      /* 0xd4 */
    VecFx32 fe0;      /* 0xe0 */
    u8 padec[0xc];
    fx32 ff8;         /* 0xf8 */
    VecFx32 ffc;      /* 0xfc */
    VecFx32 f108;     /* 0x108 */
    u8 pad114[0x190 - 0x114];
    u8 f190[0x214 - 0x190];   /* 0x190 */
    Work *f214;       /* 0x214 */
} Obj;

typedef struct {
    u8 pad00[0x24];
    s32 f24;
} Game;

typedef struct {
    u8 pad00[0x84];
    u16 f84;
    s16 f86;
    u8 pad88[0xc];
    s32 f94;
    s32 f98;
} Sys;

extern Game *data_02159468;
extern Sys *data_02159444;
extern fx32 data_021429a0;
extern fx32 data_021429c4;
extern fx32 data_021429d4;
extern fx32 data_0215947c;
extern fx32 data_021429d8;
extern fx32 data_021429e8;
extern fx32 data_021429ec;
extern fx32 data_021429e0;
extern fx32 data_021429e4;
extern fx32 data_02159480;
extern fx32 data_021429dc;
extern fx32 data_02142a00;
extern fx32 data_02142a18;
extern fx32 data_02142a1c;
extern fx32 data_02142a20;
extern fx32 data_02142a24;
extern fx32 data_02142a28;

extern void *func_02044ca0(s16 a);
extern void func_020c5fbc(Obj *p);
extern BOOL func_020a7054(void);
extern void func_020bfdb8(void *dog, VecFx32 *pos, VecFx32 *a, VecFx32 *b, VecFx32 *c);
extern fx32 func_020c4500(fx32 a);
extern void func_020bfc98(VecFx32 *a, VecFx32 *b, VecFx32 *c, fx32 t1, fx32 t2, fx32 x, fx32 y, fx32 z, VecFx32 *out);
extern fx32 func_0206782c(fx32 a);
extern void func_020c42e8(Obj *p, VecFx32 *a, VecFx32 *b, fx32 t1, fx32 t2);
extern fx32 func_02067898(fx32 a, fx32 b);
extern fx32 func_02067c30(VecFx32 *a);
extern void func_0209d430(void *a, s32 b, fx32 c);
extern void func_02044b58(void);
extern void func_020be4b4(Obj *p, VecFx32 *a, fx32 b);
extern void func_020ab02c(void *dog, VecFx32 *a, VecFx32 *b);
extern void func_01ff832c(fx32 a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
extern void func_02006a30(VecFx32 *a, VecFx32 *b);
extern void func_02067d04(VecFx32 *a, VecFx32 *b, VecFx32 *c);
extern s32 func_020d9024(s32 a);
extern void *func_01ffdb08(s32 a);
extern BOOL func_02034208(void *a);
extern s32 func_020c8164(u16 a, fx32 b);
extern void func_020c607c(Obj *p, fx32 r, VecFx32 *a, VecFx32 *b, s32 c, void *onAny, void *onMove, void *onMtx, void *onEnd, void *onEach);
extern void func_020c6300(Obj *p, fx32 r, VecFx32 *a, VecFx32 *b, s32 c, void *onAny, void *onMove, void *onMtx, void *onEnd, void *onEach);
extern void func_020c2d64(void);
extern void func_020c2cb4(void);
extern void func_020c2c24(void);
extern void func_020c2b4c(void);


static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}
#endif


static inline void UC3(Obj *p, void *dog, VecFx32 *a, VecFx32 *b, VecFx32 *c, fx32 *pt1, fx32 *pt2, fx32 xMin, fx32 yMin, fx32 zMin, fx32 xMax, fx32 yMax, fx32 zMax)
{
    fx32 t1;
    fx32 t2;
    s32 sx;
    s32 sy;
    fx32 dx, dy, dz;

    func_020bfdb8(dog, &p->fbc, a, b, c);
    sx = data_02159444->f94;
    sy = data_02159444->f98;
    t1 = func_020c4500(sx << 12);
    t2 = func_020c4500(sy << 12);
    dx = xMax - xMin;
    dy = yMax - yMin;
    dz = zMax - zMin;
    func_020bfc98(a, b, c, t1, t2, xMin + FX_Mul(t1, dx), yMin + FX_Mul(t2, dy), zMin + FX_Mul(t2, dz), &p->fb0);
    *pt1 = t1;
    *pt2 = t2;
}

static inline void UCF(Obj *p, void *dog, VecFx32 *a, VecFx32 *b, VecFx32 *c, fx32 *pt1, fx32 *pt2, fx32 x, fx32 y, fx32 z)
{
    UC3(p, dog, a, b, c, pt1, pt2, x, y, z, x, y, z);
}


#define ARMSX if (func_020a7054()) { UC3(p, dog, &ca, &cb, &cc, &t1, &t2, data_021429e4, data_021429e0, data_021429dc, data_021429ec, data_02159480, data_021429e8); } else { fx32 x = data_021429d8, y = data_0215947c, z = data_021429d4; UC3(p, dog, &da, &db, &dc, &t1, &t2, x, y, z, x, y, z); }
#define FC2 \
    if (func_020a7054()) { \
        if (len < data_02142a1c) { \
            w->fc = data_02142a24; \
        } else if (len < data_02142a18) { \
            fx32 range = data_02142a18 - data_02142a1c; \
            if (range == 0) { \
                w->fc = data_02142a18; \
            } else { \
                fx32 r = func_02067898(len - data_02142a1c, range); \
                w->fc = data_02142a24 + FX_Mul(r, data_02142a28 - data_02142a24); \
            } \
        } else { \
            w->fc = data_02142a28; \
        } \
    } else { \
        w->fc = data_02142a20; \
    }

#define DECLS VecFx32 ca, cb, cc, da, db, dc;
#define ARMS if (func_020a7054()) { fx32 xMin, yMin, zMin, xMax, yMax, zMax; zMax = data_021429e8; yMax = data_02159480; xMax = data_021429ec; zMin = data_021429dc; yMin = data_021429e0; xMin = data_021429e4; UC3(p, dog, &ca, &cb, &cc, &t1, &t2, xMin, yMin, zMin, xMax, yMax, zMax); } else { fx32 z = data_021429d4, y = data_0215947c, x = data_021429d8; UC3(p, dog, &da, &db, &dc, &t1, &t2, x, y, z, x, y, z); }
#define FC_BLOCK FC2
#define TAILPRE fx32 bx = p->fb0.x, bz = p->fb0.z;
#define TAILSQ func_0206782c(FX_Mul(bx, bx) + FX_Mul(bz, bz))
/* function body template: define FN, ARMS, and optionally TAILSQ, DECLS before including */
#ifndef TAILSQ
#define TAILSQ func_0206782c(FX_Mul(p->fb0.x, p->fb0.x) + FX_Mul(p->fb0.z, p->fb0.z))
#endif
#ifndef TAILPRE
#define TAILPRE
#endif
#ifndef DECLS
#define DECLS
#endif
#ifndef FC_BLOCK
#define FC_BLOCK \
    if (func_020a7054()) { \
        if (len < data_02142a1c) { \
            w->fc = data_02142a24; \
        } else if (len < data_02142a18) { \
            fx32 range = data_02142a18 - data_02142a1c; \
            if (range == 0) { \
                w->fc = data_02142a18; \
            } else { \
                w->fc = data_02142a24 + FX_Mul(func_02067898(len - data_02142a1c, range), data_02142a28 - data_02142a24); \
            } \
        } else { \
            w->fc = data_02142a28; \
        } \
    } else { \
        w->fc = data_02142a20; \
    }
#endif

void func_020c240c(Obj *p)
{
    void *dog;
    Work *w;
    fx32 len;
    fx32 t1;
    fx32 t2;
    VecFx32 v44;
    VecFx32 v56;
    VecFx32 v68;
    VecFx32 v80;
    VecFx32 up;
    VecFx32 xAxis;
    VecFx32 zAxis;
    VecFx32 v128;
    DECLS

    dog = func_02044ca0(p->f9c);
    w = p->f214;
    if (data_02159468->f24 != 0) {
        func_020c5fbc(p);
        return;
    }
    if (data_02159444->f84 & 1) {
        fx32 t;
        fx32 upy;
        void *o;

        func_020bfdb8(dog, &p->fbc, &v44, &v56, &v68);
        func_020be4b4(p, &v80, 0x7000);
        func_020ab02c(dog, &p->fbc, &v80);
        t = func_02067898((data_02159444->f86 << 12) / 127, data_021429a0);
        if (t > 0x1000) {
            t = 0x1000;
        }
        if (t < -0x1000) {
            t = -0x1000;
        }
        up.x = 0;
        up.y = 0x1000;
        up.z = 0;
        func_01ff832c(FX_Mul(data_021429c4, t), &v44, &up, &up);
        func_01ff832c(0x1000, &v56, &up, &up);
        func_02006a30(&up, &up);
        VEC_Set(&xAxis, p->fc8.x, p->fc8.y, p->fc8.z);
        VEC_Set(&zAxis, p->fe0.x, p->fe0.y, p->fe0.z);
        func_02067d04(&xAxis, &up, &zAxis);
        func_02006a30(&zAxis, &zAxis);
        func_02067d04(&up, &zAxis, &xAxis);
        func_02006a30(&xAxis, &xAxis);
        p->fc8.x = xAxis.x;
        p->fc8.y = xAxis.y;
        p->fc8.z = xAxis.z;
        p->fd4.x = up.x;
        p->fd4.y = up.y;
        p->fd4.z = up.z;
        p->fe0.x = zAxis.x;
        p->fe0.y = zAxis.y;
        p->fe0.z = zAxis.z;
        len = func_0206782c(FX_Mul(up.x, up.x) + FX_Mul(up.z, up.z));
        upy = up.y;
        if (len > 0x199) {
            w->f4 = func_02067898(upy, len);
        } else {
            w->f4 = func_0206782c(0x63000);
        }
        o = func_01ffdb08(func_020d9024(-1));
        if (o != NULL && func_02034208(o)) {
            func_020c607c(p, p->ff8, &p->ffc, &p->f108, func_020c8164(p->fa0, p->ff8), func_020c2d64, NULL,
                          func_020c2cb4, func_020c2c24, func_020c2b4c);
        } else {
            func_020c6300(p, p->ff8, &p->ffc, &p->f108, func_020c8164(p->fa0, p->ff8), func_020c2d64, NULL,
                          func_020c2cb4, func_020c2c24, func_020c2b4c);
        }
        return;
    }
    ARMS
    len = func_0206782c(FX_Mul(t1, t1) + FX_Mul(t2, t2));
    VEC_Set(&v128, p->fd4.x, p->fd4.y, p->fd4.z);
    func_020c42e8(p, &p->fb0, &v128, t1, t2);
    FC_BLOCK
    { TAILPRE
    w->f0 = FX_Mul(data_02142a00, func_02067898(TAILSQ, w->f14->f8)); }
    w->f8 = 0;
    func_0209d430(p->f190, 4, func_02067c30(&p->fb0));
    func_02044b58();
    func_020c5fbc(p);
}
