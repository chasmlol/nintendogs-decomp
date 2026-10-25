#include "ctx.h"

extern u16 data_0213676c[];
extern u16 data_02136764[];
extern s32 func_0211b228(s32 a);
extern void func_02110f30(s16 *a, s32 b);
extern void func_02110dbc(s32 *a, s16 *b, s32 *c);
extern u32 func_02112dec(s32 a, s32 b);
extern void func_02112dc4(s32 a, s32 b, u32 c);
extern void func_02112798(s32 a, s32 b, s32 c);

void func_02110c1c(s32 *param_1, s32 param_2)
{
    s32 *piVar7;
    s32 iVar4;
    s32 iVar6;
    s32 i;
    s32 idx;
    s32 *piVar5;
    s16 local_40[16];

    piVar7 = 0;
    idx = -1;
    {
        s32 j = param_1[0x1d];
        piVar5 = param_1 + 0x1d + j * 8;
        j = j - 1;
        i = 0;
        do {
            s32 k = j + i;
            if (k >= 0 && k < param_1[1]) {
                piVar7 = piVar5;
                if (*(s16 *)((u8 *)piVar5 + 2) == param_2) {
                    idx = i;
                    break;
                }
            }
            i = i + 1;
            piVar5 = piVar5 + 8;
        } while (i < 5);
    }
    if (idx == -1) {
        return;
    }
    iVar4 = (param_1[0x1f] + idx) % 5;
    func_02110f30(local_40, iVar4);
    func_02110dbc(param_1, local_40, piVar7);
    {
        u32 uVar1 = func_02112dec(2, 0x28);
        func_02112dc4(2, iVar4 + data_0213676c[param_1[5]], uVar1);
    }
    func_02112798(2, (u16)(iVar4 + data_02136764[param_1[5]]), 0);
    iVar6 = 0;
    if (param_1[0] <= 0) {
        return;
    }
    do {
        s32 iVar2 = func_0211b228(iVar6);
        if (*(s16 *)((u8 *)piVar7 + 2) != *(s16 *)((u8 *)param_1 + iVar2 * 2 + 0x954)) {
            u32 uVar1 = func_02112dec(2, 0x28);
            func_02112dc4(2, iVar4 + data_0213676c[iVar6], uVar1);
        }
        iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[0]);
}
