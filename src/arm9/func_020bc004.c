#include "ctx.h"

extern u8 *data_02159464;
extern void func_020cfa3c(u8 *p, u32 a);

void func_020bc004(u32 a)
{
    func_020cfa3c(data_02159464 + 0x88, a);
}
