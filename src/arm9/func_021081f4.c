#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fe7c0(void);

void func_021081f4(void)
{
    u32 b = data_0215be48;
    b += 0x4000;
    *(u32 *)(b + 0x8c4) = 0;
    func_020fe7c0();
}
