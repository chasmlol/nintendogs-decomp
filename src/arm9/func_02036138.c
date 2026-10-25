#include "ctx.h"

typedef s32 fx32;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;

typedef struct Dog {
    u8 pad00[0x88];
    s8 f88;
    u8 pad89[2];
    s8 f8b;
    u8 pad8c;
    s8 f8d;
    u8 pad8e[0x13e - 0x8e];
    s16 f13e;
    s16 f140[2];
    u8 pad144[0x260 - 0x144];
    VecFx32 f260;
    u8 pad26c[0x2a0 - 0x26c];
    VecFx32 f2a0;
    u8 pad2ac[0x2dc - 0x2ac];
    VecFx32 f2dc;
    u8 pad2e8[0x3b4 - 0x2e8];
    VecFx32 f3b4;
} Dog;

typedef struct {
    u8 pad00[0x54];
    Dog *dogs[3];
} DogMgr;

extern DogMgr *data_0214f464;

extern fx32 func_02009bd0(const VecFx32 *a, const VecFx32 *b);

#define FX_MUL(a, b) ((fx32)(((s64)(a) * (b) + 0x800) >> 12))

static inline Dog *GetDog(s32 i)
{
    if (i < 0 || i >= 3) {
        return NULL;
    }
    return data_0214f464->dogs[i];
}

static inline BOOL NotInList(Dog *dog, s32 idx)
{
    s16 j;
    for (j = 0; j < 2; j++) {
        if (dog->f140[j] == (s16)idx) {
            return FALSE;
        }
    }
    return TRUE;
}

void func_02036138(Dog *dog, s32 *best, BOOL check, BOOL copy)
{
    s16 i;

    for (i = 0; i < 3; i++) {
        Dog *other;
        VecFx32 pos;
        VecFx32 v;
        s32 val;

        if (i == dog->f88) {
            continue;
        }
        other = GetDog(i);
        if (other == NULL) {
            continue;
        }
        pos = other->f2dc;
        v = other->f260;
        val = func_02009bd0(&pos, &dog->f2a0) - 0xa000 - (FX_MUL(v.x, v.x) + FX_MUL(v.y, v.y) + FX_MUL(v.z, v.z)) * 10000;
        if (dog->f8d == 0 && dog->f8b == 2) {
            val -= 4096000;
        }
        if (val < *best) {
            if (!check || NotInList(dog, i)) {
                *best = val;
                dog->f13e = i;
            }
            if (copy) {
                dog->f3b4 = pos;
            }
        }
    }
}
