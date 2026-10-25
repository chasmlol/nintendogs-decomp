#include "ctx.h"

extern u32 func_02028124(u8 *p);
extern s32 func_02024e40(u8 *p, s32 a, s32 b);
extern void func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern void func_020488e4(u8 *p, s32 a);

void func_02047e80(u8 *param_1)
{
    u32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024e40(param_1, 0x16, -(s32)(u32)(((s64)(s32)uVar1 * 93 + 0x800) >> 12));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 0x17, 0x2c, -(s32)(u32)(((s64)(s32)uVar1 * 186 + 0x800) >> 12));
    }
    func_020488e4(param_1, 8);
}
