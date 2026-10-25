#include "ctx.h"

extern u32 data_02155c5c[];
extern void func_0207cac4(u32 *p);

void func_0207c9fc(u32 a, u32 b)
{
    data_02155c5c[0] = a;
    data_02155c5c[1] = b;
    func_0207cac4(data_02155c5c);
}
