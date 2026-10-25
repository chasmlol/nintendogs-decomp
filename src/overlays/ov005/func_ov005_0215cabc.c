#include "ctx.h"

extern void func_0203e908(u8 *p, s16 v);
extern void func_ov005_0215caf8(u8 *p, u32 *q, u32 v);

void func_ov005_0215cabc(u8 *p)
{
    if (*(u16 *)(p + 0xfc) > 200) {
        func_0203e908(p, 0x448);
    }
    func_ov005_0215caf8(p, (u32 *)(p + 900), 0x2008);
}
