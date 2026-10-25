#include "ctx.h"
extern s16 data_0212ad78[];
extern void func_02089a6c(u32 a, u32 b, s32 c);
void func_02070a28(u32 *p0, u32 p1, u32 p2)
{
    if (p0[0] != 0) {
        func_02089a6c(*(u8 *)(p0[0] + 0x3c), p1, data_0212ad78[p2]);
    }
}
