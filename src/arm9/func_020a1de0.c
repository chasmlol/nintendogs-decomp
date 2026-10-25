#include "ctx.h"

typedef struct {
    u16 a[4];
    u16 b[4];
    u16 c[4];
    u8 pad[16];
    s32 p[4];
} Tab;

extern Tab data_021592e4;
extern void func_02070ac8(void *p, u32 a, u32 b);

s32 func_020a1de0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    Tab *t = &data_021592e4;
    u32 p3 = param_3;
    s32 i = 0;
    for (;;) {
        if (t->p[i] != 0 && param_1 == t->a[i] && param_2 == t->b[i]) {
            func_02070ac8(&t->p[i], p3, param_4);
            t->c[i] = (u16)p3;
            return i;
        }
        i = (s16)(i + 1);
        if (i >= 4) break;
    }
    return -1;
}
