#include "ctx.h"
extern u8 data_0213b40c[];
extern void func_0201d1f0(u32 p);
extern void func_02035c98(u32 p, u32 v);
void func_020149b4(u32 param_1)
{
    s32 iVar1;
    func_0201d1f0(param_1);
    iVar1 = 1;
    if ((*(u8 *)(param_1 + 0x93) <= 0x18) &&
        ((1 << (u32)*(u8 *)(param_1 + 0x93) & 0x01800003) != 0)) {
        iVar1 = 0;
    }
    func_02035c98(param_1, iVar1);
    ((void (*)(u32, u32))(((u32 *)data_0213b40c)[*(s8 *)(param_1 + 0x8c)]))(param_1, 3);
}
