#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef s16 fx16;

typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { s16 x, y, z; } VecFx16;

typedef struct DescFlags {
    u32 type : 4;
    u32 f4 : 5;
    u32 b9 : 1;
    u32 f10 : 1;
    u32 b11 : 1;
    u32 b12 : 1;
    u32 b13 : 1;
    u32 f14 : 6;
    u32 b20 : 1;
    u32 f21 : 11;
} DescFlags;

typedef struct Desc {
    DescFlags flags;
    u32 pad04[3];
    fx32 inc;
    u8 pad14[14];
    u16 base;
    u8 pad24[16];
    s16 n34;
    s16 n36;
    u8 pad38[4];
    u8 b3c;
    u8 b3d;
    u8 b3e;
    u8 pad3f[4];
    u8 b43;
    u8 b44;
} Desc;

typedef struct TexAnim {
    u16 a;
    u16 b;
    u16 pad[2];
    u16 flag0 : 1;
    u16 flags1 : 15;
} TexAnim;

typedef struct ColAnim {
    u8 data[8];
    u32 count : 8;
    u32 f8 : 8;
    u32 random : 1;
    u32 f17 : 15;
} ColAnim;

typedef struct Rec {
    Desc *desc;
    u32 pad04;
    TexAnim *p8;
    u32 pad0c;
    ColAnim *q10;
} Rec;

typedef struct Obj {
    u8 pad00[8];
    u32 list[4];
    Rec *rec;
    u32 pad1c;
    VecFx32 pos;
    u8 pad2c[14];
    s16 t3a;
    VecFx16 s3c;
    u8 pad42[2];
    fx32 scale;
    fx32 k48;
    fx32 k4c;
    fx32 k50;
    fx32 k54;
    u16 h58;
    u8 pad5a[3];
    u8 b5d;
    u8 pad5e[2];
    VecFx16 a60;
    VecFx16 b66;
} Obj;

typedef struct Ent {
    u32 pad00[2];
    VecFx32 pos;
    VecFx32 v;
    VecFx32 w;
    u16 s2c;
    u16 s2e;
    fx32 s30;
    u16 s34;
    u16 s36;
    u16 s38;
    u16 s3a;
    u16 s3c;
    u16 s3e;
    u16 c0 : 5;
    u16 c1 : 5;
    u16 c2 : 6;
    u8 b42;
    u8 b43;
} Ent;

extern u32 data_02156024;
extern s16 data_02126868[];

extern Ent *func_02085a94(void *p);
extern void func_02085ad8(u32 *list, Ent *e);
extern void func_02085b80(VecFx32 *v);
extern void func_02085b24(VecFx32 *v);
extern void func_02084e30(VecFx32 *v, VecFx32 *t, Obj *o);
extern void func_02084f90(Obj *o);
extern void func_02067c98(const VecFx16 *a, const VecFx16 *b, VecFx16 *out);
extern fx32 func_02067df0(const VecFx32 *a, const VecFx32 *b);
extern void func_02067af0(const VecFx32 *a, VecFx32 *b);

static inline fx16 FX_SinIdx(int idx)
{
    return data_02126868[idx * 2];
}

static inline fx16 FX_CosIdx(int idx)
{
    return data_02126868[idx * 2 + 1];
}

#define FX_MUL(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))

static inline u32 Rand(void)
{
    data_02156024 = data_02156024 * 0x5eedf715 + 0x1b0cb173;
    return data_02156024;
}

#define RandRange(n) (((n) * (s32)(Rand() >> 23) - ((n) << 8)) >> 8)
#define RandVar(n, var) (((n) * ((var) + 255 - ((s32)((var) * (Rand() >> 24)) >> 7))) >> 8)

