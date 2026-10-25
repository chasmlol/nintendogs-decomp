#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 x; s32 y; s32 z; } VecFx32;
typedef struct { u32 w0; u32 w1; u32 w2; } Anim;
typedef struct { u32 seed; } RandState;
typedef struct {
    u8 pad0[0x91];
    u8 f91[2]; /* 0x91 */
    u8 f93; /* 0x93 */
    u8 pad94[0x3];
    u8 f97; /* 0x97 */
    u8 pad98[0x17];
    u8 faf; /* 0xaf */
    u8 padb0[0x4c];
    u16 ffc; /* 0xfc */
    u8 padfe[0x30];
    u16 f12e; /* 0x12e */
    u8 pad130[0x24];
    s16 f154; /* 0x154 */
    u8 pad156[0x10a];
    s32 f260; /* 0x260 */
    u8 pad264[0x4];
    s32 f268; /* 0x268 */
    u8 pad26c[0xc];
    VecFx32 v278; /* 0x278 */
    u8 pad284[0x1c];
    VecFx32 v2a0; /* 0x2a0 */
    u8 pad2ac[0xc];
    s32 f2b8; /* 0x2b8 */
    u8 pad2bc[0x4];
    s32 f2c0; /* 0x2c0 */
    VecFx32 v2c4; /* 0x2c4 */
    u8 pad2d0[0xe4];
    Anim a3b4; /* 0x3b4 */
    u8 pad3c0[0x30];
    Anim a3f0[2]; /* 0x3f0 */
} Dog;
typedef struct { u8 pad[0xea]; s16 fea; u8 pad2[0x484 - 0xec]; s32 f484; } Obj;

extern RandState *data_0214f464;

