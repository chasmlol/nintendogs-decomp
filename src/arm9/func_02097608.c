#include "ctx.h"

typedef struct Entry {
    u8 pad0[0x10];
    void *ptr;
} Entry;

typedef struct Ctx {
    s32 active;
    s16 idx;
    s16 count;
    s16 state;
    s16 pad;
    Entry entries[1];
} Ctx;

typedef struct Desc {
    u32 unk0;
    u32 size;
    u32 unk8;
    u32 unkc;
    u8 *bufA;
    u8 *bufB;
} Desc;

typedef struct Footer {
    u32 magic;
    u16 sum;
    u16 pad;
} Footer;

extern Ctx *data_02159034;
extern Desc *func_020978d0(s32 a, s32 b);

static inline void SetChecksum(u8 *buf, u32 size)
{
    u32 n;
    Footer *f;
    u16 sum = 0;
    u32 i;

    *(u32 *)buf = 0;
    f = (Footer *)(buf + size) - 1;
    f->magic = 0x444f473f;
    n = size - 4;
    for (i = 0; i < n; i++) {
        sum += buf[i];
    }
    f->sum = sum;
}

BOOL func_02097608(void)
{
    Ctx *ctx = data_02159034;
    Desc *d;

    if (ctx->active == 0) {
        return TRUE;
    }
    if (ctx->count > 0) {
        switch (ctx->state) {
        case 0: {
            Entry *e = &ctx->entries[ctx->idx];
            ctx->state = 1;
            if (e->ptr != NULL) {
                d = func_020978d0(0, 0);
                SetChecksum(d->bufA, d->size);
            }
            break;
        }
        case 1:
            ctx->idx++;
            if (data_02159034->idx >= data_02159034->count) {
                data_02159034->state = 2;
                data_02159034->idx = 0;
                if (data_02159034->entries[data_02159034->idx].ptr != NULL) {
                    d = func_020978d0(0, 0);
                    SetChecksum(d->bufB, d->size);
                }
            } else {
                if (data_02159034->entries[data_02159034->idx].ptr != NULL) {
                    d = func_020978d0(0, 0);
                    SetChecksum(d->bufA, d->size);
                }
            }
            break;
        case 2:
            ctx->idx++;
            if (data_02159034->idx >= data_02159034->count) {
                data_02159034->state = 3;
            } else if (data_02159034->entries[data_02159034->idx].ptr != NULL) {
                d = func_020978d0(0, 0);
                SetChecksum(d->bufB, d->size);
            }
            break;
        case 3:
            break;
        }
    }
    if (data_02159034->state == 3) {
        data_02159034->active = 0;
    }
    return data_02159034->idx == data_02159034->count;
}
