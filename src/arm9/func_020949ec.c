#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(s32 a, s32 b, u32 c);

void func_020949ec(s32 param_1, s16 param_2, u32 param_3)
{
    s32 iVar1;
    s32 iVar2;
    iVar1 = (s32)data_02159034 + 0x155c;
    iVar2 = param_2 * 24 + iVar1;
    iVar2 = *(s32 *)(iVar2 + 4) * (s32)(u16)param_3 + *(s32 *)(iVar2 + 0x10);
    func_0206c7d4(param_1, iVar2 + 4, 0x13c);
    *(u16 *)(iVar2 + 0x186) = *(u16 *)(iVar2 + 0x186) | 1;
}
