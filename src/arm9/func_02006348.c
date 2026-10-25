#include "ctx.h"

extern u8 data_0214efdc[];

void func_02006348(u16 a, u16 b, u16 c)
{
    *(u16 *)(data_0214efdc + 0xc) = a;
    *(u16 *)(data_0214efdc + 0xe) = b;
    *(u16 *)(data_0214efdc + 0x10) = c;
}
