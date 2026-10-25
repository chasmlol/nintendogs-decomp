#include "ctx.h"
extern u8 data_0213b40c[];
extern void func_0201d1f0(u32 p);
extern void func_02035c98(u32 p, u32 v);
void func_02014790(u32 param_1)
{
    s8 cVar1;
    s32 iVar2;
    func_0201d1f0(param_1);
    cVar1 = *(s8 *)(param_1 + 0x93);
    if (cVar1 != 0 && cVar1 != 1 && cVar1 != 0x17 && cVar1 != 0x18) {
        *(s16 *)(param_1 + 0x12e) = 0x2000;
    }
    iVar2 = 1;
    if ((*(u8 *)(param_1 + 0x93) <= 0x18) &&
        ((1 << (u32)*(u8 *)(param_1 + 0x93) & 0x01800003) != 0)) {
        iVar2 = 0;
    }
    func_02035c98(param_1, iVar2);
    ((void (*)(u32, u32))(((u32 *)data_0213b40c)[*(s8 *)(param_1 + 0x8c)]))(param_1, 8);
}
