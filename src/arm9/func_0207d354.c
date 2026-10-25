#include "ctx.h"

extern void func_0207dadc(u32 *, s32);
extern void func_0207dab4(u32 *, s32);
extern void func_0207d5b8(u32 *, u32 *);

void func_0207d354(u8 *param_1, s32 param_2)
{
    u32 auStack_18[3];
    u32 *r5 = (u32 *)(param_1 + 0x24);
    s32 r4 = param_2 - 16;
    func_0207dadc(auStack_18, r4);
    func_0207dab4((u32 *)((u8 *)r5 + 8), r4);
    func_0207d5b8(r5, auStack_18);
}
