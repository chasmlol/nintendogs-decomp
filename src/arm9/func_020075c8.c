#include "ctx.h"

extern u32 data_0214f134;
extern u32 func_020038b8(u32 p, u32 q);
extern void func_0207c9fc(u32 p, u32 q);

void func_020075c8(u32 *param_1)
{
    u32 r;
    r = func_020038b8((u32)param_1, 0x300);
    func_0207c9fc(r, 0x30);
    *(u32 *)&data_0214f134 = r;
}
