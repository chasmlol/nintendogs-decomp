#include "ctx.h"

typedef struct {
    u8 pad[12];
    s16 h12;
} Ent;

extern u32 data_02159154;
extern s32 func_020df0d4(void);
extern s32 func_020a1624(void *p, s32 a, s32 b, s32 c);
extern void func_02070800(void *p, s32 a, s32 b);

s32 func_0209d334(Ent *param_1, s32 param_2, s32 param_3)
{
    s32 ret;
    u8 *g;

    ret = 0;
    if (func_020df0d4() != -11) {
        g = (u8 *)&data_02159154;
        ret = func_020a1624(g, param_1->h12, 8, param_3);
        func_02070800(g, 0, param_2);
    }
    return ret;
}
