#include "ctx.h"
extern void func_0207e18c(u32 a, u32 b, u32 c);
extern void func_0207e16c(u32 a, u32 b, u32 c);
void func_02003918(u32 p0, u32 *p1, u32 p2)
{
    if (*p1 == 0x45585048) {
        goto ca;
    }
    if (*p1 == 0x46524d48) {
        goto cb;
    }
    return;
ca:
    func_0207e18c(p0, (u32)p1, p2);
    return;
cb:
    func_0207e16c(p0, (u32)p1, p2);
}
