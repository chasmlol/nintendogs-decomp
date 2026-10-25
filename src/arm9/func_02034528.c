#include "ctx.h"

typedef struct {
    u32 w[3];
} Vec3;

extern u8 *data_02159468;
extern u32 *data_0214f464;

extern void func_020bc024(int *p);
extern int func_02009bd0(int *a, int *b);

u32 func_02034528(u8 *param_1)
{
    int iVar1;
    int uVar2;
    s32 iVar6;
    u32 uVar4;
    int iVar5;
    int aiStack_28[3];
    int uVar3;
    int local_1c[3];

    iVar5 = *(s16 *)(*(u8 **)((int)param_1 + 0x9e8) + 0x2e);
    iVar6 = (s16)(*(s16 *)(0x13e + param_1) - 3);
    if (iVar6 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar6) {
        iVar6 = 0;
    } else {
        iVar6 = *(int *)(data_02159468 + iVar6 * 4 + 4);
    }
    if (iVar6 == 0) {
        goto ret0;
    }
    func_020bc024(aiStack_28);
    *(Vec3 *)local_1c = *(Vec3 *)(iVar6 + 0xbc);
    iVar1 = func_02009bd0(aiStack_28, local_1c);
    if (iVar1 <= 0x17c4000 && *(u16 *)(iVar6 + 0xa4) >= 40) {
        goto blockA;
    }
    if (iVar5 >= 3000) {
        goto Cchk;
    }
    uVar4 = *data_0214f464 * 0x10dcd + 1;
    uVar3 = (u16)(((u16)uVar4 * 5000u) >> 16);
    *data_0214f464 = uVar4;
    uVar2 = (500 + iVar5 > uVar3);
    return uVar2;
Cchk:
    if (5000 <= iVar5) {
        goto blockD;
    }
    uVar4 = *data_0214f464 * 0x10dcd + 1;
    uVar3 = (u16)(((u16)uVar4 * 10000u) >> 16);
    uVar2 = (iVar5 + 4000 > (int)uVar3);
    *data_0214f464 = uVar4;
    return uVar2;
blockD:
    uVar4 = *data_0214f464 * 0x10dcd + 1;
    iVar5 += 40000;
    *data_0214f464 = uVar4;
    uVar3 = (u16)(((u16)uVar4 * 50000u) >> 16);
    uVar2 = (iVar5 > (int)uVar3);
    return uVar2;
blockA:
    iVar5 = iVar5 + 7000;
    uVar4 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar4;
    uVar3 = (u16)(((u16)uVar4 * 10000u) >> 16);
    uVar2 = (iVar5 > (int)uVar3);
    return uVar2;
ret0:
    return 0;
}
