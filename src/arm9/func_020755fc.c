#include "ctx.h"

extern void func_020777d0(u8 *a, u32 b);

void func_020755fc(u32 *param_1)
{
    u32 uVar2;
    s32 cVar3;
    u32 iVar1;
    u8 *b;
    u32 w1;
    u32 w2;

    cVar3 = (param_1[0xd] != 0) ? *(u8 *)((u8 *)param_1 + 0x96) : 0;
    if (cVar3 == 1) {
        param_1[2] = param_1[2] & ~0x40;
        ((void (*)(u32 *))param_1[0xd])(param_1);
        cVar3 = (param_1[0xd] != 0) ? *(u8 *)((u8 *)param_1 + 0x96) : 0;
        uVar2 = param_1[2] & 0x40;
    } else {
        uVar2 = 0;
    }
    if (((param_1[2] & 0x100) == 0) && (uVar2 == 0)) {
        iVar1 = *param_1;
        b = (u8 *)iVar1;
        w1 = (u32)b[1] | ((u32)b[2] << 8) | ((u32)b[3] << 16) | ((u32)b[4] << 24);
        w2 = (u32)b[5] | ((u32)b[6] << 8) | ((u32)b[7] << 16) | ((u32)b[8] << 24);
        func_020777d0((u8 *)(iVar1 + w1), w2);
    }
    if (cVar3 == 3) {
        param_1[2] = param_1[2] & ~0x40;
        ((void (*)(u32 *))param_1[0xd])(param_1);
    }
    *param_1 = *param_1 + 9;
}
