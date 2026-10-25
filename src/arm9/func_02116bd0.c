#include "ctx.h"

extern u8 data_02149f58;
extern void func_02112744(u32 a, u32 b, u32 c);

void func_02116bd0(void)
{
    func_02112744(2, (u32)&data_02149f58, 1);
}
