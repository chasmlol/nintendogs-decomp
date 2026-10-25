#include "ctx.h"

extern u32 data_02152cdc;
extern u32 data_02152d24;
extern u32 data_02152d54;
extern u32 data_02152cd8;
extern void func_020776d4(u32 a, void *b, u32 c);

void func_020748a0(void)
{
    u32 local_8;
    u32 *p;

    func_020776d4(0x1610, &data_02152cdc, 17);
    func_020776d4(25, &data_02152d24, 12);
    local_8 = 2;
    func_020776d4(16, &local_8, 1);
    func_020776d4(21, &data_02152d54, 32);
    p = &data_02152cd8;
    p[0x3f] = p[0x3f] & 0xfffffffe;
    p[0x3f] = p[0x3f] | 2;
}
