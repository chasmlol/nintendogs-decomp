#include "ctx.h"
extern void func_020a1858(u32 a);
void func_021045a4(s32 p0)
{
    if (p0 == 1) {
        goto one;
    }
    if (p0 == 2) {
        goto two;
    }
    return;
one:
    func_020a1858(117);
    return;
two:
    func_020a1858(118);
}
