#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 v[6]; } RangeTbl;

typedef struct {
    u8 pad00[4];
    u16 angle;       /* 0x04 */
    u8 pad06[2];
    VecFx32 pos;     /* 0x08 */
} Obj;

typedef struct {
    u8 pad00[0x148];
    s16 f148;        /* 0x148 */
    u8 pad14a[0x26c - 0x14a];
    VecFx32 f26c;    /* 0x26c */
    u8 pad278[0x2a0 - 0x278];
    VecFx32 f2a0;    /* 0x2a0 */
} Dog;

typedef struct {
    u8 pad00[0x84];
    u16 flags;       /* 0x84 */
} Sys;

typedef struct {
    u32 seed;        /* 0x00 */
    u8 pad04[0x70];
    VecFx32 f74;     /* 0x74 */
} Game;

extern RangeTbl data_ov006_02165dfc;
extern fx16 data_02126868[];
extern Sys *data_02159444;
extern Game *data_0214f464;
extern Obj *func_020364a8(Dog *dog);
extern void func_02067e34(VecFx32 *a, VecFx32 *b, VecFx32 *c);
extern s32 func_02009d34(VecFx32 *a, VecFx32 *b, VecFx32 *c);
extern void func_0203942c(Dog *dog);
extern fx32 func_02037450(Dog *dog, s32 a);
extern fx32 func_02009bd0(VecFx32 *a, VecFx32 *b);
extern s32 func_02027e4c(Dog *dog, s32 a);
extern void func_02037f20(Dog *dog, s32 a);
extern void func_0203e908(Dog *dog, s32 a);
extern void func_ov006_021607d0(Dog *dog, Obj *obj, s32 b, s32 c);
extern void func_ov006_02161344(Dog *dog);

static inline fx16 FX_SinIdx(int idx)
{
    return data_02126868[(idx >> 4) << 1];
}

static inline fx16 FX_CosIdx(int idx)
{
    return data_02126868[((idx >> 4) << 1) + 1];
}

static inline u16 Rand(void)
{
    u32 s = data_0214f464->seed * 0x10dcd + 1;
    data_0214f464->seed = s;
    return (u16)s;
}

static inline u16 RandMax(u32 max)
{
    return (u16)(((u32)Rand() * max) >> 16);
}

void func_ov006_0215e404(Dog *dog)
{
    Obj *obj;
    fx32 dist;
    fx32 minDist;
    fx32 range;
    BOOL hit;

    obj = func_020364a8(dog);
    dist = 0;
    minDist = 0;
    range = 0;
    hit = FALSE;
    if (obj != NULL) {
        VecFx32 fwd;
        VecFx32 side;
        VecFx32 diff;
        RangeTbl tbl;
        u16 angle;
        fx32 r;
        fx32 s;
        fx32 c;

        angle = obj->angle;
        s = FX_SinIdx(angle);
        c = FX_CosIdx(angle);
        tbl = data_ov006_02165dfc;
        r = tbl.v[dog->f148 - 17];
        range = (fx32)(((fx64)r * r + 0x800) >> 12);
        dog->f26c = obj->pos;
        fwd.z = c;
        side.x = -c;
        minDist = 0x31000;
        fwd.x = s;
        side.z = s;
        fwd.y = 0;
        side.y = 0;
        func_02067e34(&obj->pos, &dog->f2a0, &diff);
        if (func_02009d34(&diff, &fwd, &side) == 0) {
            hit = TRUE;
        }
        if (data_02159444->flags & 1) {
            dist = func_02009bd0(&dog->f26c, &dog->f2a0);
            dog->f26c = data_0214f464->f74;
            func_0203942c(dog);
            func_02037450(dog, 0x310);
        } else {
            func_0203942c(dog);
            dist = func_02037450(dog, 0x310);
        }
        func_02037f20(dog, func_02027e4c(dog, 2));
    }
    if (hit && dist < range) {
        s32 v;
        v = func_02027e4c(dog, 2);
        if (v < RandMax(1000)) {
            func_0203e908(dog, 0x4ed);
        } else {
            func_0203e908(dog, 0x4ec);
        }
        return;
    }
    if (dist > minDist) {
        func_ov006_021607d0(dog, obj, 0, 1);
        func_ov006_02161344(dog);
    }
}
