#include "ctx.h"

extern u32 data_02150e88[];

void func_0206c46c(void)
{
    void (*f)(u32);
    u32 arg;
    data_02150e88[0] = 0;
    f = (void (*)(u32))data_02150e88[4];
    arg = data_02150e88[5];
    if (f != 0) {
        f(arg);
    }
}
