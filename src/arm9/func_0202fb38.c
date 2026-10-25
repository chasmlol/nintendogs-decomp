#include "ctx.h"

typedef struct Dog {
    u8 pad00[0x8b];
    s8 f8b;
    u8 pad8c;
    s8 f8d;
    u8 pad8e[0xea - 0x8e];
    s16 fea;
    u8 padec[0x152 - 0xec];
    s16 f152;
} Dog;

typedef struct Save {
    u8 pad00[6];
    u16 breed;
} Save;

extern u32 *data_0214f464;
extern Save *data_02159428;
extern u32 data_0213b9fc[];
extern s16 data_02136b54[][9][4];

static inline BOOL IsSpecial(Dog *dog)
{
    if (dog->f152 >= 20 && dog->f152 <= 22) {
        dog->fea = 0x260;
        return TRUE;
    }
    return FALSE;
}

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

BOOL func_0202fb38(Dog *dog)
{
    s16 i;
    s16 r;
    s32 cls;
    u32 cat;

    if (IsSpecial(dog)) {
        return TRUE;
    }
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
    switch (cls) {
    case 0:
        dog->fea = 0x46c;
        return TRUE;
    case 1:
        dog->fea = 0x46d;
        return TRUE;
    case 2:
    case 3:
        dog->fea = 0x46e;
        return TRUE;
    }
    return FALSE;
}
