#include "ctx.h"

extern void *func_01ffdb08(s32 x);
extern s32 func_020946ac(s32 a, s32 b);

void func_020aef1c(u8 *param_1, s32 param_2)
{
    s32 cnt;
    s32 i;
    void *r;
    s32 t;
    cnt = 0;
    i = cnt;
    do {
        r = func_01ffdb08(i);
        if (r != NULL) {
            cnt = (s16)(cnt + 1);
        }
        i = (s16)(i + 1);
    } while (i < 3);
    t = func_020946ac(0, param_2);
    if (t > cnt) {
        t = cnt;
    }
    *(s16 *)(param_1 + 0x10c) = (s16)t;
}
