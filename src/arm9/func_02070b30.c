#include "ctx.h"

void func_02070b30(u32 **p)
{
    if (*p != NULL) {
        **p = 0;
        *p = NULL;
    }
}
