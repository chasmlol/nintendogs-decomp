#include "ctx.h"
#pragma opt_common_subs off
#pragma opt_loop_invariants off
extern u8 *data_0214be48_unused;
extern u8 *data_0215be48;
void func_02112744(s32 idx, u16 *list, u32 v)
{
    for (; *list != 0xffff; list++)
        *(u32 *)((u8 *)(idx << 11) + (u32)data_0215be48 + (*list << 4) + 0x283c) = v;
}
