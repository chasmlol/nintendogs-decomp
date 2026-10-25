#include "ctx.h"

extern u32 *data_02157cc0;
extern void func_020800d4(u32 *p, s32 v);

s32 func_0208a620(s32 a, s32 b)
{
    func_020800d4(data_02157cc0, 0x280);
    return *(s16 *)((u8 *)data_02157cc0 + a * 36 + b * 2 + 0x20);
}
