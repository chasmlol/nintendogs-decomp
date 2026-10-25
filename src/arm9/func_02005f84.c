#include "ctx.h"
extern u8 data_0214e934[];
extern u8 data_0214e9c0[];
extern void func_0206c7bc(u16 a, u8 *b, u32 c);
void func_02005f84(void)
{
    vu16 loc;
    if (*(u32 *)data_0214e934 != 0) {
        loc = 0xf000;
        func_0206c7bc((u16)loc, data_0214e9c0, 0x600);
    }
}
