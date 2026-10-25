#include "ctx.h"

extern u32 data_0214f990[];

void func_02063c28(void)
{
    u32 *p = (u32 *)data_0214f990[0];
    if (p == (u32 *)0) {
        return;
    }
    do {
        void (*fn)(u32, u32);
        data_0214f990[0] = p[0];
        fn = (void (*)(u32, u32))p[1];
        fn(p[2], 0xffffffff);
        p = (u32 *)data_0214f990[0];
    } while (p != (u32 *)0);
}