Obj *func_02036578(Dog *p);
void func_02027690(Obj *o, VecFx32 *v);
void func_0202767c(Obj *o, VecFx32 *v);
void func_02027668(Obj *o, VecFx32 *v);
void func_02027618(Obj *o, VecFx32 *v);
void func_01ff832c(s32 a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
s32 func_02051540(Obj *o, Dog *p);
void func_02032adc(Obj *o, Anim *a, s32 v);
void func_02033fb8(Dog *p);
s32 func_02028130(Obj *o);
void func_02039448(Dog *p);
void func_02037450(Dog *p, s32 v);
s32 func_02035584(Dog *p, s32 v);
void func_0203e8cc(Dog *p, s32 a, s16 b);
void func_0203e908(Dog *p, s32 v);
s32 func_020289d0(Dog *p, s32 a, s32 b);
s32 func_02028124(Dog *p);
s32 func_02050dc4(Dog *p, Obj *o, s32 v);
s32 func_02027710(Dog *p, Obj *o);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline u16 Rand(void)
{
    RandState *r = data_0214f464;
    u32 v = r->seed * 0x10dcd + 1;
    r->seed = v;
    return (u16)v;
}

static inline u16 RandMax(u16 max)
{
    return (u16)(((u32)Rand() * max) >> 16);
}

static inline BOOL IsRangeA(s16 v)
{
    if (v >= 0x295 && v <= 0x299)
        return TRUE;
    return FALSE;
}

static inline BOOL IsRangeB(s16 v)
{
    if (v == 0x2ab || v == 0x2b5 || v == 0x2bf)
        return FALSE;
    if (v >= 0x2a1 && v <= 0x2cc)
        return TRUE;
    return FALSE;
}

static inline s32 Finish(Dog *p1, s32 next)
{
    Obj *o = func_02036578(p1);
    u16 hp = p1->ffc;
    s32 r;

    if (hp > 0x1c20) {
        func_0203e908(p1, next);
        return 1;
    }
    if (o == NULL) {
        func_0203e908(p1, next);
        return 1;
    }
    if (hp == 250) {
        return func_02050dc4(p1, o, next);
    }
    if (hp == 1000) {
        r = func_02027710(p1, o);
        switch (r) {
        case 1:
            return 0;
        case -1:
        case 0:
            func_0203e908(p1, next);
            return 1;
        }
        return 0;
    }
    return 0;
}


BOOL func_02049304(Dog *p1, u32 *p2, s32 p3, s16 p4, s16 p5, s32 next)
{
    Obj *obj;
    s32 dist;
    s32 dir;
    s32 sel;
    s32 a1;
    s32 dx;
    s32 a1_w5;
    s32 a2;
    s32 a3;
    s32 b;
    VecFx32 va;
    VecFx32 vb;
    VecFx32 vc;
    VecFx32 vd;

    obj = func_02036578(p1);
    dist = 0;
    if (obj != NULL) {
        s32 s;

        func_02027690(obj, &va);
        func_0202767c(obj, &vb);
        func_02027668(obj, &vc);
        func_01ff832c(0x5000, &va, &p1->v2a0, &p1->v278);
        if (vb.x * (vc.x - p1->v2a0.x) + vb.z * (vc.z - p1->v2a0.z) > 0) {
            func_01ff832c(0x4000, &vb, &p1->v278, &p1->v278);
            dir = 1;
        } else {
            func_01ff832c(-0x4000, &vb, &p1->v278, &p1->v278);
            dir = 0;
        }
        sel = func_02051540(obj, p1);
        if (sel != 4) {
            if (RandMax(2) != 0) {
                next = 0x29d;
            }
        }
        switch (sel) {
        case 4:
            p1->faf = 4;
            a1 = (s16)(dir + 15);
            a2 = (s16)(dir + 17);
            p1->f93 = 22;
            a3 = 10;
            break;
        case 3:
            p1->faf = 4;
            a1 = (s16)(dir + 11);
            a2 = (s16)(dir + 13);
            p1->f93 = 21;
            a3 = 1;
            break;
        case 1:
            p1->faf = 4;
            a1 = (s16)(dir + 2);
            a2 = (s16)(dir + 4);
            p1->f93 = 21;
            a3 = 0;
            break;
        case 2:
            p1->faf = 4;
            a1 = (s16)(dir + 6);
            a2 = (s16)(dir + 8);
            p1->f93 = 21;
            a3 = 0;
            break;
        case 0:
            p1->faf = 3;
            a1 = (s16)(dir + 11);
            a2 = (s16)(dir + 13);
            p1->f93 = 21;
            a3 = 0;
            break;
        }
        p1->f91[dir] = 4;
        p1->f91[1 - dir] = 0;
        func_02032adc(obj, &p1->a3f0[dir], a2);
        func_02032adc(obj, &p1->a3b4, a1);
        *p2 = p1->a3b4.w1;
        func_02033fb8(p1);
        func_02032adc(obj, &p1->a3b4, a3);
        func_02027618(obj, &vd);
        dx = vd.x - p1->v2c4.x;
        a1_w5 = vd.z - p1->v2c4.z;
        switch (a3) {
        case 1:
            a3 = FX_Mul(func_02028130(obj), -0x600);
            break;
        default:
            a3 = FX_Mul(func_02028130(obj), -0x200);
            break;
        }
        s = FX_Mul(func_02028130(obj), 0xa00);
        if (dir == 0) {
            dx += FX_Mul(va.x, a3);
            a1_w5 += FX_Mul(va.z, a3);
            dx += FX_Mul(vb.x, s);
            a1_w5 += FX_Mul(vb.z, s);
        } else {
            dx += FX_Mul(va.x, a3);
            a1_w5 += FX_Mul(va.z, a3);
            dx -= FX_Mul(vb.x, s);
            a1_w5 -= FX_Mul(vb.z, s);
        }
        p1->f260 += FX_Mul(dx, 0xcd);
        p1->f268 += FX_Mul(a1_w5, 0xcd);
        if (p3 == 0) {
            dist = FX_Mul(dx, dx) + FX_Mul(a1_w5, a1_w5);
        }
        func_02039448(p1);
        func_02037450(p1, 0x300);
        switch (p1->f154) {
        case 34:
        case 35:
        case 36:
            if (func_02035584(p1, 1) != 0) {
                func_0203e8cc(p1, 1, 0);
            }
            break;
        case 0:
            if (RandMax(100) == 0) {
                func_0203e8cc(p1, 1, (s16)(34 + RandMax(2)));
            }
            break;
        }
        if (RandMax(80) == 0) {
            if (dir == 1) {
                p1->f12e = 0xf000;
            } else {
                p1->f12e = 0x1000;
            }
            p1->f12e += (u16)((RandMax(7) << 11) + 0xe800);
        }
        {
            s32 lim = FX_Mul(func_02028124(p1), 0x10);
            s32 tz = p1->f2c0;
            s32 tx = p1->f2b8;
            if (tz <= 0) {
                tz = -tz;
            }
            if (tx <= 0) {
                tx = -tx;
            }
            if (tx + tz > lim) {
                func_0203e8cc(p1, 0, p5);
            } else {
                func_0203e8cc(p1, 0, p4);
            }
        }
    }
    {
        u16 hp = p1->ffc;
        if (obj == NULL)
            goto def;
        switch ((s8)obj->f484) {
        case 2:
            b = (hp < 100) ? 3 : 4;
            break;
        case 1:
            b = (hp < 500) ? 5 : 6;
            break;
        case 0:
            b = 1;
            break;
        default:
        def:
            b = 1;
            break;
        }
        p1->f97 = b;
    }
    if (func_020289d0(p1, 15, 0) != 0) {
        func_0203e908(p1, next);
        return TRUE;
    }
    if (obj == NULL || (!IsRangeA(obj->fea) && !IsRangeB(obj->fea))) {
        func_0203e908(p1, next);
        return TRUE;
    }
    if (dist > FX_Mul(func_02028124(p1), 0x2008)) {
        func_0203e908(p1, next);
        return TRUE;
    }
    if (obj->fea == 0x2a9 && RandMax(100) == 0) {
        func_0203e908(p1, 0x29d);
        return TRUE;
    }
    return Finish(p1, next) != 0;
}
