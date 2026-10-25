#include "ctx.h"

extern u8 *data_0215be48;
extern s16 *func_02085ddc(u32 a, s32 b);

void func_0210cf70(u32 param_1, s32 param_2, s32 param_3)
{
    s32 innerN;
    s32 outerN;
    u8 *base;
    u8 *pD;
    s32 iVar12;
    s32 iVar11;
    u16 *puVar10;
    s32 iVar7;
    u32 v;
    u8 *iVar8;
    u32 k1;
    u32 k2;
    s16 *psVar6;
    s32 sVar3;
    s32 sVar4;
    u32 uVar1;
    u32 bVar2;
    s32 iVar9;
    s32 xoff;
    s32 yoff;

    iVar8 = (u8 *)((u32)(data_0215be48 + 0x1dec) + 0x528);
    pD = iVar8 + 36;
    psVar6 = func_02085ddc(*(u32 *)(data_0215be48 + 0x2318), param_2);
    sVar3 = psVar6[0];
    sVar4 = psVar6[1];
    uVar1 = *((u8 *)psVar6 + 5);
    bVar2 = *((u8 *)psVar6 + 4);
    iVar9 = *(s32 *)(pD + 0x18);
    xoff = ((sVar3 << 20) >> 20) / 8;
    yoff = ((sVar4 << 20) >> 20) / 8;
    innerN = (s32)(bVar2 >> 3) + 1;
    outerN = (s32)(uVar1 >> 3) + 1;
    base = (u8 *)iVar9 + xoff * 2 + yoff * 0x40;
    v = ((u32)(param_3 & 15) << 28) >> 16;
    iVar12 = 0;
    if (outerN > 0) {
        iVar7 = 0;
        do {
            iVar11 = 0;
            puVar10 = (u16 *)base + (u32)iVar7;
            if (innerN > 0) {
                do {
                    iVar11 = iVar11 + 1;
                    *puVar10 = v | (u16)(*puVar10 & 0xfff);
                    puVar10 = puVar10 + 1;
                } while (iVar11 < innerN);
            }
            iVar12 = iVar12 + 1;
            iVar7 = iVar7 + 0x20;
        } while (iVar12 < outerN);
    }
    *(s32 *)pD = 1;
}
