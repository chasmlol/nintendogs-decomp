#include "ctx.h"

extern void func_02089964(u32 a, u32 b, u32 c, u32 d);
extern void func_02002250(u8 *p);
extern void func_02002238(u8 *p);

void func_02070e58(u8 *p)
{
    func_02089964(*(u32 *)(p + 0x44), 0, 1u << *(u32 *)(p + 0x40), 0);
    if (((*(s32 *)(p + 0x24) << 30) >> 31) == 0) {
        func_02002250(p + 8);
        func_02002238(p + 20);
        *(u32 *)(p + 0x24) = *(u32 *)(p + 0x24) | 2;
    }
}
