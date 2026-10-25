#include "ctx.h"
extern s32 func_02028124(u8 *p);
extern void func_02024e40(u8 *p, u32 a, u32 b);
extern s32 func_0203567c(u8 *p);
extern void func_02048680(u8 *p, u32 a, s32 b);
void func_020484e4(u8 *param_1)
{
    s32 uVar1;
    s64 v;
    s32 iVar2;
    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * 93 + 0x800;
    func_02024e40(param_1, 11, (u32)(v >> 12));
    iVar2 = func_0203567c(param_1);
    func_02048680(param_1, 0, iVar2);
}
