#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02117700(u8 *p, s32 v);

void func_02103f78(u8 *param_1)
{
    s32 iVar4;
    s32 iVar3;
    s32 iVar1;
    s32 iVar2;

    iVar4 = 0;
    iVar3 = iVar4;
    if (*(s32 *)(param_1 + 0x64) != 0 && *(s32 *)(param_1 + 0x8) == 0) {
        iVar3 = *(s32 *)(param_1 + 0x14);
        if (iVar3 == 0) {
            iVar4 = 1;
        }
    }
    if (*(s32 *)(param_1 + 0xc4) == 4) {
        func_02112798(1, 0x18, iVar3);
    } else {
        func_02117700(param_1 + 0xa8, iVar3);
    }
    if (*(s32 *)(param_1 + 0xc4) == 4) {
        func_02112798(3, 0x18, iVar4);
    } else {
        func_02117700(param_1 + 0x6c, iVar4);
    }
    iVar2 = 0;
    iVar1 = *(s32 *)(data_0215be48 + 0xb8);
    if (iVar1 == 4 || iVar1 == 5 || iVar1 == 10) {
        iVar2 = 1;
    }
    *(s32 *)(param_1 + 0x68) = iVar2;
    if (iVar2 != 0) {
        func_02112798(1, 0x19, iVar3);
        func_02112798(3, 0x19, iVar4);
    }
}
