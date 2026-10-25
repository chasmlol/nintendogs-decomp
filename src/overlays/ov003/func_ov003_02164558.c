#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    u8 pad00[0x26c];
    VecFx32 pos;        /* 0x26c */
    u8 pad278[0x3b4 - 0x278];
    VecFx32 target;     /* 0x3b4 */
} Dog;

typedef struct {
    u16 mode;
} Mode;

typedef struct {
    u8 pad00[8];
    VecFx32 pos;        /* 0x08 */
} Thing;

typedef struct {
    u8 pad00[0x30];
    VecFx32 pos;        /* 0x30 */
} Cam;

typedef struct {
    u8 pad00[0x1c];
    Cam *cam;           /* 0x1c */
} Sys;

typedef struct {
    u32 seed;
} Game;

typedef struct {
    u8 pad00[0x4c];
    fx32 f4c;           /* 0x4c */
    u8 pad50[0x64 - 0x50];
    fx32 f64;           /* 0x64 */
} Wind;

typedef struct {
    u8 pad00[0xc];
    fx32 radius;        /* 0x0c */
} Field;

extern Mode *data_0215942c;
extern Sys *data_02159444;
extern Game *data_0214f464;
extern Wind data_02152cd8;
extern Field *data_02159428;
extern fx16 data_02126868[];

extern Thing *func_0200c498(s32 a, s32 b);
extern void func_02028894(Dog *dog, VecFx32 *a, VecFx32 *b);
extern fx32 func_02028130(Dog *dog);
extern u16 func_02068078(fx32 a, fx32 b);

#define FX_MUL(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline fx16 FX_SinIdx(int idx)
{
    return data_02126868[(idx >> 4) << 1];
}

static inline fx16 FX_CosIdx(int idx)
{
    return data_02126868[((idx >> 4) << 1) + 1];
}

static inline u16 RandM(u16 mask)
{
    u32 s = data_0214f464->seed * 0x10dcd + 1;
    data_0214f464->seed = s;
    return (u16)(s & mask);
}

void func_ov003_02164558(Dog *dog)
{
    fx32 jit;
    fx32 z;
    fx32 x;
    fx32 r;
    u16 angle;

    if (data_0215942c->mode == 1 || data_0215942c->mode == 4) {
        Thing *t = func_0200c498(0, 0);
        if (t != NULL) {
            dog->pos = t->pos;
        }
        dog->target = data_02159444->cam->pos;
        jit = FX_MUL((s16)RandM(0xfff), 0x6000) - 0x3000;
    } else {
        func_02028894(dog, &dog->pos, &dog->target);
        jit = FX_MUL((s16)RandM(0xfff), 0xa000) - 0x5000;
    }
    {
        fx32 k1 = data_02152cd8.f4c;
        fx32 k2 = data_02152cd8.f64;
        dog->pos.x += FX_MUL(jit, k1);
        dog->pos.z += FX_MUL(jit, k2);
    }
    z = dog->pos.z;
    x = dog->pos.x;
    r = data_02159428->radius - FX_MUL(func_02028130(dog), 0x14cc);
    if (FX_MUL(x, x) + FX_MUL(z, z) > FX_MUL(r, r)) {
        angle = func_02068078(dog->pos.x, dog->pos.z);
        dog->pos.x = FX_MUL(r, FX_SinIdx(angle));
        dog->pos.z = FX_MUL(r, FX_CosIdx(angle));
    }
}
