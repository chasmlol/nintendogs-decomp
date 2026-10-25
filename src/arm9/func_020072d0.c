#include "ctx.h"

BOOL func_020072d0(u32 *p)
{
    if (p[0] >= 24) {
        return FALSE;
    }
    if (p[1] >= 60) {
        return FALSE;
    }
    return p[2] < 60;
}
