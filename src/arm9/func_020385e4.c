#include "ctx.h"

typedef struct Dog {
    u8 pad00[0x8b];
    s8 f8b;
    u8 pad8c;
    s8 f8d;
} Dog;

typedef struct Save {
    u8 pad00[6];
    u16 breed;
} Save;

extern u32 *data_0214f464;
extern Save *data_02159428;
extern u32 data_0213b9fc[];
extern s16 data_02136b54[][9][4];

static inline u16 Rand(void)
{
    u32 s = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = s;
    return (u16)s;
}

static inline u16 RandMax(u16 max)
{
    return (u16)(((u32)Rand() * max) >> 16);
}

s32 func_020385e4(Dog *dog)
{
    s16 i;
    s16 r;
    s32 cls;
    u32 cat;

    cat = data_0213b9fc[data_02159428->breed];
    r = RandMax(100);
    for (i = 0; i < 4; i++) {
        r -= data_02136b54[cat][dog->f8d][i];
        if (r < 0) {
            break;
        }
    }
    cls = i;
    switch (dog->f8b) {
    case 4:
    case 5:
        cls = 0;
        break;
    case 1:
        cls++;
        if (cls >= 4) {
            cls--;
        }
        break;
    }
    return cls;
}
