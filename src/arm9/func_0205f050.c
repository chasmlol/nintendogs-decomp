#include "ctx.h"

extern void func_0205f080(u32 a, u32 b, u32 *c, u32 *d);

void func_0205f050(u32 param_1, u32 param_2, u32 param_3, ...)
{
    func_0205f080(param_1, param_2, &param_3 == 0 ? 0 : (u32 *)param_3, (u32 *)((((u32)&param_3) & ~3u) + 4));
}
