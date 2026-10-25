#include "ctx.h"

extern s32 func_02035770(u8 *p, s32 v);
extern void func_020460c4(u8 *p, s32 a, s32 b, u8 *c, s32 d, s32 e);

void func_02045ec8(u8 *p)
{
    s32 v = func_02035770(p, 28);
    func_020460c4(p, 0, 13, p + 780, v, 0x2ea);
}
