#include "ctx.h"

extern void (*ARM9_CTOR_START[])(void);

void func_02063c80(void)
{
    void (**p)(void) = ARM9_CTOR_START;
    goto check;
body:
    (*p)();
    p++;
check:
    if (p == NULL) {
        return;
    }
    if (*p == NULL) {
        return;
    }
    goto body;
}
