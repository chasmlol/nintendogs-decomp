#include "ctx.h"

extern s32 func_02035770(u8 *p, s32 x);
extern void func_020460c4(u8 *p, s32 a, s32 b, u8 *c, s32 d, s16 e);

void func_02045dfc(u8 *param_1)
{
    s32 r;
    r = func_02035770(param_1, 34);
    func_020460c4(param_1, 1, 13, param_1 + 816, r, (s16)0x2eb);
}
