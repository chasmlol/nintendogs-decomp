#include "ctx.h"

extern vu8 data_02150f58;

void func_0206fd70(void)
{
    u8 t;
    data_02150f58 = data_02150f58 + 1;
    t = data_02150f58;
    if (t == 0) {
        data_02150f58 = t + 1;
    }
}
