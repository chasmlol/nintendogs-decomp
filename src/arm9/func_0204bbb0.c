#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern u32 func_02028124(u8 *p);
extern void func_0202508c(u8 *p, s32 a, s32 b, u32 c);
extern void func_02039448(u8 *p);
extern void func_02027654(s32 a, u32 *b);
extern void func_02037450(u8 *p, s32 v);
extern void func_0204be88(u8 *p, s32 a, s32 b);

void func_0204bbb0(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = func_02036578(param_1);
    uVar2 = func_02028124(param_1);
    func_0202508c(param_1, 0x10, 0x26, (u32)(((s64)(s32)uVar2 * 279 + 0x800) >> 12));
    if (iVar1 != 0) {
        func_02039448(param_1);
        func_02027654(iVar1, (u32 *)(param_1 + 0x278));
        func_02037450(param_1, 0x300);
    }
    func_0204be88(param_1, iVar1, 1);
}
