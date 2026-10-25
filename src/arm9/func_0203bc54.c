#pragma avoid_byte strb
#pragma opt_dead_assignments off
#include "ctx.h"
#pragma opt_loop_invariants off

typedef struct {
    u16 id;
    u16 count;
    u8 pad04[60 - 4];
} Item;

typedef struct {
    u8 pad00[0x13];
    u8 level;
    u8 pad14[0x90 - 0x14];
    Item items[20];
} Owner;

typedef struct {
    u8 pad00[0x88];
    s8 b88;
    u8 pad89[2];
    s8 b8b;
    u8 pad8c;
    s8 b8d;
    u8 pad8e[0xa5 - 0x8e];
    u8 ba5;
    u8 pada6[2];
    u8 ba8;
    u8 pada9;
    u8 baa;
    u8 padab[0xea - 0xab];
    s16 anim;
    u8 padec[2];
    s16 hee;
    s16 state;
    u8 padf2[0x112 - 0xf2];
    s16 h112;
    u8 pad114[0x140 - 0x114];
    s16 h140[2];
    u8 pad144[0x488 - 0x144];
    s32 w488;
    u8 pad48c[0x940 - 0x48c];
    u32 w940;
    u8 pad944[0x9e8 - 0x944];
    Owner *owner;
} Dog;

typedef struct {
    u8 pad00[0x90];
    s16 type;
    u8 pad92[6];
    s16 h98;
} Pet;

typedef struct {
    u32 pad00;
    Pet *pets[7];
    s16 count;
} PetList;

typedef struct {
    u8 pad00[0x34];
    s32 w34;
    u16 h38;
    s16 h3a;
    u8 pad3c[0x7a - 0x3c];
    s16 h7a;
} Game;

typedef struct {
    u32 seed;
    s8 b4;
    u8 pad5[2];
    s8 b7;
    u8 pad8[5];
    s8 bd;
} Sys;

typedef struct {
    u8 pad00[2];
    u8 kind;
} ItemDef;

extern Game *data_02159444;
extern Sys *data_0214f464;
extern u16 *data_0215942c;
extern ItemDef *data_0213a8d4[];
extern u8 data_021369a8[][5];
extern PetList *data_02159468;
extern s32 data_0214f460;

extern s32 func_020bc14c(void);
extern void func_0202944c(Dog *d, s32 a, s32 b, s32 c);
extern void func_0203d7d0(Dog *d, s16 n, s32 b);
extern void func_0203d3ec(Dog *d);

static inline BOOL IsBusy(Dog *d)
{
    if (d->state >= 4 && d->state <= 8) return TRUE;
    if (d->state == 87) return TRUE;
    if (d->anim >= 15 && d->anim <= 75) return TRUE;
    if (d->anim >= 0x119 && d->anim <= 316) return TRUE;
    return FALSE;
}

static inline BOOL CanReact(Dog *d)
{
    if (IsBusy(d)) return FALSE;
    if (d->anim >= 0x478 && d->anim <= 0x47e) return FALSE;
    if (d->anim >= 0x4c7 && d->anim <= 0x4ca) return FALSE;
    if (d->state == 83) return FALSE;
    if (d->state == 84) return FALSE;
    return TRUE;
}

static inline void SetState(Dog *d, s16 state, u8 a, u8 kind)
{
    if (CanReact(d)) {
        d->ba8 = a;
        d->h112 = 0;
        d->state = state;
        d->ba5 = kind;
    }
}

static inline void Act(Dog *d, s32 a, s32 b, s32 c)
{
    if (CanReact(d)) {
        func_0202944c(d, a, b, c);
    }
}

static inline BOOL HasBit(Dog *d, s16 n)
{
    BOOL r;
    if (n >= 0 && n < 20 && (d->w940 & (1 << n)))
        r = TRUE;
    else
        r = FALSE;
    return r;
}

static inline void Goto(Dog *d, s32 n)
{
    if (n >= 0 && n < 20) {
        d->baa = 2;
        func_0203d7d0(d, n, 0);
    }
}

static inline u16 Rand(u16 max)
{
    u32 *p = &data_0214f464->seed;
    u32 s = *p * 0x10dcd + 1;
    *p = s;
    return (u16)(((u32)(u16)s * max) >> 16);
}

