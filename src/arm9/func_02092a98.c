#include "ctx.h"
extern u8 *data_02159034;
extern void func_0206c7bc(u16 a, u8 *b, u32 c);
void func_02092a98(s16 param_1)
{
    u8 *iVar1;
    vu16 loc;
    iVar1 = *(u8 **)(data_02159034 + 0x1000 + 0x434);
    loc = 0;
    func_0206c7bc((u16)loc, iVar1 + 4 + param_1 * 164, 164);
    *(u16 *)(iVar1 + 0x2000 + 0x12) = *(u16 *)(iVar1 + 0x2000 + 0x12) | 1;
}
