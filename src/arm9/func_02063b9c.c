#pragma avoid_byte all
#include "ctx.h"

extern u32 func_02063b38(void);

u32 func_02063b9c(u32 param_1, u8 *param_2, u32 *param_3)
{
    u32 i;
    u32 n;
    u32 ch;
    u32 c;

    n = *param_3;
    i = 0;
    if (i < n) {
        do {
            ch = func_02063b38();
            param_2[i] = ch;
            c = param_2[i];
            if (c == 13 || c == 10) {
                *param_3 = i + 1;
                goto ret0;
            }
            i++;
        } while (i < n);
    }
ret0:
    return 0;
}
