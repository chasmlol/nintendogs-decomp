#include "ctx.h"

extern u32 *func_0206fc5c(void);

u32 *func_0206fc10(u32 param_1)
{
    u32 *p = func_0206fc5c();
    while (p != NULL) {
        if (*p == param_1) {
            return p;
        }
        p = (u32 *)p[10];
    }
    return NULL;
}
