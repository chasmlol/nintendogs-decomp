#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(u8 *a, u32 b, u32 c);

void func_0209320c(u32 param_1)
{
    u8 *p = data_02159034;
    u32 t;
    t = *(u32 *)(p + 0x14dc) + 4;
    func_0206c7d4((u8 *)t, param_1, 0x4e38);
}
