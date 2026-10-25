#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 m[3][3]; } MtxFx33;

typedef struct {
    u16 id;                 /* 0x00 */
    u16 count;              /* 0x02 */
    u8 pad04[0x28 - 0x04];
    u8 owner;               /* 0x28 */
    u8 pad29[0x3c - 0x29];
} Item;

typedef struct {
    u8 pad00[0x13];
    u8 level;               /* 0x13 */
    u8 pad14[0x90 - 0x14];
    Item items[20];         /* 0x90 */
} Inv;

typedef struct {
    u8 pad000[0x88];
    s8 b88;                 /* 0x088 */
    u8 pad089[0x8b - 0x89];
    s8 b8b;                 /* 0x08b */
    u8 pad08c[0xa3 - 0x8c];
    u8 ba3;                 /* 0x0a3 */
    u8 pad0a4;
    u8 ba5;                 /* 0x0a5 */
    u8 ba6;                 /* 0x0a6 */
    u8 ba7;                 /* 0x0a7 */
    u8 ba8;                 /* 0x0a8 */
    u8 pad0a9[0xea - 0xa9];
    s16 hea;                /* 0x0ea */
    u8 pad0ec[0xf0 - 0xec];
    s16 anim;               /* 0x0f0 */
    u8 pad0f2[2];
    u16 hf4;                /* 0x0f4 */
    s16 hf6;                /* 0x0f6 */
    u8 pad0f8[0x112 - 0xf8];
    u16 h112;               /* 0x112 */
    u8 pad114[0x2dc - 0x114];
    VecFx32 pos;            /* 0x2dc */
    u8 pad2e8[0x940 - 0x2e8];
    u32 w940;               /* 0x940 */
    u32 w944;               /* 0x944 */
    u8 pad948[0x9e8 - 0x948];
    Inv *inv;               /* 0x9e8 */
} Pet;

typedef struct {
    u8 pad00[4];
    VecFx32 ofs;            /* 0x04 */
} Res;

typedef struct {
    u8 pad00[0x18];
    Res **res;              /* 0x18 */
    u32 flags;              /* 0x1c */
    VecFx32 pos;            /* 0x20 */
    u8 pad2c[0x5a - 0x2c];
    u16 h5a;                /* 0x5a */
} Obj;

typedef struct {
    u8 pad00[5];
    s8 cur;                 /* 0x05 */
    u8 pad06;
    s8 cur2;                /* 0x07 */
    u8 pad08[2];
    s8 b0a;                 /* 0x0a */
    s8 b0b;                 /* 0x0b */
    s8 mode2;               /* 0x0c */
    s8 mode;                /* 0x0d */
    u8 b0e;                 /* 0x0e */
    u8 b0f;                 /* 0x0f */
    u8 pad10[0x1c - 0x10];
    s8 lock[4];             /* 0x1c */
    s16 h20;                /* 0x20 */
    u8 pad22[2];
    u16 timer;              /* 0x24 */
    u8 pad26[0x2a - 0x26];
    u16 timer2;             /* 0x2a */
    u8 pad2c[0x54 - 0x2c];
    Pet *slots[3];          /* 0x54 */
    u8 pad60[0x73c8 - 0x60];
    fx32 scale[6];          /* 0x73c8 */
    Obj *objs[9];           /* 0x73e0 */
} Game;

typedef struct {
    u8 pad00[2];
    u8 kind;                /* 0x02 */
} ItemInfo;

typedef struct {
    u8 pad00[0x4c];
    MtxFx33 rot;            /* 0x4c */
} Cam;

typedef struct {
    u8 pad00[0x84];
    u16 flags;              /* 0x84 */
    s16 tx;                 /* 0x86 */
    s16 ty;                 /* 0x88 */
} Pad;

extern Game *data_0214f464;
extern u8 *data_0213a8d4[];
extern const u8 data_021369a8[][5];
extern Cam data_02152cd8;
extern Pad *data_02159444;
extern const u8 data_0213b440[3];

