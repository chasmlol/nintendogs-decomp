#include "ctx.h"

extern u8 data_02126750;
extern void func_ov003_021901d4(u32 a, u32 b, u32 c);

void func_ov003_021901bc(u32 a)
{
    func_ov003_021901d4(a, (u32)&data_02126750, 1);
}
