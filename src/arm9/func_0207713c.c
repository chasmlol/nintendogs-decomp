#include "ctx.h"

typedef void (*Cb)(u32 *);

void func_0207713c(u32 *param_1)
{
    Cb cb = (Cb)param_1[3];
    if (cb != NULL) {
        cb(param_1);
    }
    param_1[0] = param_1[0] + 1;
}
