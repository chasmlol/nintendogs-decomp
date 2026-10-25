#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_02159198[];
extern s16 data_02159148;
extern u32 data_0215919c;
extern void func_020a1a40(u32 a);
extern void func_02070ac8(u8 *p, s32 a, s32 b);

void func_0209f438(void)
{
    u8 *S;
    u16 sVar1;
    u16 uVar2;
    s32 iVar6;
    s32 iVar7;

    S = data_02159198;
    sVar1 = *(u16 *)(data_02159074 + 0x18);
    if (*(s32 *)(data_02159074 + 0x1c) == 0) {
        func_020a1a40(7);
    }
    if (*(s16 *)(data_02159074 + 0x3e) == 3) {
        return;
    }
    if (*(s32 *)(data_02159074 + 0x1c) != 0) {
        return;
    }
    if (sVar1 == 29) {
        return;
    }
    if (sVar1 == 30) {
        return;
    }
    if (data_02159148 == 100) {
        return;
    }
    {
        u8 *q = data_02159198;
        *(u16 *)(q + 0x0e) = 60;
        iVar6 = *(s32 *)q;
        iVar7 = 30;
        if (iVar6 != 0) {
            if (*(s32 *)(q + 0x1c) != 0) {
                u16 hi = *(u16 *)(q + 0x1a);
                uVar2 = *(u16 *)(q + 0x18);
                *(vu16 *)(q + 0x18) = 0;
                *(vu32 *)(q + 0x1c) = 0;
                iVar7 = hi - uVar2;
            }
            iVar6 = *(s16 *)(q + 12) * 60;
            func_02070ac8(q, iVar6 / 100, iVar7);
        }
    }
    {
        u8 *q2 = data_02159198;
        u8 *pv = (u8 *)&data_0215919c;
        *(u16 *)(q2 + 0x24) = 60;
        if (*(s32 *)pv != 0) {
            iVar6 = *(s16 *)(q2 + 0x22) * 60;
            func_02070ac8(pv, iVar6 / 100, 30);
        }
    }
    {
        u8 *q3 = data_02159198;
        *(u16 *)(q3 + 0x10) = 60;
    }
    *(s32 *)(S + 0x10c) = 1;
}
