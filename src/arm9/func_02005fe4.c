#include "ctx.h"
extern u32 data_0214e934;
extern u32 data_0214e9c0;
extern void func_0206b4b4(u32 a, u32 b, u32 c);
void func_02005fe4(void)
{
    if (*(u32 *)&data_0214e934 != 0) {
        func_0206b4b4((u32)&data_0214e9c0, 0, 0x600);
    }
}