extern s32 func_020bc14c(void);
extern void func_020ddf0c(s32 a, u32 b);
extern void func_020dde98(s32 a, s32 b);
extern s32 func_020df020(void);
extern void func_020df15c(void);
extern u16 func_02022e2c(Pet *p, s32 b);
extern BOOL func_020dddb0(s32 a, s32 b);
extern void func_02022a90(void);
extern void func_020230fc(Pet *p);
extern void func_020239b4(Pet *p, s32 b);
extern void func_02023838(Pet *p);
extern void func_02022030(s32 a, s32 b);
extern void func_0202286c(Pet *p, VecFx32 *a, VecFx32 *b);
extern void func_01ff832c(fx32 s, const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern void func_02022820(VecFx32 *v);

#define reg_GX_POWCNT (*(vu16 *)0x04000304)

static inline Pet *GetSlot(s32 i)
{
    if (i < 0 || i >= 3) {
        return NULL;
    }
    return data_0214f464->slots[i];
}

static inline Item *GetItem(Pet *p, s32 i)
{
    if (i < 0 || i >= 20) {
        return NULL;
    }
    return &p->inv->items[(s16)i];
}

static inline s32 ItemRank(Pet *p, const Item *it)
{
    const ItemInfo *info;
    if (it == NULL) {
        return 0;
    }
    if (it->id == 0) {
        return 0;
    }
    if (it->count == 0) {
        return 0;
    }
    if (it->id >= 79 && it->id < 99) {
        info = (const ItemInfo *)data_0213a8d4[79];
    } else {
        info = (const ItemInfo *)data_0213a8d4[it->id];
    }
    if (it->count < data_021369a8[info->kind - 1][p->inv->level - 1]) {
        return 1;
    }
    return 2;
}

static inline s16 FindItem(Pet *p, u16 id, u8 owner)
{
    s16 i;
    for (i = 0; i < 20; i++) {
        Item *it = GetItem(p, i);
        if (it != NULL && it->id == id && it->owner == owner) {
            return i;
        }
    }
    return -1;
}

static inline BOOL IsBusy(Pet *p)
{
    if (p->anim >= 4 && p->anim <= 8) {
        return TRUE;
    }
    if (p->anim == 87) {
        return TRUE;
    }
    if (p->hea >= 15 && p->hea <= 75) {
        return TRUE;
    }
    if (p->hea >= 0x119 && p->hea <= 316) {
        return TRUE;
    }
    return FALSE;
}

static inline void SetAnim(Pet *p, s16 anim)
{
    p->ba8 = 0;
    p->h112 = 0;
    p->anim = anim;
    p->ba5 = 0;
}

static inline void SetPos(Obj *o, const VecFx32 *v)
{
    o->pos.x = v->x + (*o->res)->ofs.x;
    o->pos.y = v->y + (*o->res)->ofs.y;
    o->pos.z = v->z + (*o->res)->ofs.z;
}

void func_02020904(void)
{
    u8 order[3];
    VecFx32 a;
    VecFx32 b;
    VecFx32 v[2];
    VecFx32 w;
    MtxFx33 m;
    s32 sel;
    Pet *p;

    sel = func_020bc14c();
    if (data_0214f464->timer != 0) {
        data_0214f464->timer--;
    }
    switch (data_0214f464->mode) {
    case 1:
        if (data_0214f464->b0b != 0) {
            s16 i;
            if (sel == -1) {
                for (i = 0; i < 3; i++) {
                    p = GetSlot(i);
                    if (p != NULL) {
                        func_020ddf0c(p->b88, p->w940);
                        func_020dde98(i, 1);
                    } else {
                        func_020ddf0c(i, 0);
                        func_020dde98(i, 0);
                    }
                }
            } else {
                for (i = 0; i < 3; i++) {
                    if (i == sel) {
                        p = GetSlot(i);
                        if (p != NULL) {
                            func_020ddf0c(p->b88, p->w944);
                            func_020dde98(i, 1);
                        } else {
                            func_020ddf0c(i, 0);
                            func_020dde98(i, 0);
                        }
                    } else {
                        func_020ddf0c(i, 0);
                        func_020dde98(i, 0);
                    }
                }
            }
            p = GetSlot(sel);
            if (p != NULL && data_0214f464->lock[p->b88] == 0 && p->b8b != 5) {
                u16 id = func_02022e2c(p, 0);
                u8 owner = p->ba6;
                if (id != 0) {
                    s16 a = FindItem(p, id, 0);
                    s16 b = FindItem(p, id, owner);
                    Item *ia = GetItem(p, a);
                    if (GetItem(p, b) != NULL) {
                        data_0214f464->b0e = 0;
                    } else {
                        switch (ItemRank(p, ia)) {
                        case 0:
                            data_0214f464->b0e = 1;
                            break;
                        case 1:
                            data_0214f464->b0e = 2;
                            break;
                        case 2:
                            if (id == 79) {
                                data_0214f464->b0e = 1;
                            } else {
                                data_0214f464->b0e = 0;
                            }
                            break;
                        }
                    }
                } else {
                    data_0214f464->b0e = 0;
                }
            } else {
                data_0214f464->b0e = 0;
            }
        } else {
            s16 i;
            for (i = 0; i < 3; i++) {
                func_020ddf0c(i, 0);
                func_020dde98(i, 0);
            }
        }
        break;
    case 2: {
        s32 r = func_020df020();
        BOOL busy;
        p = GetSlot(data_0214f464->cur);
        busy = IsBusy(p);
        if (!busy) {
            func_020df15c();
        }
        switch (r) {
        case -10:
            break;
        case -9:
        case -8:
            if (data_0214f464->timer == 0) {
                func_020df15c();
            }
            break;
        case -7:
        case -4:
        case -3:
        case -2:
            if (busy) {
                SetAnim(p, 6);
                if (p->anim == 4) {
                    SetAnim(p, 0x6f);
                    p->ba3 = 0;
                }
                func_02022a90();
            }
            data_0214f464->b0f = 2;
            data_0214f464->mode = 3;
            break;
        case -6:
        case -5:
        case -1:
        default:
            if (busy) {
                Item *it = GetItem(p, p->hf6);
                switch (ItemRank(p, it)) {
                case 0: {
                    s16 i;
                    BOOL found = FALSE;
                    for (i = 0; i < 20; i++) {
                        if (ItemRank(p, GetItem(p, i)) == 2 && func_020dddb0(sel, i)) {
                            p->hf6 = i;
                            SetAnim(p, 7);
                            func_02022a90();
                            found = TRUE;
                            break;
                        }
                    }
                    if (!found) {
                        func_020230fc(p);
                        SetAnim(p, 5);
                        data_0214f464->b0f = 3;
                    }
                    break;
                }
                case 1:
                case 2: {
                    Item *it2 = GetItem(p, (s16)r);
                    if (it2 != NULL) {
                        if (it2->id == it->id) {
                            func_020239b4(p, 1);
                        } else if (ItemRank(p, it2) == 2) {
                            p->hf6 = r;
                            SetAnim(p, 7);
                        } else {
                            func_02023838(p);
                        }
                    } else if (func_020dddb0(sel, p->hf6)) {
                        func_020239b4(p, 1);
                    } else {
                        func_02023838(p);
                    }
                    break;
                }
                }
                if (p->anim == 4) {
                    SetAnim(p, 0x6f);
                    p->ba3 = 0;
                }
                func_02022a90();
            }
            data_0214f464->mode = 3;
            break;
        }
        break;
    }
    case 3:
        p = GetSlot(data_0214f464->cur);
        if (!IsBusy(p)) {
            func_020ddf0c(p->b88, p->w944);
            p->hf6 = -1;
            p->hf4 = 0;
            p->ba7 = 0;
            data_0214f464->timer = 0;
            data_0214f464->cur = -1;
            data_0214f464->b0f = 0;
            data_0214f464->mode = 1;
        }
        break;
    }

    switch (data_0214f464->mode2) {
    case 1: {
        s16 i;
        p = GetSlot(data_0214f464->cur);
        if (p == NULL) {
            return;
        }
        m.m[0][0] = data_02152cd8.rot.m[0][0];
        m.m[0][1] = data_02152cd8.rot.m[1][0];
        m.m[0][2] = data_02152cd8.rot.m[2][0];
        m.m[1][0] = data_02152cd8.rot.m[0][1];
        m.m[1][1] = data_02152cd8.rot.m[1][1];
        m.m[1][2] = data_02152cd8.rot.m[2][1];
        m.m[2][0] = data_02152cd8.rot.m[0][2];
        m.m[2][1] = data_02152cd8.rot.m[1][2];
        m.m[2][2] = data_02152cd8.rot.m[2][2];
        a = p->pos;
        b = a;
        func_01ff832c(data_0214f464->scale[0], (VecFx32 *)m.m[0], &a, &a);
        func_01ff832c(data_0214f464->scale[1], (VecFx32 *)m.m[1], &a, &a);
        func_01ff832c(data_0214f464->scale[2], (VecFx32 *)m.m[2], &a, &a);
        func_01ff832c(data_0214f464->scale[3], (VecFx32 *)m.m[0], &b, &b);
        func_01ff832c(data_0214f464->scale[4], (VecFx32 *)m.m[1], &b, &b);
        func_01ff832c(data_0214f464->scale[5], (VecFx32 *)m.m[2], &b, &b);
        for (i = 0; i < 9; i++) {
            Obj *o = data_0214f464->objs[i];
            if (o != NULL) {
                if (i == 2) {
                    SetPos(o, &b);
                } else {
                    SetPos(o, &a);
                }
            }
        }
        switch (func_020df020()) {
        case -8:
            data_0214f464->objs[0]->flags &= ~8;
            data_0214f464->objs[1]->flags |= 8;
            return;
        case -9:
            data_0214f464->objs[0]->flags |= 8;
            data_0214f464->objs[1]->flags &= ~8;
            data_0214f464->objs[4]->h5a = 0x79f;
            data_0214f464->objs[5]->h5a = 0x79f;
            data_0214f464->objs[6]->h5a = 0x79f;
            return;
        }
        func_02022a90();
        return;
    }
    case 2: {
        s16 i;
        u8 *op;
        p = GetSlot(data_0214f464->cur2);
        if (p != NULL) {
            Game *g;
            if (data_0214f464->timer2 == 0) {
                return;
            }
            g = data_0214f464;
            g->timer2--;
            if (g->timer2 == 0) {
                func_02022a90();
                return;
            }
            if (data_0214f464->mode == 1 && (data_02159444->flags & 2)) {
                s32 dx = -data_02159444->tx;
                if (dx <= 0) {
                    dx = data_02159444->tx;
                }
                if (dx < 20) {
                    s32 dy = -64 - data_02159444->ty;
                    if (dy <= 0) {
                        dy = -dy;
                    }
                    if (dy < 15) {
                        func_02022030(data_0214f464->b0a, data_0214f464->h20);
                        return;
                    }
                }
            }
            order[0] = data_0213b440[0];
            order[1] = data_0213b440[1];
            order[2] = data_0213b440[2];
            func_0202286c(p, &v[0], &v[1]);
            op = order;
            for (i = 0; i < 3; i++) {
                SetPos(data_0214f464->objs[i], &v[*op]);
                op++;
            }
            return;
        }
        func_02022a90();
        return;
    }
    case 3:
        p = GetSlot(data_0214f464->cur2);
        if (p != NULL) {
            if (data_0214f464->mode == 1 && ((reg_GX_POWCNT & 0x8000) >> 15) == 0 && (data_02159444->flags & 1)) {
                func_02022820(&w);
                SetPos(data_0214f464->objs[0], &w);
                return;
            }
            func_02022a90();
            return;
        }
        func_02022a90();
        return;
    }
}
