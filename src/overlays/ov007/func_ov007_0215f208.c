#include "ctx.h"

extern u32 data_ov007_02160b94;

void func_02005e78(u32 a, u32 b, void *c);
void func_ov007_0215e1c8(u32 a);

void func_ov007_0215f208(void)
{
    func_02005e78(0, 1, &data_ov007_02160b94);
    func_ov007_0215e1c8(3);
}
