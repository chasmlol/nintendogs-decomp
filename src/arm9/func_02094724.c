#include "ctx.h"
extern u8 data_02159034[];
extern s32 func_020bcf08(s32 a);
s32 func_02094724(void)
{
    s32 iVar8;
    s32 iVar7;
    s32 iVar6;
    s32 bVar1;
    s32 iVar3;
    s32 iVar5;
    s32 iVar4;
    s32 f3;
    s32 f2;

    bVar1 = 0;
    iVar6 = 0;
    iVar5 = 0;
    iVar8 = (s32)*(s16 *)(*(u8 **)(*(u8 **)data_02159034 + 0x141c) + 0x7e);
    iVar7 = 0x89;
    do {
        iVar3 = (s32)(*(u8 **)(*(u8 **)data_02159034 + 0x141c)) + 0x248;
        iVar4 = iVar3 + iVar5;
        f3 = *(s8 *)(iVar4 + 3);
        iVar3 = (s32)*(s16 *)(iVar3 + iVar5);
        f2 = *(s8 *)(iVar4 + 2);
        if (f3 > 0 && f2 == 0 && func_020bcf08(iVar3) == 5) {
            if (iVar7 > iVar3) {
                iVar7 = iVar3;
            }
            if (iVar8 == iVar3) {
                bVar1 = 1;
                goto LAB;
            }
        }
        iVar6 = (iVar6 + 1) * 0x10000 >> 16;
        iVar5 = iVar5 + 4;
    } while (iVar6 < 200);
LAB:
    if (!bVar1) {
        iVar6 = *(s32 *)(*(u8 **)data_02159034 + 0x141c);
        *(s16 *)(iVar6 + 0x7e) = (s16)iVar7;
        *(u16 *)(iVar6 + 0x6ae) = *(u16 *)(iVar6 + 0x6ae) | 1;
        iVar8 = iVar7;
    }
    return iVar8;
}
