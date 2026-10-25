#include "ctx.h"

extern u8 *data_0215be48;
extern void func_021032a0(u8 *p);

void func_021092fc(void)
{
    u8 *p;
    p = data_0215be48;
    func_021032a0(p + 0x5028);
    p = data_0215be48;
    *(s32 *)(p + 0x48b8) = 0;
}
