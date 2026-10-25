#include "ctx.h"

extern u32 data_0212a968[];
extern s32 func_02067898(s32 a, s32 b);

u16 func_02068078(s32 p1, s32 p2)
{
    s32 iVar4;
    s32 iVar5;
    s32 sVar2;
    s32 sVar3;
    s32 t;
    s32 u;
    s32 v;

    if (p1 <= 0) {
        goto neg1;
    }
    if (p2 <= 0) {
        goto b2;
    }
    if (p2 > p1) {
        sVar2 = 0;
        iVar5 = p1;
        sVar3 = 1;
        iVar4 = p2;
        goto tail;
    }
    if (p2 < p1) {
        iVar5 = p2;
        iVar4 = p1;
        sVar2 = 0x4000;
        sVar3 = 0;
        goto tail;
    }
    return 0x2000;
b2:
    if (p2 >= 0) {
        goto r4000;
    }
    t = -p2;
    if (t < p1) {
        iVar5 = t;
        iVar4 = p1;
        sVar2 = 0x4000;
        sVar3 = 1;
        goto tail;
    }
    if (t > p1) {
        iVar5 = p1;
        iVar4 = t;
        sVar2 = 0x8000;
        sVar3 = 0;
        goto tail;
    }
    return 0x6000;
r4000:
    return 0x4000;
neg1:
    if (p1 >= 0) {
        goto zero8000;
    }
    u = -p1;
    if (p2 >= 0) {
        goto n2;
    }
    v = -p2;
    if (v > u) {
        sVar2 = -0x8000;
        iVar5 = u;
        iVar4 = v;
        sVar3 = 1;
        goto tail;
    }
    if (v >= u) {
        goto ra000;
    }
    sVar2 = -0x4000;
    iVar5 = v;
    iVar4 = u;
    sVar3 = 0;
    goto tail;
ra000:
    return 0xa000;
n2:
    if (p2 <= 0) {
        goto rc000;
    }
    if (p2 >= u) {
        goto n2b;
    }
    sVar2 = -0x4000;
    iVar5 = p2;
    iVar4 = u;
    sVar3 = 1;
    goto tail;
n2b:
    if (p2 > u) {
        sVar2 = 0;
        iVar5 = u;
        sVar3 = sVar2;
        iVar4 = p2;
        goto tail;
    }
    return 0xe000;
rc000:
    return 0xc000;
zero8000:
    if (p2 >= 0) {
        return 0;
    }
    return 0x8000;
tail:
    if (iVar4 == 0) {
        return 0;
    }
    if (sVar3 == 0) {
        goto minus;
    }
    iVar4 = func_02067898(iVar5, iVar4);
    return (u16)(sVar2 + *(s16 *)((u8 *)data_0212a968 + (iVar4 >> 5) * 2));
minus:
    iVar4 = func_02067898(iVar5, iVar4);
    return (u16)(sVar2 - *(s16 *)((u8 *)data_0212a968 + (iVar4 >> 5) * 2));
}
