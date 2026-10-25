#include "ctx.h"

typedef struct { vu16 v; } S2;

extern u8 *data_0215be4c;
extern void func_02101fb0(u8 *p, u32 *q, u32 p2, S2 t, S2 p4, u32 p5, u32 p6, u32 p7, u32 p8, s32 m1, s32 m2, u8 *p9);

void func_02101ed0(u8 *param_1, u32 param_2, u16 param_3, u16 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u8 *param_9)
{
    S2 t;
    S2 c34 = {0};

    c34.v = ((s16)c34.v & ~0xfff) | ((s16)param_3 & 0xfff);
    t.v = c34.v;
    {
        S2 c36 = {0};
        c36.v = ((s16)c36.v & ~0xfff) | ((s16)param_4 & 0xfff);
        func_02101fb0(param_1, (u32 *)(*(u8 **)&data_0215be4c + 4), param_2, t, c36, param_5, param_6, param_7, param_8, -1, -1, param_9);
    }
}
