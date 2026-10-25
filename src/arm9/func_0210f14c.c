#include "ctx.h"

typedef struct {
    u32 f0;
    u32 id;
} Entry;

typedef struct {
    u8 hdr[8];
    Entry entries[1];
} Table;

typedef struct {
    u8 pad00[0xc];
    u32 offs;
} Res;

typedef struct {
    u8 pad00[10];
    u16 len;
} Frame;

typedef struct {
    u16 f0;
    u16 start;
    u16 count;
} Seq;

typedef struct {
    u8 pad00[8];
    u16 f8;
} Info;

typedef struct {
    u8 pad00[0xc];
    u32 fc;
} Pal;

typedef struct {
    u32 used;
    u32 f4;
    Table *tbl;
    Res *res;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
} Slot;

typedef struct {
    u8 pad00[8];
    Table *tbl;
    Res *res;
    u8 pad10[0x48 - 0x10];
    Slot slots[18];
    u8 pad288[0x294 - 0x288];
} Unit;

typedef struct {
    u8 pad00[0x1dec];
    Unit units[1];
} Mgr;

extern Mgr *data_0215be48;
extern Entry *data_0215bfc0;

extern u32 func_02085cc0(Res *res);
extern Info *func_02085ccc(Res *res, u32 id);
extern Seq *func_02085ca4(Res *res, u32 id);
extern void func_021128a8(s32 a, s32 b, u32 c);

static inline u32 GetId(Table *tbl, s32 idx)
{
    data_0215bfc0 = &tbl->entries[idx];
    return data_0215bfc0->id;
}

void func_0210f14c(s32 unitNo, s32 no2, u32 p3, Table *tbl, Res *res, Pal *pal, u16 idx, s32 palNo)
{
    Slot *s;
    Unit *u;
    s32 i;
    u32 id;
    u32 base;
    Seq *seq;

    u = &data_0215be48->units[unitNo];
    for (i = 0; i < 18; i++) {
        s = &u->slots[i];
        if (s->used == 0) {
            break;
        }
    }
    id = GetId(tbl, idx);
    s->used = 1;
    base = func_02085cc0(res);
    s->f4 = base + func_02085ccc(res, id)->f8 * 0x80;
    s->tbl = tbl;
    s->res = res;
    s->f10 = pal->fc + palNo * 0x20;
    seq = func_02085ca4(res, GetId(tbl, idx));
    {
        s32 k;
        u32 sum = 0;
        Frame *frames = (Frame *)((u8 *)res + res->offs);
        for (k = 0; k < seq->count; k++) {
            sum += frames[seq->start + k].len;
        }
        s->f14 = sum << 7;
    }
    s->f1c = p3;
    s->f18 = func_02085ccc(u->res, GetId(u->tbl, no2))->f8;
    func_021128a8(unitNo, no2, p3);
}
