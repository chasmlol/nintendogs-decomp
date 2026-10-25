#include "ctx.h"

extern u32 *func_020038b8(u32 *a, u32 b);
extern void func_0207d0ac(u32 *a, u32 b);

u32 *func_0208f518(u32 *param_1)
{
    u32 *p = func_020038b8(param_1, 12);
    func_0207d0ac(p, 16);
    return p;
}
