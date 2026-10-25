#include "ctx.h"

extern s32 func_0206419c(void);

u16 func_020647d0(void)
{
    u16 r;
    s32 v = func_0206419c();
    if (v != 0) {
        r = 0x8000;
    } else {
        r = *(vu16 *)0x027ffcfa;
    }
    return r;
}
