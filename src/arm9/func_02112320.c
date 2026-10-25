#include "ctx.h"

extern u32 data_0215be48;
extern s16 func_02085e20(u8 *p);
typedef struct { u16 a; } Half;
extern s32 func_02085c30(Half v, u32 b);
extern s32 func_02085be8(Half v, u32 b);

s32 func_02112320(s32 param_1, s32 param_2, s32 param_3)
{
    s32 iVar7;
    u8 *puVar6;
    s32 iVar5;
    s32 iVar3;
    s32 iVar4;
    s32 b1;
    s32 b2;
    s32 s1;
    s32 s2;
    s16 sVar1;
    s16 uVar2;

    iVar5 = 0;
    switch (param_1) {
    case 0:
    case 1:
        iVar5 = *(s32 *)(*(u8 **)&data_0215be48 + 0x4000 + 0x85c);
        break;
    case 2:
    case 3:
        iVar5 = *(s32 *)(*(u8 **)&data_0215be48 + 0x4000 + 0x860);
        break;
    default:
        break;
    }
    if (iVar5 == 0) goto zero;
    {
    s32 jVar5;
    u8 *qVar6;
    iVar7 = 0;
    jVar5 = *(s32 *)(*(u8 **)&data_0215be48 + param_1 * 660 + 0x1df0);
    qVar6 = (u8 *)jVar5 + 8;
    sVar1 = func_02085e20((u8 *)jVar5);
    if (sVar1 <= 0) goto nomatch;
    do {
        iVar3 = func_02085c30(*(Half *)qVar6, *(u8 *)(qVar6 + 4));
        iVar4 = func_02085be8(*(Half *)(qVar6 + 2), *(u8 *)(qVar6 + 5));
        b1 = *(u8 *)(qVar6 + 4);
        b2 = *(u8 *)(qVar6 + 5);
        s1 = iVar3 + b1;
        s2 = iVar4 + b2;
        if (iVar3 <= param_2 && param_2 <= s1 && iVar4 <= param_3 && param_3 <= s2) goto done;
        iVar7 = iVar7 + 1;
        qVar6 = qVar6 + 6;
        uVar2 = func_02085e20((u8 *)jVar5);
    } while (iVar7 < uVar2);
    }
nomatch:
    iVar7 = -1;
    goto done;
zero:
    iVar7 = -1;
done:
    return iVar7;
}
