#include "ctx.h"

extern void func_02073658(u8 *p);
extern void func_02073628(u8 *p, u32 a, u32 b);

void func_02070344(u8 *param_1)
{
    u8 *p = param_1;
    u32 z = 0;
    *(u8 *)(p + 0x2e) = z;
    *(u8 *)(p + 0x2d) = z;
    *(u8 *)(p + 0x2f) = z;
    *(u16 *)(p + 52) = z;
    *(u16 *)(p + 62) = z;
    *(u8 *)(p + 0x40) = 127;
    *(u8 *)(p + 0x41) = 127;
    func_02073658(p + 28);
    func_02073628(p + 28, 0x7f00, 1);
}
