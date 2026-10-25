#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct {
    u16 kind;        /* 0x00 */
    u16 val;         /* 0x02 */
    u8 pad04[0x24];
    u8 fl;           /* 0x28 */
    u8 pad29[0x13];
} Ent;               /* 0x3c */

typedef struct {
    u8 pad00[0x13];
    u8 f13;          /* 0x13 */
    u8 pad14[0x6];
    s16 f1a;         /* 0x1a */
    u8 pad1c[0x22];
    s16 center[2];   /* 0x3e */
    u8 pad42[0x10];
    s16 pos[2];      /* 0x52 */
    u8 pad56[0x3a];
    Ent ents[20];    /* 0x90 */
} Save;

typedef struct {
    u8 pad00[0x8b];
    s8 f8b;          /* 0x8b */
    u8 pad8c[0x17];
    u8 fa3;          /* 0xa3 */
    u8 fa4;          /* 0xa4 */
    u8 fa5;          /* 0xa5 */
    u8 fa6;          /* 0xa6 */
    u8 pada7[0x2b];
    u8 fd2;          /* 0xd2 */
    u8 padd3[0x1d];
    s16 ff0;         /* 0xf0 */
    u16 ff2;         /* 0xf2 */
    u8 padf4[4];
    s16 ff8;         /* 0xf8 */
    u8 padfa[0x1e];
    u16 f118;        /* 0x118 */
    u8 pad11a[4];
    u16 f11e;        /* 0x11e */
    u8 pad120[2];
    u16 f122;        /* 0x122 */
    u8 pad124[0x9e8 - 0x124];
    Save *save;      /* 0x9e8 */
} Dog;

typedef struct {
    u8 pad00[2];
    u8 f2;
} Info;

extern Info *data_0213a8d4[];
extern u8 data_021369a8[][5];
extern void func_02028f5c(Dog *dog, s16 action, u8 fl);
extern void func_0203e1a0(Dog *dog);

static inline Ent *GetEnt(Dog *dog, s16 idx)
{
    if (idx < 0 || idx >= 20) {
        return NULL;
    }
    return &dog->save->ents[idx];
}

static inline Info *GetInfo(u16 kind)
{
    if (kind >= 79 && kind < 99) {
        return data_0213a8d4[79];
    }
    return data_0213a8d4[kind];
}

static inline s32 GetState(Dog *dog, Ent *e)
{
    if (e == NULL) {
        return 0;
    }
    if (e->kind == 0) {
        return 0;
    }
    if (e->val == 0) {
        return 0;
    }
    if (e->val < data_021369a8[GetInfo(e->kind)->f2 - 1][dog->save->f13 - 1]) {
        return 1;
    }
    return 2;
}

static inline BOOL IsCurrent(Dog *dog, s16 kind, u8 fl)
{
    BOOL r = FALSE;
    if (dog->ff0 == kind + 12 && dog->fa5 == fl) {
        r = TRUE;
    }
    return r;
}

static inline s16 FindEnt(Dog *dog, u16 kind, u8 fl)
{
    s16 i;
    Ent *e;
    for (i = 0; i < 20; i++) {
        e = GetEnt(dog, i);
        if (e != NULL && e->kind == kind && e->fl == fl) {
            return i;
        }
    }
    return -1;
}

static inline void SetPos(Dog *dog, s32 axis, s32 v)
{
    s32 lo, hi;
    dog->fd2 = 1;
    lo = dog->save->center[axis] - 5000;
    hi = dog->save->center[axis] + 5000;
    if (v < lo) {
        v = lo;
    }
    if (v > hi) {
        v = hi;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    dog->save->pos[axis] = v;
}

void func_0203d7d0(Dog *dog, s16 idx, BOOL flag)
{
    Ent *ent;
    Ent *e;

    ent = GetEnt(dog, idx);
    if (GetState(dog, ent) != 2) {
        return;
    }
    if (dog->fa4 != 0 && dog->ff2 == ent->kind && dog->fa6 == ent->fl) {
        return;
    }
    if (IsCurrent(dog, ent->kind, ent->fl)) {
        return;
    }
    if (!flag) {
        if (idx >= 0 && idx < 20) {
            dog->fa3 = 1;
            dog->ff8 = idx;
            dog->f118 = 180;
            dog->f11e = 0;
        }
        if (dog->f8b == 3) {
            dog->fd2 = 1;
            dog->save->f1a = 10000;
        }
        func_0203e1a0(dog);
        dog->f122 = 0;
        switch (ent->kind) {
        case 9:
            e = GetEnt(dog, FindEnt(dog, dog->ff0 - 12, dog->fa5));
            if (e != NULL && e->val >= 2000 && e->kind == 4 && e->fl == 1) {
                func_02028f5c(dog, 40, 1);
                return;
            }
            break;
        case 35:
            e = GetEnt(dog, FindEnt(dog, dog->ff0 - 12, dog->fa5));
            if (e != NULL && e->val >= 2000) {
                if (e->kind == 9 && e->fl == 1) {
                    switch (ent->fl) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                        func_02028f5c(dog, 41, 1);
                        return;
                    case 2:
                    case 4:
                    case 6:
                    case 8:
                        func_02028f5c(dog, 41, 2);
                        return;
                    }
                }
                if (e->kind == 7) {
                    func_02028f5c(dog, 44, 1);
                    return;
                }
                if (e->kind == 8) {
                    func_02028f5c(dog, 44, 2);
                    return;
                }
            }
            break;
        case 37:
            e = GetEnt(dog, FindEnt(dog, dog->ff0 - 12, dog->fa5));
            if (e != NULL && e->val >= 2000) {
                if (e->kind == 9 && e->fl == 2) {
                    func_02028f5c(dog, 42, 1);
                    return;
                }
                if (e->kind == 7) {
                    func_02028f5c(dog, 45, 1);
                    return;
                }
                if (e->kind == 8) {
                    func_02028f5c(dog, 45, 2);
                    return;
                }
                if (e->kind == 3 && e->fl == 1) {
                    func_02028f5c(dog, 46, 1);
                    return;
                }
            }
            break;
        case 8:
            e = GetEnt(dog, FindEnt(dog, dog->ff0 - 12, dog->fa5));
            if (e != NULL && e->val >= 2000 && e->kind == 7) {
                func_02028f5c(dog, 43, 1);
                return;
            }
            break;
        case 7:
            e = GetEnt(dog, FindEnt(dog, dog->ff0 - 12, dog->fa5));
            if (e != NULL && e->val >= 2000 && e->kind == 8) {
                func_02028f5c(dog, 43, 2);
                return;
            }
            break;
        case 32:
            e = GetEnt(dog, FindEnt(dog, dog->ff0 - 12, dog->fa5));
            if (e != NULL && e->val >= 2000 && e->kind == 32) {
                if (ent->fl == 2 && e->fl == 1) {
                    func_02028f5c(dog, 43, 1);
                    return;
                }
                if (ent->fl == 1 && e->fl == 2) {
                    func_02028f5c(dog, 43, 2);
                    return;
                }
            }
            break;
        }
    }
    func_02028f5c(dog, ent->kind + 12, ent->fl);
    if (flag) {
        return;
    }
    dog->fd2 = 1;
    if (idx == 0) {
        SetPos(dog, 0, dog->save->pos[0] - 10);
        SetPos(dog, 1, dog->save->pos[1] + 10);
    }
    ent->val += 50;
    if (ent->val > 10000) {
        ent->val = 10000;
    }
}
