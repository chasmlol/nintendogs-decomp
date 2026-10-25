#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_02048680(u8 *p, s32 a, s32 b);

void func_02048458(u8 *p)
{
    s32 v = func_0203567c(p);
    func_02048680(p, 0, v);
}
