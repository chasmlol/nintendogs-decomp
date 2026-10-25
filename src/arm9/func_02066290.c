#include "ctx.h"
typedef volatile u64 vu64;

void func_02066290(u32 *param_1)
{
    *(u64 *)param_1 = *(vu64 *)0x04000290;
    *(u64 *)(param_1 + 2) = *(vu64 *)0x04000298;
    *(u16 *)(param_1 + 6) = *(vu16 *)0x04000280 & 3;
    *(u64 *)(param_1 + 4) = *(vu64 *)0x040002b8;
    *(u16 *)((u8 *)param_1 + 0x1a) = *(vu16 *)0x040002b0 & 1;
}
