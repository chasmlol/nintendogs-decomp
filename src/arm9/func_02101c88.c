#include "ctx.h"

extern u8 *data_0215be4c;
extern void func_0206c7bc(u32 a, u8 *b, u32 c);

void func_02101c88(u8 *p0)
{
    vu16 buf[2];
    buf[0] = 0;
    data_0215be4c = p0;
    func_0206c7bc(buf[0], p0, 0x734c);
    *(u16 *)data_0215be4c = 0;
    buf[1] = 0;
    func_0206c7bc(buf[1], data_0215be4c + 0x2948, 0x4a00);
}
