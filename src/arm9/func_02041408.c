#include "ctx.h"

typedef struct {
    s16 type;
    u8 pad[18];
} Ent;

typedef struct {
    u8 pad[0x30];
    Ent ent[3];
} Tbl;

typedef struct {
    u8 pad[0x132];
    s16 out[3];
    u16 in[3];
} Work;

extern Tbl *data_0215942c;

static inline s16 GetType(s16 idx)
{
    return data_0215942c->ent[idx].type;
}

/* func_02027abc, inlined */
static inline void SetValue(Work *w, s32 idx, s32 val)
{
    s16 hi = w->in[idx] + 5000;
    s16 lo = w->in[idx] - 5000;

    if (val > hi) {
        val = hi;
    }
    if (val < lo) {
        val = lo;
    }
    if (val > 10000) {
        val = 10000;
    }
    if (val < 0) {
        val = 0;
    }
    w->out[idx] = val;
}

u32 func_02041408(Work *w)
{
    s8 i;
    u32 ret = 1;

    for (i = 0; i < 3; i++) {
        switch (GetType(i)) {
        case 0:
            SetValue(w, i, 0);
            ret = 0;
            break;
        case 1:
            SetValue(w, i, 5000);
            break;
        case 2:
            SetValue(w, i, 10000);
            ret = 2;
            break;
        }
    }
    return ret;
}
