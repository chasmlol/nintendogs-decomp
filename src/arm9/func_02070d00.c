#include "ctx.h"

extern void func_0206ff50(u32 a);
extern void func_0207cec8(u32 a, s32 b);
extern u8 data_021520c4[];

void func_02070d00(s32 param_1)
{
    func_0206ff50(*(u32 *)(param_1 + 0x40));
    func_0207cec8((u32)data_021520c4, param_1);
    *(u32 *)(param_1 + 0x24) = *(u32 *)(param_1 + 0x24) & 0xfffffffe;
}
