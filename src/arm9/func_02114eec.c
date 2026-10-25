#include "ctx.h"

extern void func_020fcf48(void);

void func_02114eec(s32 *p)
{
    *p = *p + 1;
    if (*p > 20) {
        func_020fcf48();
    }
}
