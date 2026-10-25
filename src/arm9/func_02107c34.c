#include "ctx.h"
extern u8 *data_0215be48;
extern void func_020fddc0(u32 a);
void func_02107c34(u32 p0)
{
    u8 *b;
    func_020fddc0(0x20);
    b = data_0215be48;
    *(u32 *)(b + 0x1000 + 0xdd4) = p0;
}
