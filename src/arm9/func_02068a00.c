#include "ctx.h"

extern u32 data_02150e38;
void func_02068a84(u32 a);

void func_02068a00(void)
{
    void (*fp)(u32) = func_02068a84;
    fp((u32)&data_02150e38);
}
