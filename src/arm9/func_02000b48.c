#include "ctx.h"
extern u32 func_0206cdb8(u32 a, u32 b, u32 c);
extern void WaitByLoop(u32 n);
void func_02000b48(u32 param_1)
{
    u32 r = func_0206cdb8(13, param_1, 0);
    if (r == 0) {
        return;
    }
    do {
        WaitByLoop(1);
        r = func_0206cdb8(13, param_1, 0);
    } while (r != 0);
}
