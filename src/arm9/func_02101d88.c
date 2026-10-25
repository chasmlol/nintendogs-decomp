#include "ctx.h"
extern u8 *data_0215be4c;
extern void func_0206c7bc(u16 a, u8 *b, u32 c);
void func_02101d88(void)
{
    vu16 loc;
    *(u16 *)data_0215be4c = 0;
    loc = 0;
    func_0206c7bc((u16)loc, data_0215be4c + 0x2948, 0x4a00);
}
