#include "ctx.h"
extern void func_ov005_02165e1c(u8 *p);
void func_ov005_02165dd0(u8 *p)
{
    s16 st = *(s16 *)(p + 0x90);
    if (st == 0) {
        return;
    }
    if (st == 2) {
        goto two;
    }
    if (st == 3) {
        *(u32 *)(p + 0xa8) = 0;
    }
    return;
two:
    func_ov005_02165e1c(p);
}
