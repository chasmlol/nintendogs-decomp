#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fddc0(s32 v);

void func_0210809c(u32 p)
{
    func_020fddc0(30);
    *(u32 *)(data_0215be48 + 0x1dc8) = p;
}
