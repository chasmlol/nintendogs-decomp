#pragma avoid_byte strb
#include "ctx.h"

#pragma opt_loop_invariants off

typedef struct {
    s16 key;
    s8 type;
    s8 count;
} Rec;

typedef struct {
    u8 pad0[0x248];
    Rec recs[200];
    u8 pad1[0x146];
    u16 flags;
} Tbl;

typedef struct {
    u8 pad0[0x141c];
    Tbl *tbl;
} Glob;

extern Glob *data_02159034;

static inline void Clamp(Rec *rec)
{
    switch (rec->type) {
    case 3:
        if (rec->count > 2) {
            rec->count = 2;
        }
        break;
    case 4:
        if (rec->count > 1) {
            rec->count = 1;
        }
        break;
    }
}

static inline s32 GetCount(s32 type, s32 key)
{
    s32 n = 0;
    s16 i;
    Glob *g = data_02159034;

    for (i = 0; i < 200; i++) {
        Rec *rec = (Rec *)((u8 *)g->tbl->recs + i * 4);
        s32 k = rec->key;
        s32 t = rec->type;
        s32 c = rec->count;
        if (c > 0 && t == type && k == key) {
            n = c;
            break;
        }
    }
    return n;
}

void func_020942c0(s16 *param_1, s32 param_2)
{
    s32 i;
    s16 asA[2];
    Rec *rec;
    s32 v;
    s32 empty;
    s16 asB[2];
    Tbl *tbl;
    s32 found;

    if (param_2 == 0) {
        return;
    }
    tbl = data_02159034->tbl;
    found = -1;
    empty = -1;
    i = 0;
    rec = tbl->recs;
    do {
        if (rec->count > 0) {
            s32 a0 = param_1[0];
            s32 t0 = rec->type;
            s32 k0 = rec->key;
            if (a0 == t0) {
                if (param_1[1] == k0) {
                    found = i;
                    break;
                }
            }
        } else if (empty < 0) {
            empty = i;
        }
        i = (s16)(i + 1);
        rec++;
    } while (i < 200);
    if (found >= 0) {
        s32 cnt0;
        rec = &tbl->recs[found];
        cnt0 = rec->count;
        if (param_2 > 0) {
            v = (s16)(cnt0 + param_2);
            if (v > 99) {
                v = 99;
            }
        } else {
            v = (s16)(cnt0 + param_2);
        }
        if (v > 0) {
            *(volatile s8 *)&rec->type = rec->type;
            rec->count = v;
            Clamp(rec);
        } else {
            rec->key = -1;
            rec->type = -1;
            rec->count = v;
            Clamp(rec);
        }
    } else {
        u8 a;
        u8 *base;
        s32 b;
        base = (u8 *)tbl->recs;
        rec = (Rec *)(base + empty * 4);
        a = param_1[0];
        b = param_1[1];
        *(s16 *)(base + empty * 4) = b;
        rec->type = a;
        rec->count = param_2;
        Clamp(rec);
        if (param_1[0] == 0 && param_1[1] == 28) {
            if (GetCount(4, 18) <= 0) {
                asA[0] = 4;
                asA[1] = 18;
                func_020942c0(asA, 1);
            }
        }
        if (param_1[0] == 1 && param_1[1] == 58) {
            if (GetCount(4, 19) <= 0) {
                asB[0] = 4;
                asB[1] = 19;
                func_020942c0(asB, 1);
            }
        }
    }
    tbl->flags |= 1;
}
