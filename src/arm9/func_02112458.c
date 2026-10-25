#include "ctx.h"

extern u8 *data_0215be48;
typedef struct { u16 v; } H16;
extern u16 func_02085e20(s32 a);
extern s32 func_02085c30(H16 a, s32 b);
extern s32 func_02085be8(H16 a, s32 b);

s32 func_02112458(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s32 iVar4;
    s32 iVar2;
    s32 iVar3;
    s32 e1;
    s32 e2;
    s32 iv;
    u16 *puVar5;
    u16 uVar1;

    iv = 0;
    switch (param_1) {
    case 0:
    case 1:
        iv = *(s32 *)(data_0215be48 + 0x485c);
        break;
    case 2:
    case 3:
        iv = *(s32 *)(data_0215be48 + 0x4860);
        break;
    }
    if (iv == 0) {
        goto neg;
    }
    iVar4 = *(s32 *)(data_0215be48 + param_1 * 0x294 + 0x1df0);
    puVar5 = (u16 *)((u8 *)iVar4 + 8 + param_2 * 6);
    uVar1 = func_02085e20(iVar4);
    if (param_2 < (s32)(u32)uVar1) {
        do {
            iVar2 = func_02085c30(*(H16 *)puVar5, *(u8 *)(puVar5 + 2));
            iVar3 = func_02085be8(*(H16 *)(puVar5 + 1), *(u8 *)((u8 *)puVar5 + 5));
            e1 = iVar2 + *(u8 *)(puVar5 + 2);
            e2 = iVar3 + *(u8 *)((u8 *)puVar5 + 5);
            if (iVar2 <= param_3 && param_3 <= e1 && iVar3 <= param_4 && param_4 <= e2) {
                goto out;
            }
            param_2 = param_2 + 1;
            puVar5 = puVar5 + 3;
            uVar1 = func_02085e20(iVar4);
        } while (param_2 < (s32)(u32)uVar1);
    }
    param_2 = -1;
out:
    return param_2;
neg:
    return -1;
}
