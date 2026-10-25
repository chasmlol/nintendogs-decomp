#include "ctx.h"

extern int func_02088b6c(u16 *buf, int a, int b);
extern int func_02088804(u16 *buf);

int func_02088754(int param_1, int param_2)
{
    u16 buf[22];
    int r;

    r = func_02088b6c(buf, param_1, param_2);
    if (r == 0) {
        goto ret0;
    }
    r = func_02088804(buf);
    if (r != 0) {
        goto ret1;
    }
ret0:
    return 0;
ret1:
    return 1;
}
