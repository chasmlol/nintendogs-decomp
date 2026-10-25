#include "ctx.h"

extern u32 data_02159034;
extern void func_0206c7bc(u32 a, u32 b, u32 c);

void func_02095510(s16 param_1)
{
    u8 *p;
    s32 iVar1;
    vu16 z;
    p = *(u8 **)&data_02159034;
    iVar1 = *(s32 *)(p + param_1 * 24 + 0x144c);
    z = 0;
    func_0206c7bc((u32)z, (u32)(iVar1 + 4), 0x85c);
    *(u16 *)(iVar1 + 4) = 0xffff;
    *(u16 *)((u8 *)iVar1 + 2048 + 254) = *(u16 *)((u8 *)iVar1 + 2048 + 254) | 1;
}
