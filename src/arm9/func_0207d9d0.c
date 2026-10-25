#include "ctx.h"

typedef struct {
    u32 p0;
    u32 p1;
    u32 p2;
    u32 p3;
    u16 h0;
    u16 h1;
    u32 sub;
} Ent;

extern void func_0207d0f8(u32 *p, u32 a, u32 *b, u32 c, u32 d);
extern u32 *func_0207da54(u32 *arr, s16 v);

u32 *func_0207d9d0(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 local[2];
    Ent *e;
    u32 *r;

    e = (Ent *)(param_1 + 9);
    func_0207d0f8(param_1, 0x45585048, &e->sub, param_2, param_3);
    e->h0 = 0;
    e->h1 = 0;
    e->h1 = e->h1 & ~1;
    local[0] = param_1[6];
    local[1] = param_1[7];
    r = func_0207da54(local, 0x4652);
    param_1[9] = (u32)r;
    e->p1 = (u32)r;
    e->p2 = 0;
    e->p3 = 0;
    return param_1;
}
