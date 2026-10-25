#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 pad0[0x2c];
    u8 state;
    u8 pad2d[0x34 - 0x2d];
    s32 f34;
    s16 angle;
    u8 pad3a[2];
    s32 f3c;
    s16 f40;
} Obj;

extern u8 *data_02159428;
extern s32 data_021449fc;
extern s32 data_021449f8;
extern s32 data_021449f4;
extern s32 data_021449f0;
extern s32 data_021449ec;
extern s32 data_021449e0;
extern s32 data_021449e4;
extern s32 data_021449dc;
extern s32 data_021449d8;
extern s32 data_021449d4;
extern s32 data_021449d0;
extern s32 data_021449cc;
extern s32 data_021449c8;
extern s32 data_021449bc;
extern s32 data_021449c0;
extern s32 data_02144a00;
extern s32 func_02062164(void);

static inline s32 FX_Mul(s32 v1, s32 v2)
{
    return (s32)(((s64)v1 * v2 + 0x800LL) >> 12);
}

static inline s32 RandLerp(s32 start, s32 end)
{
    s32 t = (s32)(func_02062164() << 12) / 0x7fff;
    return start + FX_Mul(end - start, t);
}

#define FX_DEG_TO_IDX(deg) ((s16)((((s64)(deg) * 0xb60b60b60bLL) + 0x80000000000LL) >> 44))

void func_020d9484(Obj *p, u8 state)
{
    p->state = state;
    if (*(u16 *)(data_02159428 + 6) != 18) {
        switch (p->state) {
        case 1:
            p->f34 = data_021449fc;
            p->angle = FX_DEG_TO_IDX(RandLerp(-data_021449f4, -data_021449f8));
            p->f3c = data_021449f0;
            p->f40 = 1000;
            break;
        case 0:
            p->f34 = data_021449fc;
            p->angle = FX_DEG_TO_IDX(RandLerp(data_021449f8, data_021449f4));
            p->f3c = data_021449f0;
            p->f40 = 1000;
            break;
        case 2:
            p->f34 = data_021449ec;
            p->angle = FX_DEG_TO_IDX(RandLerp(data_021449e4, data_021449e0));
            p->f3c = data_021449dc;
            p->f40 = 500;
            break;
        }
    } else {
        switch (p->state) {
        case 1:
            p->f34 = data_021449d8;
            p->angle = FX_DEG_TO_IDX(RandLerp(-data_021449d0, -data_021449d4));
            p->f3c = data_021449cc;
            p->f40 = 1000;
            break;
        case 0:
            p->f34 = data_021449d8;
            p->angle = FX_DEG_TO_IDX(RandLerp(data_021449d4, data_021449d0));
            p->f3c = data_021449cc;
            p->f40 = 1000;
            break;
        case 2:
            p->f34 = data_021449c8;
            p->angle = FX_DEG_TO_IDX(RandLerp(data_021449c0, data_021449bc));
            p->f3c = data_02144a00;
            p->f40 = 500;
            break;
        }
    }
}
