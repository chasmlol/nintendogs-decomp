#include "ctx.h"

extern u8 *func_0206fc5c(void);

s32 func_0206fad4(void)
{
    s32 n = 0;
    u8 *p = func_0206fc5c();
    while (p != 0) {
        n = n + 1;
        p = *(u8 **)(p + 0x28);
    }
    return n;
}