void func_020840f4(Obj *obj, void *p2)
{
    Rec *rec = obj->rec;
    Desc *desc = rec->desc;
    s32 i;
    s32 ticks;
    fx32 sp1;
    fx32 sp2;
    s32 angle;
    s32 t;
    u32 type;
    Ent *ent;

    t = desc->inc + obj->t3a;
    obj->t3a = t & 0xfff;
    ticks = t >> 12;
    type = desc->flags.type;
    if (type == 2 || type == 3 || type - 5 <= 4) {
        func_02084f90(obj);
    }
    i = 0;
    if (ticks <= 0) {
        return;
    }
    angle = 0;
    do {
        VecFx32 *pSrc;
        VecFx32 *pDst;
        ent = func_02085a94(p2);
        if (ent == NULL) {
            return;
        }
        func_02085ad8(obj->list, ent);
        switch (desc->flags.type) {
        case 0:
            ent->v.x = ent->v.y = ent->v.z = 0;
            break;
        case 1:
            func_02085b80(&ent->v);
            ent->v.x = FX_MUL(ent->v.x, obj->scale);
            ent->v.y = FX_MUL(ent->v.y, obj->scale);
            ent->v.z = FX_MUL(ent->v.z, obj->scale);
            break;
        case 2: {
            VecFx32 t2;
            func_02085b24(&t2);
            t2.x = FX_MUL(t2.x, obj->scale);
            t2.y = FX_MUL(t2.y, obj->scale);
            t2.z = 0;
            func_02084e30(&ent->v, &t2, obj);
            break;
        }
        case 3: {
            VecFx32 t3;
            s32 q = angle / ticks;
            fx32 sn;
            fx32 cs;
            angle += 0x10000;
            sn = FX_SinIdx(q >> 4);
            cs = FX_CosIdx(q >> 4);
            t3.x = FX_MUL(sn, obj->scale);
            t3.y = FX_MUL(cs, obj->scale);
            t3.z = 0;
            func_02084e30(&ent->v, &t3, obj);
            break;
        }
        case 4:
            func_02085b80(&ent->v);
            ent->v.x = FX_MUL(FX_MUL(ent->v.x, obj->scale), RandRange(0x1000));
            ent->v.y = FX_MUL(FX_MUL(ent->v.y, obj->scale), RandRange(0x1000));
            ent->v.z = FX_MUL(FX_MUL(ent->v.z, obj->scale), RandRange(0x1000));
            break;
        case 5: {
            VecFx32 t5;
            func_02085b24(&t5);
            t5.x = FX_MUL(FX_MUL(t5.x, obj->scale), RandRange(0x1000));
            t5.y = FX_MUL(FX_MUL(t5.y, obj->scale), RandRange(0x1000));
            func_02084e30(&ent->v, &t5, obj);
            break;
        }
        case 8: {
            VecFx16 c;
            VecFx32 a;
            func_02085b80(&ent->v);
            func_02067c98(&obj->a60, &obj->b66, &c);
            a.x = c.x;
            a.y = c.y;
            a.z = c.z;
            if (func_02067df0(&a, &ent->v) <= 0) {
                ent->v.x = -ent->v.x;
                ent->v.y = -ent->v.y;
                ent->v.z = -ent->v.z;
            }
            ent->v.x = FX_MUL(ent->v.x, obj->scale);
            ent->v.y = FX_MUL(ent->v.y, obj->scale);
            ent->v.z = FX_MUL(ent->v.z, obj->scale);
            break;
        }
        case 9: {
            VecFx16 c;
            VecFx32 a;
            func_02085b80(&ent->v);
            func_02067c98(&obj->a60, &obj->b66, &c);
            a.x = c.x;
            a.y = c.y;
            a.z = c.z;
            if (func_02067df0(&a, &ent->v) < 0) {
                ent->v.x = -ent->v.x;
                ent->v.y = -ent->v.y;
                ent->v.z = -ent->v.z;
            }
            ent->v.x = FX_MUL(FX_MUL(ent->v.x, obj->scale), (RandRange(0x1000) >> 1) + 0x800);
            ent->v.y = FX_MUL(FX_MUL(ent->v.y, obj->scale), (RandRange(0x1000) >> 1) + 0x800);
            ent->v.z = FX_MUL(FX_MUL(ent->v.z, obj->scale), (RandRange(0x1000) >> 1) + 0x800);
            break;
        }
        case 6: {
            VecFx32 t6;
            func_02085b24(&ent->w);
            t6.x = FX_MUL(ent->w.x, obj->scale);
            t6.y = FX_MUL(ent->w.y, obj->scale);
            t6.z = RandRange(obj->k48);
            func_02084e30(&ent->v, &t6, obj);
            break;
        }
        case 7: {
            VecFx32 t7;
            func_02085b24(&ent->w);
            t7.x = FX_MUL(FX_MUL(ent->w.x, obj->scale), RandRange(0x1000));
            t7.y = FX_MUL(FX_MUL(ent->w.y, obj->scale), RandRange(0x1000));
            t7.z = RandRange(obj->k48);
            func_02084e30(&ent->v, &t7, obj);
            break;
        }
        }

        sp1 = RandVar(obj->k4c, desc->b3e);
        sp2 = RandVar(obj->k50, desc->b3e);
        {
            VecFx32 out;
            if (desc->flags.type == 6) {
                VecFx32 vt;
                vt.x = FX_MUL(ent->w.x, obj->a60.x) + FX_MUL(ent->w.y, obj->b66.x);
                vt.y = FX_MUL(ent->w.x, obj->a60.y) + FX_MUL(ent->w.y, obj->b66.y);
                vt.z = FX_MUL(ent->w.x, obj->a60.z) + FX_MUL(ent->w.y, obj->b66.z);
                func_02067af0(&vt, &out);
            } else if (ent->v.x == 0 && ent->v.y == 0 && ent->v.z == 0) {
                func_02085b80(&out);
            } else {
                func_02067af0(&ent->v, &out);
            }
            pSrc = &obj->pos;
            pDst = &ent->pos;
            ent->w.x = FX_MUL(out.x, sp1) + FX_MUL(obj->s3c.x, sp2);
            ent->w.y = FX_MUL(out.y, sp1) + FX_MUL(obj->s3c.y, sp2);
            ent->w.z = FX_MUL(out.z, sp1) + FX_MUL(obj->s3c.z, sp2);
            *pDst = *pSrc;
        }
        ent->s30 = RandVar(obj->k54, desc->b3c);
        ent->s34 = 0x1000;
        if (desc->flags.b9 && rec->p8->flag0) {
            u16 tab[3];
            u32 idx = (Rand() >> 20) % 3;
            tab[0] = rec->p8->a;
            tab[1] = desc->base;
            tab[2] = rec->p8->b;
            ent->s3a = tab[idx];
        } else {
            ent->s3a = desc->base;
        }
        ent->c0 = obj->b5d;
        ent->c1 = 31;
        if (desc->flags.b13) {
            ent->s36 = Rand();
        } else {
            ent->s36 = 0;
        }
        if (!desc->flags.b12) {
            ent->s38 = 0;
        } else {
            ent->s38 = ((desc->n36 - desc->n34) * (Rand() >> 20) + (desc->n34 << 12)) >> 12;
        }
        ent->s2c = ((obj->h58 * (255 - ((s32)(desc->b3d * (Rand() >> 24)) >> 8))) >> 8) + 1;
        ent->s2e = 0;
        if (desc->flags.b11 && rec->q10->random) {
            ent->b42 = rec->q10->data[(Rand() >> 20) % rec->q10->count];
        } else if (desc->flags.b11 && !rec->q10->random) {
            ent->b42 = rec->q10->data[0];
        } else {
            ent->b42 = desc->b43;
        }
        ent->s3c = 0xffff / rec->desc->b44;
        ent->s3e = 0xffff / ent->s2c;
        ent->b43 = 0;
        if (desc->flags.b20) {
            ent->b43 = Rand() >> 24;
        }
    } while (++i < ticks);
}
