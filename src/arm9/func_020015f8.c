#include "ctx.h"

extern vu16 data_0214e684[];
extern void func_0200117c(u16 *a, u16 *b);

u32 func_020015f8(u16 *param_1)
{
    u16 t0;
    u16 t1;
    u16 t2;
    u16 t3;
    if ((data_0214e684[26] & 1) == 0) {
        t0 = data_0214e684[2];
        t1 = data_0214e684[3];
        param_1[0] = t0;
        param_1[1] = t1;
        t2 = data_0214e684[4];
        t3 = data_0214e684[5];
        param_1[2] = t2;
        param_1[3] = t3;
        func_0200117c(param_1, param_1);
        return 0;
    }
    return 1;
}
