#include "ctx.h"

extern u8 *data_0214e93c;
extern u8 *data_0214e938;
extern u32 data_0214e934;
extern void func_0206b174(u32 a, u32 b, u32 c);
extern void func_0206b8a8(u32 a, u32 b, u32 c);

void func_02006028(void)
{
    func_0206b174(*(u32 *)(data_0214e93c + 0x14), 0, 0xc00);
    func_0206b8a8(*(u32 *)(data_0214e938 + 0xc), 0x1e0, 6);
    data_0214e934 = 1;
}
