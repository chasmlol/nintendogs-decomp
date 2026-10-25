#include "ctx.h"
extern u32 func_01ffdb08(s32 a);
extern void func_02026fc8(u32 a);
void func_020af62c(void)
{
    s16 i = 0;
    do {
        u32 t = func_01ffdb08(i);
        if (t != 0) {
            func_02026fc8(t);
        }
        i = (s16)(i + 1);
    } while (i < 3);
}
