#include "ctx.h"

s32 func_020bc14c(void);
void func_02112798(u32 a, u32 b, u32 c);

void func_02115f4c(u32 param_1)
{
    u32 local[3];
    s32 v;
    s32 i;

    v = func_020bc14c();
    i = 0;
    do {
        local[i] = 0;
        i++;
    } while (i < 3);
    if (v >= 0) {
        if (v < 3) {
            local[v] = 1;
        }
    }
    i = 0;
    do {
        func_02112798(2, (u16)param_1, local[i]);
        i++;
        param_1++;
    } while (i < 3);
}