static inline s16 RandDelay(Dog *d)
{
    s16 r;
    switch (d->b8d) {
    default:
        r = Rand(5);
        break;
    case 3:
        r = Rand(5) + 10;
        break;
    case 4:
        r = Rand(5) + 20;
        break;
    }
    return r;
}

static inline Pet *GetPet(s16 i)
{
    if (i < 0 || data_02159468->count <= i) return NULL;
    return data_02159468->pets[i];
}

static inline Item *GetItem(Dog *d, s16 i)
{
    if (i < 0 || i >= 20) return NULL;
    return (Item *)((u8 *)d->owner + 144 + (s16)i * 60);
}

static inline s32 ItemState(Dog *d, Item *it)
{
    ItemDef *def;

    if (it == NULL) return 0;
    if (it->id == 0) return 0;
    if (it->count == 0) return 0;
    if (it->id >= 79 && it->id < 99)
        def = data_0213a8d4[79];
    else
        def = data_0213a8d4[it->id];
    if (it->count < (*(u8 (*)[5])((u8 *)data_021369a8 + (def->kind - 1) * 5))[*(vu8 *)&d->owner->level - 1]) return 1;
    return 2;
}

static inline BOOL HasFullBowl(Dog *d)
{
    s16 i;
    Item *it;
    ItemDef *d79;

    d79 = data_0213a8d4[79];
    for (i = 0; i < 20; i++) {
        it = GetItem(d, i);
        d79 = data_0213a8d4[79];
        {
            ItemDef *def;
            s32 res;

            if (it == NULL) { res = 0; goto is_done; }
            if (it->id == 0) { res = 0; goto is_done; }
            if (it->count == 0) { res = 0; goto is_done; }
            if (it->id >= 79 && it->id < 99)
                def = d79;
            else
                def = data_0213a8d4[it->id];
            if (it->count < (*(u8 (*)[5])((u8 *)data_021369a8 + (def->kind - 1) * 5))[*(vu8 *)&d->owner->level - 1]) { res = 1; goto is_done; }
            res = 2;
        is_done:
            if (res == 2 && it->id == 3) return TRUE;
        }
    }
    return FALSE;
}

static inline BOOL Within(s16 v, s16 lo, s16 hi)
{
    BOOL r;
    if (v >= lo && v <= hi)
        r = TRUE;
    else
        r = FALSE;
    return r;
}

static inline BOOL AnimIn(Dog *d, s16 lo, s16 hi)
{
    return d->anim >= lo && d->anim <= hi;
}

static inline BOOL IsEating(Dog *d)
{
    BOOL r = d->state == 75 || d->anim == 0x3b9 || AnimIn(d, 0x3ba, 0x3bf);
    return r;
}

static inline BOOL IsEatingAny(Dog *d)
{
    BOOL r = IsEating(d) || AnimIn(d, 0x413, 0x41c);
    return r;
}

static inline BOOL IsDrinking(Dog *d)
{
    BOOL r = d->state == 75 || d->anim == 952 || AnimIn(d, 960, 0x412);
    return r;
}

static inline BOOL IsA(s16 v, s16 x)
{
    BOOL r;
    if (v >= 1 && v <= 12)
        r = TRUE;
    else if (v == x)
        r = TRUE;
    else
        r = FALSE;
    return r;
}

static inline BOOL IsSit(Dog *d, s8 kind, s16 x)
{
    if (d->b8b != kind) return FALSE;
    if (IsA(d->anim, x)) return TRUE;
    if (d->anim >= 792 && d->anim <= 0x33b) {
        if (IsA(d->hee, x)) return TRUE;
    }
    return FALSE;
}

