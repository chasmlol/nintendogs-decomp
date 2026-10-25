#include "ctx.h"

extern u32 func_0207ceb0(u32 a, u32 b);

u32 func_0207d1b4(u32 param_1, u32 param_2)
{
    u32 n;
    u32 r;

    n = func_0207ceb0(param_1, 0);
    if (n == 0) {
        goto Lnull;
    }
Lbody:
    if (*(u32 *)(n + 0x18) > param_2) {
        goto Lnext;
    }
    if (param_2 >= *(u32 *)(n + 0x1c)) {
        goto Lnext;
    }
    r = func_0207d1b4(n + 0xc, param_2);
    if (r != 0) {
        return r;
    }
    return n;
Lnext:
    n = func_0207ceb0(param_1, n);
    if (n != 0) {
        goto Lbody;
    }
Lnull:
    return 0;
}
