#include "ctx.h"
extern u8 data_0215942c[];
extern s32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, u32 a, u32 b, u32 c);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
extern s32 func_020385e4(u8 *p);
void func_ov003_02180734(u8 *param_1)
{
    s32 uVar1;
    s64 v;
    s32 iVar2;
    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * 0x102 + 0x800;
    func_02024d40(param_1, 0x1e, 0x31, (u32)(v >> 12));
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    if (*(u16 *)*(u8 **)data_0215942c == 1 || *(u16 *)*(u8 **)data_0215942c == 4) {
        func_0203e908(param_1, 0x3ab);
        return;
    }
    iVar2 = func_020385e4(param_1);
    switch (iVar2) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
    }
}
