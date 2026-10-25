#include "ctx.h"
extern u8 *data_0215be48;
extern void func_021032a0(u32 a);
void func_021092b8(void)
{
    func_021032a0((u32)(data_0215be48 + 0x5028));
    *(u32 *)(data_0215be48 + 0x4000 + 0x8b8) = 0;
}
