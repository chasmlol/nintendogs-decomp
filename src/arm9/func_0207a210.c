#include "ctx.h"

extern u32 func_0207a41c(u8 *p, u32 a, u32 b, u32 c);
extern u32 func_0207a310(u8 *p, u32 a, u32 b, u32 c);

void func_0207a210(u8 *param_1, u32 param_2, u32 param_3, u32 *param_4)
{
    u8 *base;
    u32 off;
    u32 *puVar4;
    u32 uVar3;
    u32 uVar2;
    u32 uVar1;

    base = param_1 + 8;
    off = *(u16 *)(param_1 + 0xe);
    {
        u32 h = *(u16 *)(base + off);
        puVar4 = (u32 *)(base + off + 4 + h * param_2);
    }
    uVar3 = *param_4;
    uVar1 = func_0207a41c(param_1, puVar4[6], puVar4[7], param_3);
    uVar2 = func_0207a41c(param_1, puVar4[8], puVar4[9], param_3);
    if (uVar1 == 0 && uVar2 == 0) {
        uVar3 = uVar3 | 4;
    } else {
        param_4[9] = uVar1;
        param_4[10] = uVar2;
        uVar3 = uVar3 & 0xfffffffb;
    }
    uVar1 = func_0207a310(param_1, puVar4[4], puVar4[5], param_3);
    if (uVar1 == 0x10000000) {
        uVar3 = uVar3 | 2;
    } else {
        *(u16 *)(param_4 + 8) = (u16)uVar1;
        *(u16 *)((u8 *)param_4 + 0x22) = (u16)(uVar1 >> 16);
        uVar3 = uVar3 & 0xfffffffd;
    }
    uVar1 = func_0207a41c(param_1, puVar4[0], puVar4[1], param_3);
    uVar2 = func_0207a41c(param_1, puVar4[2], puVar4[3], param_3);
    if (uVar1 == 0x1000 && uVar2 == 0x1000) {
        uVar3 = uVar3 | 1;
    } else {
        param_4[6] = uVar1;
        param_4[7] = uVar2;
        uVar3 = uVar3 & 0xfffffffe;
    }
    *param_4 = uVar3;
}
