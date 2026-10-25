#include "ctx.h"

extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_ov003_02184b58(u8 *p, u32 a, u32 b, u32 c, u32 d);

void func_ov003_02184afc(u8 *p)
{
    if (*(u16 *)(p + 252) == 80) {
        func_0203e8cc(p, 1, 0);
    }
    func_ov003_02184b58(p, 0, 511, 0, *(u16 *)(p + 252) > 100);
}