void func_0203bc54(Dog *dog)
{
    s8 me;
    s8 idx;
    Game *g;
    u16 mask;
    BOOL bit;
    s16 h3a;
    s32 w34;
    s16 i;

    me = (s8)func_020bc14c();
    idx = dog->b88;
    g = data_02159444;
    mask = g->h38;
    bit = TRUE;
    if (!(mask & (1 << idx)))
        bit = FALSE;
    h3a = g->h3a;
    w34 = g->w34;
    if (data_0214f464->bd != 1) return;

    switch (*data_0215942c) {
    default:
        return;
    case 9:
        if (HasBit(dog, g->w34)) dog->w488 = 0;
    case 12:
        return;
    case 17:
        if (!HasFullBowl(dog)) return;
        if (dog->state == 15) return;
        Goto(dog, w34);
        return;
    case 3:
        if (w34 != -2 && w34 != -5) return;
        if (Within(dog->anim, 0x4dd, 0x4ee)) return;
        dog->baa = 2;
        SetState(dog, 9, 0, 0);
        return;
    case 1: {
        BOOL mine;
        Pet *pet;

        if (w34 != -2 && w34 != -5) {
            if (!HasBit(dog, w34)) return;
        }
        mine = FALSE;
        pet = GetPet(g->h7a);
        if (pet != NULL && (u16)(s16)(pet->type - 4) <= 1 && dog->b88 == pet->h98) mine = TRUE;
        if (dog->anim >= 0x35e && dog->anim <= 0x3af) {
            dog->baa = 2;
            SetState(dog, 75, 1, 1);
            return;
        }
        if (mine) {
            s32 arg = 0;
            if (HasBit(dog, w34)) arg = 1;
            dog->baa = 2;
            Act(dog, 3, arg, 0);
            return;
        }
        for (i = 0; i < 2; i++) dog->h140[i] = -1;
        return;
    }
    case 4:
        if (w34 == -1) return;
        if (data_0214f460 == 0) return;
        if (me != -1 && me != idx) return;
        if (!CanReact(dog)) return;
        if (w34 < 0) return;
        if (w34 >= 20) return;
        if (HasBit(dog, w34)) return;
        dog->baa = 2;
        func_0203d7d0(dog, w34, 0);
        return;
    case 0:
    case 5:
    case 10:
    case 11:
    case 18:
        if (w34 == -1) return;
        if (data_0214f460 == 0) return;
        if (me != -1 && me != idx) return;
        if (!CanReact(dog)) return;
        if (data_0214f464->b4 == 2) {
            BOOL eat = FALSE;
            BOOL mine = FALSE;
            BOOL bowl = FALSE;
            BOOL arg = FALSE;
            Pet *pet = GetPet(g->h7a);

            if (pet != NULL) {
                if (*(s16 *)((u8 *)pet + 0x90) == 3) bowl = TRUE;
                if ((u16)(s16)(pet->type - 4) <= 1) {
                    eat = TRUE;
                    if (idx == pet->h98) mine = TRUE;
                }
            }
            if (HasBit(dog, g->w34) && bit) arg = TRUE;

            if (w34 != -2 && w34 != -5 && !arg) return;
            if (mine) {
                dog->baa = 2;
                if (IsEatingAny(dog)) return;
                Act(dog, 3, arg, RandDelay(dog));
                return;
            }
            if (eat) {
                dog->baa = 2;
                Act(dog, 0, 0, RandDelay(dog));
                return;
            }
            if (bowl || IsSit(dog, 5, 0x261) || IsSit(dog, 4, 0x262)) {
                dog->baa = 2;
                if (IsDrinking(dog)) return;
                Act(dog, 2, arg, RandDelay(dog));
                return;
            }
            for (i = 0; i < 2; i++) dog->h140[i] = -1;
            return;
        }
        if (w34 == -2 || w34 == -5) {
            if (idx != data_0214f464->b7 && (*(s16 *)((u8 *)dog + 0xf0) == 111 || *(s16 *)((u8 *)dog + 0xf0) <= 0)
) {

                if (h3a > 0) {
                    dog->baa = 2;
                    func_0203d3ec(dog);
                    return;
                }
                dog->baa = 2;
                Act(dog, 0, 0, RandDelay(dog));
                return;
            }
            if (dog->state != 13) return;
            if (dog->ba5 != 1) return;
            if (me == idx) {
                dog->baa = 2;
                SetState(dog, 13, 0, 3);
                return;
            }
            dog->baa = 2;
            SetState(dog, 13, 0, 2);
            return;
        }
        if (!bit) return;
        Goto(dog, w34);
        return;
    }
}


