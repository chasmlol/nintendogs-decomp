#include "ctx.h"

extern u32 data_02149f58;
void func_02112610(u32 a, u32 b, u32 c, u32 d);

void func_02116c0c(void)
{
    void (*fp)(u32, u32, u32, u32) = func_02112610;
    fp(2, (u32)&data_02149f58, 0, 0);
}
