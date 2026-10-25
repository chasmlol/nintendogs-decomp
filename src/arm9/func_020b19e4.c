#include "ctx.h"

extern s16 *data_0215944c;

void func_020b19e4(void)
{
    s16 *p = data_0215944c;
    if (p == NULL) {
        return;
    }
    if (*p == 0) {
        *p = 1;
    }
}
