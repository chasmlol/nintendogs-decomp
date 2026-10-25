#include "ctx.h"

extern u8 data_02159148[];
extern void func_0209b850(u8 *p, s32 a, s32 b);
extern void func_020e1ed8(u32 p);

u32 func_0209ceb4(u8 *p)
{
    u32 v = *(u32 *)(data_02159148 + 0x10);
    if (v == 0) {
        return 0;
    }
    func_0209b850(p, *(s16 *)(p + 12), 7);
    func_020e1ed8(v);
    return 1;
}
