#include "ctx.h"

extern u8 data_02147b94;
extern void func_020fc610(u32 a, u8 *b, u32 c);

void func_020ff7cc(u8 *p)
{
    *(u32 *)(p + 0x940) = 0;
    func_020fc610(11, &data_02147b94, 2);
}
