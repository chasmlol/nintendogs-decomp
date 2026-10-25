#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;

typedef struct {
    fx32 x, y, z;
} VecFx32;

typedef struct {
    s32 counter;    /* 0x0 */
    s32 level;      /* 0x4 */
    fx32 rate;      /* 0x8 */
    u16 phase;      /* 0xc */
} Work;

typedef struct {
    u8 pad0[0x24];
    VecFx32 scale;  /* 0x24 */
} Model;

typedef struct {
    u8 pad0[0x9c];
    s16 x9c;            /* 0x9c */
    u16 pad9e;
    u16 xa0;            /* 0xa0 */
    u8 pada2[0xac - 0xa2];
    fx32 xac;           /* 0xac */
    VecFx32 vel;        /* 0xb0 */
    VecFx32 pos;        /* 0xbc */
    VecFx32 right;      /* 0xc8 */
    VecFx32 up;         /* 0xd4 */
    VecFx32 front;      /* 0xe0 */
    u8 padec[0xf8 - 0xec];
    s32 xf8;            /* 0xf8 */
    VecFx32 xfc;        /* 0xfc */
    VecFx32 x108;       /* 0x108 */
    u8 pad114[0x18c - 0x114];
    Model *model;       /* 0x18c */
    u8 x190[0x214 - 0x190];
    Work *work;         /* 0x214 */
} Obj;

typedef struct {
    u16 trg;
    u16 cont;
} Pad;

extern Pad data_0214efdc;
extern void func_02044ca0(s16 a);
extern fx32 func_02067898(fx32 a, fx32 b);                                   /* FX_Div */
extern void func_01ff832c(fx32 a, VecFx32 *axis, VecFx32 *v, VecFx32 *out);
extern void func_02067af0(const VecFx32 *a, VecFx32 *b);                      /* VEC_Normalize */
extern void func_02067d04(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);    /* VEC_CrossProduct */
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);    /* VEC_Add */
extern s32 func_020c8164(u16 a, s32 b);
extern void func_020c6300(Obj *p, s32 a, VecFx32 *b, VecFx32 *c, ...);
extern fx32 func_0206782c(fx32 a);                                           /* FX_Sqrt */
extern void func_0209cef4(void *a, s32 b, fx32 c);
extern void func_020e79a0(void);
extern void func_020e78b0(void);
extern void func_020e789c(void);
extern void func_020e7874(void);

#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800) >> 12))

static inline u16 KeyHold(u16 key)
{
    return data_0214efdc.cont & key;
}

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

void func_020e71ec(Obj *p)
{
    VecFx32 right;
    VecFx32 up;
    VecFx32 front;
    VecFx32 d;
    Work *w;
    fx32 spd;
    fx32 turn;
    fx32 acc;
    fx32 len;
    fx32 k;

    w = p->work;
    func_02044ca0(p->x9c);
    spd = func_02067898(w->level << 12, 50 << 12);
    VEC_Set(&right, p->right.x, p->right.y, p->right.z);
    VEC_Set(&up, p->up.x, p->up.y, p->up.z);
    VEC_Set(&front, p->front.x, p->front.y, p->front.z);
    w->counter = (w->counter + 1) % 65535;
    if (KeyHold(1)) {
        if (w->level < 60) {
            w->level++;
        }
    } else if (w->level > 0 && w->counter % 2 == 0) {
        w->level--;
    }
    if (w->level > 50) {
        w->level = 50;
    }
    k = func_02067898(w->level << 12, 50 << 12);
    w->rate = FX_MUL(k, 0x2000);
    w->phase += w->rate;
    turn = FX_MUL(spd * 2, 41);
    if (turn > 41) {
        turn = 41;
    }
    if (KeyHold(0x40)) {
        func_01ff832c(-turn, &up, &front, &front);
    } else if (front.y < -20) {
        front.y += 20;
    }
    if (KeyHold(0x80)) {
        func_01ff832c(turn, &up, &front, &front);
    } else if (front.y > 20) {
        front.y -= 20;
    }
    if (front.y > 0x800 || front.y < -0x800) {
        VEC_Set(&front, p->front.x, p->front.y, p->front.z);
    }
    if (KeyHold(0x10)) {
        func_01ff832c(-turn * 2, &right, &front, &front);
    }
    if (KeyHold(0x20)) {
        func_01ff832c(turn << 1, &right, &front, &front);
    }

    acc = FX_MUL(spd, 6);
    p->vel.y += acc - FX_MUL(0x1000 - spd, 18);
    if (p->vel.y < 0) {
        fx32 *vy = &p->vel.y;
        *vy += acc;
        if (p->pos.y < 0x1000) {
            *vy += acc;
        }
        if (p->pos.y < 0x800) {
            p->vel.y += acc;
        }
    }
    {
        fx32 s = -FX_MUL(front.y, FX_MUL(spd, 10) << 2);
        d = front;
        d.y = 0;
        d.x = FX_MUL(d.x, s);
        d.y = FX_MUL(d.y, s);
        d.z = FX_MUL(d.z, s);
    }
    func_02067e68(&d, &p->vel, &p->vel);

    len = func_0206782c(FX_MUL(p->vel.x, p->vel.x) + FX_MUL(p->vel.z, p->vel.z));
    if (len > 492) {
        fx32 k = func_02067898(492, len);
        p->vel.x = FX_MUL(p->vel.x, k);
        p->vel.z = FX_MUL(p->vel.z, k);
    }
    {
        fx32 v = p->vel.x;
        if (v >> 6 > 0) {
            p->vel.x = v - (v >> 6);
        } else {
            if (v > 0) {
                p->vel.x = v - 1;
            }
            if (p->vel.x < 0) {
                p->vel.x++;
            }
        }
    }
    {
        fx32 v = p->vel.z;
        if (v >> 6 > 0) {
            p->vel.z = v - (v >> 6);
        } else {
            if (v > 0) {
                p->vel.z = v - 1;
            }
            if (p->vel.z < 0) {
                p->vel.z++;
            }
        }
    }
    if (p->vel.y > 328) {
        p->vel.y = 328;
    }
    func_02067af0(&front, &front);
    right.x = front.z;
    right.z = -front.x;
    func_02067af0(&right, &right);
    func_02067d04(&front, &right, &up);
    p->right.x = right.x;
    p->right.y = right.y;
    p->right.z = right.z;
    p->up.x = up.x;
    p->up.y = up.y;
    p->up.z = up.z;
    p->front.x = front.x;
    p->front.y = front.y;
    p->front.z = front.z;
    func_02067e68(&p->pos, &p->vel, &p->pos);
    func_020c6300(p, p->xf8, &p->xfc, &p->x108, func_020c8164(p->xa0, p->xf8),
                  func_020e79a0, 0, func_020e78b0, func_020e789c, func_020e7874);
    if (p->pos.y >= 0x9f80) {
        p->pos.y = 0x9f80;
        p->vel.y = 0;
    }
    p->xac = 2000 - FX_MUL(func_02067898(p->pos.y, 0x9f80), 1000);
    VEC_Set(&p->model->scale, p->xac, p->xac, p->xac);
    func_0209cef4(p->x190, 4, w->rate);
}
