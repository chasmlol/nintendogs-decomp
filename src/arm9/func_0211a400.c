#include "ctx.h"

extern s32 data_0215bfc4;
extern s32 data_0214aa48;
extern s32 data_0214aa4c;
extern s32 data_0214aa44;
extern s32 func_0202817c(s32 a);

typedef struct {
    s32 p;
    s32 flag;
    s16 v;
} Ent;

void func_0211a400(u16 *param_1)
{
    Ent e[3];
    s32 iVar4;
    s32 iVar12;
    u32 uVar7;
    s32 sVar9;
    s32 bVar1;
    u16 uVar3;
    Ent *piVar5;

    iVar4 = func_0202817c(*(s32 *)(param_1 + 2));
    uVar7 = 0;
    e[0].p = iVar4 + 2000;
    e[1].p = iVar4 + 2008;
    e[2].p = iVar4 + 2016;
    bVar1 = 0;
    iVar12 = 0;
    sVar9 = -1;
    {
        piVar5 = e;
        do {
            piVar5->v = -1;
            iVar12 = iVar12 + 1;
            piVar5->flag = (*(s16 *)piVar5->p != -1);
            if (piVar5->flag != 0) {
                uVar7 = uVar7 + 1;
                piVar5->v = *(s16 *)(piVar5->p + 2);
            }
            piVar5 = piVar5 + 1;
        } while (iVar12 < 3);
    }
    if (uVar7 == 0) {
        uVar7 = data_0215bfc4 * 0x10dcd + 1;
        data_0215bfc4 = uVar7;
        *param_1 = (u16)((s32)*param_1 / 10 * 10 + 5);
        param_1[1] = (u16)(((u32)(u16)uVar7 * 6) >> 16);
        return;
    }
    {
        u32 uVar10;
        u32 uVar13;

        uVar10 = data_0215bfc4 * 0x10dcd + 1;
        uVar13 = (u16)(((u32)(u16)uVar7 * (u32)(u16)uVar10) >> 16);
        uVar7 = 0;
        data_0215bfc4 = uVar10;
        piVar5 = e;
        iVar12 = 0;
        do {
            if (piVar5->flag != 0) {
                if (uVar7 == uVar13) {
                    if (1 < *(s16 *)(piVar5->p + 4)) {
                        bVar1 = 1;
                    }
                    sVar9 = piVar5->v;
                    data_0214aa4c = iVar12;
                    data_0214aa48 = *(s16 *)piVar5->p;
                    data_0214aa44 = *(s16 *)(piVar5->p + 4);
                    break;
                }
                uVar7 = uVar7 + 1;
            }
            iVar12 = iVar12 + 1;
            piVar5 = piVar5 + 1;
        } while (iVar12 < 3);
    }
    if (bVar1) {
        uVar3 = 4;
    } else if (sVar9 == 1) {
        uVar3 = 3;
    } else if (sVar9 == 2) {
        uVar3 = 2;
    } else if (sVar9 == 3) {
        uVar3 = 1;
    } else {
        uVar3 = 0;
    }
    param_1[1] = uVar3;
}
