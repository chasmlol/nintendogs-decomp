#include "ctx.h"

typedef struct {
    u16 x;
    u16 y;
    u8 w;
    u8 h;
} Ent;

typedef struct {
    u16 a;
} Half;

s16 func_02085e20(u8 *p);
s32 func_02085c30(Half p, u32 b);
s32 func_02085be8(Half p, u32 b);

s32 func_02085d0c(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 i;
    Ent *e;
    Half t;
    s32 iVar3;
    s32 iVar4;
    s16 cnt;
    s32 lx;
    s32 ly;

    i = 0;
    e = (Ent *)(param_1 + 8);
    cnt = func_02085e20(param_1);
    if (cnt > 0) {
        do {
            iVar3 = func_02085c30(*(Half *)&e->x, e->w);
            iVar4 = func_02085be8(*(Half *)&e->y, e->h);
            lx = iVar3 + e->w;
            ly = iVar4 + e->h;
            if (iVar3 <= param_2 && param_2 <= lx &&
                iVar4 <= param_3 && param_3 <= ly) {
                return i;
            }
            i = i + 1;
            e = e + 1;
            cnt = func_02085e20(param_1);
        } while (i < cnt);
    }
    return -1;
}
