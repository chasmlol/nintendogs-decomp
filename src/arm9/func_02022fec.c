#include "ctx.h"

extern u32 data_0213a8d4[];
extern u8 data_021369a8[];

static inline s32 Chk(u8 *param_1, u8 *e)
{
    u32 h1;
    s32 h2;
    u32 iv;
    u8 *dd;
    s32 ix;
    if (e == 0) {
        return 0;
    }
    h1 = *(u16 *)e;
    if (h1 == 0) {
        return 0;
    }
    h2 = *(u16 *)(e + 2);
    if (h2 == 0) {
        return 0;
    }
    if (h1 >= 79 && h1 < 99) {
        iv = data_0213a8d4[79];
    } else {
        iv = data_0213a8d4[h1];
    }
    dd = data_021369a8 + (*(u8 *)(iv + 2) - 1) * 5;
    ix = *(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x13) - 1;
    if (*(u16 *)(e + 2) < *(u8 *)((u32)dd + ix)) {
        return 1;
    }
    return 2;
}

static inline u8 *GetE(u8 *p, s32 i)
{
    if (i < 0 || i >= 20) {
        return 0;
    }
    return *(u8 **)(p + 0x9e8) + 144 + (s16)i * 60;
}

u32 func_02022fec(u8 *param_1)
{
    u32 mask = 0;
    s32 i = 0;
    do {
        u8 *e = GetE(param_1, i);
        if (Chk(param_1, e) >= 2 && *(u16 *)e >= 79) {
            mask = mask | (1u << i);
        }
        i = (s16)(i + 1);
    } while (i < 20);
    return mask;
}
