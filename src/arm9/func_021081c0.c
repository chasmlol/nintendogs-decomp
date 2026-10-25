#include "ctx.h"

extern u8 *data_0215be48;
extern void func_021141cc(void);

void func_021081c0(void)
{
    u8 *q = data_0215be48 + 0x1000;
    *(u32 *)(q + 0xd70) = 0xffffffff;
    func_021141cc();
}
