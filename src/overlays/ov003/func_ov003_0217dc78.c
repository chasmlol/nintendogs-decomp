#include "ctx.h"
extern s32 func_02028124(u8 *p);
extern void func_02024e40(u8 *p, u32 a, u32 b);
extern void func_02039818(u8 *p);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
void func_ov003_0217dc78(u8 *param_1)
{
    s32 uVar1;
    s64 v;
    s32 iVar2;
    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * 93 + 0x800;
    func_02024e40(param_1, 11, (u32)(v >> 12));
    func_02039818(param_1);
    iVar2 = func_0200f8e0(param_1);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 0x354);
        return;
    }
}
