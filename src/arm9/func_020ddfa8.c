#include "ctx.h"

typedef struct {
    u32 w[4];
} Entry;

typedef struct {
    Entry entries[8];
    s32 count;
    u32 f84;
} Info;

typedef struct Obj {
    u32 f0;
    u32 f4;
    Info info;
} Obj;

extern Obj *volatile data_0215ae8c[];
extern u32 data_0215ae00;
extern Info *func_020dcfa4(u32 a, Obj *b);

static inline Info *GetInfo(Obj *volatile *pp)
{
    if (pp == NULL) {
        return NULL;
    }
    return func_020dcfa4(data_0215ae00, *pp);
}

s32 func_020ddfa8(Info *dst, u32 mask, u32 val)
{
    s32 i = 0;
    s32 max = 0;
    while (mask != 0) {
        dst->f84 = 0;
        if (mask & 1) {
            Info *p;
            s32 j;
            data_0215ae8c[i]->f4 = val;
            p = GetInfo(&data_0215ae8c[i]);
            dst->count = p->count;
            dst->f84 = p->f84;
            for (j = 0; j < p->count; j++) {
                dst->entries[j] = p->entries[j];
            }
            if (max < p->count) {
                max = p->count;
            }
        }
        dst++;
        i++;
        mask >>= 1;
    }
    return -(max == 0);
}
