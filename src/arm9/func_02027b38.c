#pragma avoid_byte strb
#include "ctx.h"

typedef volatile s16 vs16;
typedef struct { u8 pad[0x88]; vs16 val; } Obj;

static inline void SwapByte(u32 v, vu8 *p) { *(u8 *)(p) = (u8)(v); }

void func_02027b38(u8 *param_1, s32 param_2)
{
    Obj *s;
    s16 v;
    s16 t;
    SwapByte(1, (vu8 *)(param_1 + 210));
    s = *(Obj **)(param_1 + 0x9e8);
    v = (s16)(param_2 + s->val);
    if (v < 0) {
        s->val = 0;
        t = s->val;
        if (t < 0) { s->val = 0; return; }
        if (t > 10000) s->val = 10000;
        return;
    }
    if (v >= 10000) {
        s->val = 10000;
        t = s->val;
        if (t < 0) { s->val = 0; return; }
        if (t > 10000) s->val = 10000;
        return;
    }
    s->val = v;
    t = s->val;
    if (t < 0) { s->val = 0; return; }
    if (t > 10000) s->val = 10000;
}
