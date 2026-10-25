#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern void func_02067e68(u8 *a, u32 b, u8 *c);
extern void func_0209d430(u8 *a, u32 b, s32 c);

void func_020e46c4(u8 *param_1, u32 param_2)
{
    s32 iVar3;
    s32 uVar2;
    iVar3 = *(s32 *)(param_1 + 0x214);
    func_02067e68(param_1 + 0xbc, param_2, param_1 + 0xbc);
    uVar2 = *(s32 *)(param_1 + 0xb4);
    if (uVar2 >= 0) {
        return;
    }
    *(s32 *)(param_1 + 0xb4) = -FX_Mul(uVar2, 0x1004);
    if (*(s32 *)(iVar3 + 0x14) == 0) {
        func_0209d430(param_1 + 400, 0, FX_Mul(*(s32 *)(param_1 + 0xb4), *(s32 *)(param_1 + 0x24)));
        return;
    }
    return;
}
