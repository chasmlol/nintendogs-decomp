#include "ctx.h"

extern u8 *data_0215be4c;

typedef volatile s16 vs16;

typedef struct { vu16 v; } S2;

typedef struct {
    vu16 hi;
    vu16 h36;
} Q4;

extern void func_02101fb0(s32 a, s32 *b, s32 c, S2 d, S2 e, s32 f, s32 g, u16 *h, u32 i, s32 j, s32 k, u8 *l);

void func_02101dd0(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5, s32 param_6,
                   u16 *param_7, u32 param_8, s32 param_9, s32 param_10)
{
    S2 d;
    S2 hi = {0};

    hi.v = (u16)((*(vs16 *)&hi.v & ~0xfff) | (0xfff & (s16)param_3));
    hi.v = (u16)((hi.v & ~0xc000) | (((u16)param_10 & 3) << 14));
    d.v = hi.v;
    {
        S2 lo = {0};
        lo.v = (u16)((*(vs16 *)&lo.v & ~0xfff) | (0xfff & (s16)param_4));
        func_02101fb0(param_1, (s32 *)(*(u8 **)&data_0215be4c + 4), param_2, d,
                      lo, param_5, param_6, param_7, param_8, param_9, -1, NULL);
    }
}
