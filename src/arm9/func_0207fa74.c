#include "ctx.h"

u32 func_0207fa74(void)
{
    vu16 *p;
    if (*(vu16 *)0x027ffc10 == 0) {
        p = (vu16 *)0x027ff814;
    } else {
        p = (vu16 *)0x027ffc14;
    }
    return *p == 1;
}
