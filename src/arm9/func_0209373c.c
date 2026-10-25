#include "ctx.h"

extern u32 data_02159034;
void func_0200719c(u32 *a, s32 *b);
s32 func_02092140(u32 *a, u32 *b, s32 *c);

s32 func_0209373c(void)
{
    u32 auStack_28[4];
    s32 aiStack_18[4];
    u32 iVar1;
    u32 *p;

    iVar1 = *(u32 *)((u8 *)data_02159034 + 0x141c);
    p = (u32 *)(iVar1 + 0x60);
    func_0200719c(auStack_28, aiStack_18);
    return func_02092140(p, auStack_28, aiStack_18);
}
