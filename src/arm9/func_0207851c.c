#include "ctx.h"

extern u16 *func_02078500(u8 *a, s32 b);

typedef struct {
    u16 key;
    u16 val;
} Ent;

Ent *func_0207851c(u8 *param_1, s32 param_2, u32 param_3)
{
    u16 *p;
    Ent *base;
    u32 i;
    p = func_02078500(param_1, param_2);
    base = (Ent *)(param_1 + p[3]);
    i = (u32)((s32)(s16)p[2] * param_3) >> 12;
    while (i != 0 && base[i].key >= param_3) {
        i = i - 1;
    }
    while (i + 1 < p[0] && (&base[i])[1].key <= param_3) {
        i = i + 1;
    }
    return &base[i];
}
