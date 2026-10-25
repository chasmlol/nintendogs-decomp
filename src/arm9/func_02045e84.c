#include "ctx.h"
extern s32 func_02035770(u32 a, s32 b);
extern void func_020460c4(u32 a, u32 b, u32 c, u32 d, s32 e, u32 f);
void func_02045e84(u8 *p)
{
    s32 r = func_02035770((u32)p, 28);
    func_020460c4((u32)p, 1, 13, (u32)(p + 792), r, 0x2eb);
}
