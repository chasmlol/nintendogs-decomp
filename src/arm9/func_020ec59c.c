#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u16 h0;
    u8 b2;
    u8 b3;
    u32 w4;
} Loc;

extern u32 data_02132fa0;
extern u32 data_0215be3c;
extern s32 func_01ffdb08(s32 a);
extern u32 func_02028118(s32 a);
extern s32 func_020eb8a0(void *p);

static inline void SwapStore(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

s32 func_020ec59c(s32 param_1, u16 param_2)
{
    Loc loc;
    s32 r;
    u32 tv;
    u32 t;
    u16 *q;

    r = func_01ffdb08(param_1);
    if (r == 0) {
        return 0;
    }
    SwapStore(param_1, (vu8 *)&loc.b2);
    loc.h0 = param_2;
    t = func_02028118(r);
    tv = ((u32 *)&data_02132fa0)[t];
    loc.w4 = 0x94;
    SwapStore(tv, (vu8 *)((u8 *)&loc + 3));
    if (func_020eb8a0(&loc) != 0) {
        q = *(u16 **)&data_0215be3c;
        q[param_1] = 1;
        return 1;
    }
    return 0;
}
