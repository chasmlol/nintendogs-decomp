#include "ctx.h"

BOOL func_0208cf68(s16 *param_1)
{
    s16 v = *param_1;
    BOOL r = 0;
    if (v == 4) {
        v = 5;
        *param_1 = v;
        r = 1;
    }
    return r;
}
