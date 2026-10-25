#include "ctx.h"

extern u32 data_ov006_021661c0;
void func_0208f704(u32 a, u32 b);

void func_ov006_021646ec(u32 param_1)
{
    void (*fp)(u32, u32) = func_0208f704;
    fp(param_1, *(u32 *)&data_ov006_021661c0 + 4);
}
