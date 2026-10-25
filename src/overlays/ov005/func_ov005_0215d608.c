#include "ctx.h"

extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s16 v);

void func_ov005_0215d608(u8 *p)
{
    func_02027ee0(p, 5, -50);
    if (*(u16 *)(p + 0xfc) > 80) {
        func_0203e908(p, 0x43d);
    }
}
