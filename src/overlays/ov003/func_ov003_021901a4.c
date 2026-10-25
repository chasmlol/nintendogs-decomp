#include "ctx.h"

extern u8 data_02126740[];
extern void func_ov003_021901d4(u32 a, u32 b, u32 c);

void func_ov003_021901a4(u32 param_1)
{
    ((void (*)(u32, u32, u32))func_ov003_021901d4)(param_1, (u32)data_02126740, 0);
}
