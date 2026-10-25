#include "ctx.h"

extern u32 data_0214495c;
void func_02065058(void);
void func_020d6a60(u32 a, u32 b, u32 c, u32 d);

void func_020d68c8(u32 param_1, u32 param_2)
{
    void (*fp)(u32, u32, u32, u32) = func_020d6a60;
    fp((u32)&data_0214495c, (u32)func_02065058, param_1, param_2);
}
