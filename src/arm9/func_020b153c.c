#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct { fx32 x; fx32 y; fx32 z; } VecFx32;

extern void **data_0215be34;
extern fx16 data_02126868[];
extern u32 func_02080858(void);
extern void func_0208122c(void *a, s32 b, VecFx32 *c);
extern void func_020a0b98(s32 a, VecFx32 *b);

#define FX_Mul(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

static inline fx16 FX_SinIdx(int idx)
{
    return data_02126868[((idx >> 4) << 1)];
}

static inline fx16 FX_CosIdx(int idx)
{
    return data_02126868[((idx >> 4) << 1) + 1];
}

static inline u16 RandMask(u32 *s)
{
    *s = *s * 0x10dcd + 1;
    return (u16)(*s & 0xfff);
}

static inline u16 Rand16(u32 *s)
{
    *s = *s * 0x10dcd + 1;
    return (u16)*s;
}

void func_020b153c(void)
{
    VecFx32 pos;
    u32 seed;
    s16 y;
    s16 r;
    u16 ang;
    fx32 rad;
    void *obj;

    seed = func_02080858();
    y = RandMask(&seed);
    r = RandMask(&seed);
    ang = Rand16(&seed);
    rad = FX_Mul(r, 0x17000) + 0xc000;
    pos.x = FX_Mul(rad, FX_SinIdx(ang));
    pos.y = FX_Mul(y, 0x10000) + 0x16000;
    pos.z = FX_Mul(rad, FX_CosIdx(ang));
    obj = NULL;
    if (data_0215be34 != NULL) {
        obj = *data_0215be34;
    }
    func_0208122c(obj, 12, &pos);
    func_0208122c(obj, 11, &pos);
    func_0208122c(obj, 13, &pos);
    func_020a0b98(1, &pos);
}
