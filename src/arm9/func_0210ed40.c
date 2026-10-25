#include "ctx.h"

extern u8 *data_0215bfbc;
extern void func_0207dc3c(u32 a, u32 b);

void func_0210ed40(void)
{
    u32 *p = *(u32 **)&data_0215bfbc;
    if (p[0] == 0) {
        func_0207dc3c(p[1], 0x434e535f);
        *(u32 *)(*(u8 **)&data_0215bfbc) = 1;
    }
}
