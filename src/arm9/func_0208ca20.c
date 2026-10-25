#include "ctx.h"
extern void func_020785bc(u32 v, u32 z);
void func_0208ca20(u8 *obj, s16 idx)
{
    u8 *e = obj + 0xc0 + idx * 12;
    u16 f = *(u16 *)e;
    u32 v = *(u32 *)(e + 4 + ((f ^ 1) * 4));
    func_020785bc(v, 0);
}
