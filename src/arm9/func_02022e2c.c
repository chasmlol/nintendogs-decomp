#include "ctx.h"

typedef struct Slot {
    u16 id;         /* 0x00 */
    u16 count;      /* 0x02 */
    u8 pad[56];
} Slot;

typedef struct DogData {
    u8 pad00[0x13];
    u8 level;       /* 0x13 */
    u8 pad14[0x90 - 0x14];
    Slot slots[20]; /* 0x90 */
} DogData;

typedef struct Dog {
    u8 pad00[0x88];
    s8 s88;         /* 0x88 */
    u8 pad89[0xf2 - 0x89];
    u16 f2;         /* 0xf2 */
    u8 padf4[0x9e8 - 0xf4];
    DogData *data;  /* 0x9e8 */
} Dog;

typedef struct ItemData {
    u8 b0;
    u8 b1;
    u8 category;    /* 0x02 */
} ItemData;

extern ItemData *data_0213a8d4[];
extern u8 data_021369a8[];  /* limit table, 5 levels per category */
extern s32 func_020a27e4(Dog *dog);
extern s32 func_020a2854(u32 mask, s32 v);
extern s32 func_0202334c(Dog *dog);

static inline ItemData *GetItem(u16 id)
{
    if (id >= 79 && id < 99) {
        return data_0213a8d4[79];
    }
    return data_0213a8d4[id];
}

static inline Slot *GetSlot(Dog *dog, int idx)
{
    if (idx < 0 || idx >= 20) {
        return NULL;
    }
    return &dog->data->slots[(s16)idx];
}

static inline s32 GetLevel(Dog *dog, Slot *p)
{
    u8 *row;

    if (p == NULL) {
        return 0;
    }
    if (p->id == 0) {
        return 0;
    }
    if (p->count == 0) {
        return 0;
    }
    row = data_021369a8;
    row += (GetItem(p->id)->category - 1) * 5;
    if (p->count < row[dog->data->level - 1]) {
        return 1;
    }
    return 2;
}

int func_02022e2c(Dog *dog, s32 flag)
{
    if (dog->f2 == 79) {
        if (flag) {
            u32 mask = 0;
            s16 i;
            s32 r;
            for (i = 0; i < 20; i++) {
                Slot *p = GetSlot(dog, i);
                if (GetLevel(dog, p) >= 1 && p->id >= 79) {
                    mask |= 1 << i;
                }
            }
            r = func_020a2854(mask, dog->s88);
            switch (r) {
            case -3:
            case -1:
                return 0;
            case -2:
                r = func_0202334c(dog);
                return r >= 0 ? (u16)(r + 79) : 0;
            default:
                return (u16)(r + 79);
            }
        } else {
            return func_020a27e4(dog) ? 79 : 0;
        }
    }
    return dog->f2;
}
