#include "ctx.h"

extern u32 data_02159034;
extern void func_0206c7bc(u32 a, u32 b, u32 c);

void func_020930f8(s16 param_1)
{
    u8 *base = (u8 *)data_02159034;
    u8 *iv = *(u8 **)(base + (s16)param_1 * 24 + 0x14f4);
    vu16 z;
    vu16 *pz = &z;
    *pz = 0;
    func_0206c7bc(*pz, (u32)(iv + 4), 0x85c);
    *(u16 *)(iv + 4) = 0xffff;
    *(u16 *)(iv + 0x8fe) = *(u16 *)(iv + 0x8fe) | 1;
}
