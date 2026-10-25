#include "ctx.h"

extern u32 data_02150e4c;
extern u32 func_02068b90(void);

void func_0206ac24(void)
{
    u32 v = func_02068b90();
    data_02150e4c = v;
}
