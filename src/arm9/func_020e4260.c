#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 x, y, z; } VecFx32;

typedef struct {
    u8 pad0[4];
    s32 mode;
    u8 count;
    u8 pad9[3];
    s32 timer;
} State;

typedef struct Obj Obj;
struct Obj {
    u8 pad0[0x24];
    VecFx32 scale;
    u8 pad30[0x60];
    s16 f90;
    u8 pad92[0xa];
    s16 f9c;
    u8 pad9e[0xe];
    s32 fac;
    u8 padb0[0xdc];
    Obj *child;
    u8 anim[0x84];
    State *state;
};

typedef struct {
    u8 pad[0xc4];
    u16 flags;
} Sys;

extern Sys *data_02159444;
extern u32 *data_02159468;

extern void func_02044ca0(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_0209cef4(void *p, s32 a, s32 b);
extern void func_020e4ad0(Obj *p);
extern void func_0209d0dc(void *p, s32 a);

#define FX_MUL(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline u16 RandM(u16 mask)
{
    u32 s = *data_02159468 * 0x10dcd + 1;
    *data_02159468 = s;
    return (u16)(s & mask);
}

static inline void VEC_Set(VecFx32 *a, s32 x, s32 y, s32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

void func_020e4260(Obj *p)
{
    State *st = p->state;

    func_02044ca0(p->f9c);
    if (data_02159444->flags & 2) {
        if (st->mode != 0) {
            p->scale.x -= 41;
            if (p->scale.x < 0x17b4) {
                st->mode = 0;
                st->count++;
            }
        } else if (p->scale.x < 0x1806) {
            s32 r = func_02067898(p->scale.x, 0x1806);
            s32 d = 0x10f6 - r;
            d = FX_MUL(d, 164) + (FX_MUL((s16)RandM(0xfff), 0x1000) >> 10);
            p->scale.x += d;
            p->scale.y += d;
            p->scale.z += d;
        } else if (st->count <= 3) {
            st->mode = 1;
        } else {
            func_020e4ad0(p);
        }
        func_0209d0dc(p->anim, 7);
        st->timer = 0;
    } else {
        st->timer++;
        if (st->timer >= 10) {
            st->timer = 10;
            if (p->f90 != 3) {
                p->scale.x -= 41;
                if (p->scale.x < 0x4ce) {
                    p->scale.x = 0x4ce;
                } else {
                    func_0209cef4(p->anim, 8, p->scale.x);
                }
            }
            st->mode = 0;
            st->count++;
        }
    }
    p->scale.y = p->scale.x;
    p->scale.z = p->scale.x;
    p->fac = FX_MUL(p->scale.x, 0xb00);
    VEC_Set(&p->child->scale, p->fac, p->fac, p->fac);
}
