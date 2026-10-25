#include "ctx.h"

extern s32 func_020939e8(void);

void func_0211a66c(u8 *param_1)
{
    s32 v = func_020939e8();
    u16 r;
    if (v < 1000) {
        r = 0;
    } else if (v < 5000) {
        r = 1;
    } else if (v < 15000) {
        r = 2;
    } else if (v < 50000) {
        r = 3;
    } else {
        r = 4;
    }
    *(u16 *)(param_1 + 2) = r;
}
