#include "ctx.h"

extern s32 data_02142980;
extern s32 data_0214296c;
extern s32 data_02142968;
extern s32 func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_020d2dcc(s32 a, s32 b, s32 c);
extern void func_020c7df0(u8 *a, s32 b, s32 c);
extern void func_020d3428(s32 a, s32 b, s32 *c);
extern s32 func_02067c30(s32 *a);
extern void func_0209d430(u8 *a, s32 b, s32 c);
extern s32 func_020d2d30(s32 a, s32 b, s32 c);
extern s32 func_02034808(s32 a);
extern u32 func_02034528(s32 a);
extern void func_020c5f4c(u8 *a, s32 b);
extern void func_020c5dd0(u8 *a, s32 b, s32 c);
extern void func_020c5d28(u8 *a, s32 b, s32 c);

void func_020c0948(u8 *param_1)
{
    s32 *piVar8;
    s32 iVar7;
    s32 bVar3;
    s32 iVar4;
    s32 one = 1;
    s32 iVar5;
    s32 aiStack_30[3];

    piVar8 = *(s32 **)(param_1 + 0x214);
    func_02044ca0(*(s16 *)(param_1 + 0x9c));
    bVar3 = 0;
    iVar7 = 0;
    do {
        iVar4 = func_01ffdb08(iVar7);
        if (iVar4 != 0 && iVar7 != *(s16 *)(param_1 + 0x98)) {
            iVar5 = func_020d2dcc((s32)piVar8, iVar7, data_02142980);
            if (iVar5 != 0) {
                bVar3 = one;
                if (*(s16 *)(param_1 + 0x90) == 1) {
                    iVar5 = *(s32 *)(param_1 + 0xb4);
                    iVar5 = (iVar5 > 0) ? iVar5 : -iVar5;
                    if (iVar5 > data_0214296c) {
                        func_020c7df0(param_1, iVar4, one);
                    }
                }
            }
        }
        iVar7 = (s16)(iVar7 + 1);
    } while (iVar7 < 3);
    if (bVar3 != 0) {
        s32 mode = *(s16 *)(param_1 + 0x90);
        s32 pp = *(s32 *)(param_1 + 0x214);
        if (mode == 1) {
            func_020d3428(pp, 2, aiStack_30);
            iVar7 = func_02067c30(aiStack_30);
            func_0209d430(param_1 + 400, 2, iVar7);
        }
    }
    iVar7 = 0;
Lloop:
    iVar4 = func_01ffdb08(iVar7);
    if (iVar4 == 0) {
        goto Linc;
    }
    if (iVar7 == *(s16 *)(param_1 + 0x98)) {
        goto Linc;
    }
    if (func_020d2d30((s32)piVar8, iVar7, data_02142968) == 0) {
        goto Linc;
    }
    if (func_02034808(iVar4) == 0) {
        goto Linc;
    }
    if (func_02034528(iVar4) == 0) {
        goto Linc;
    }
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
    case 2:
        goto Lret;
    case 3:
        func_020c5dd0(param_1, 0x2ccc, iVar7);
        return;
    case 1:
        func_020c5f4c(param_1, iVar7);
        return;
    case 4:
    case 5:
        func_020c5d28(param_1, 0x2ccc, iVar7);
        return;
    default:
        goto Lret;
    }
Linc:
    iVar7 = (s16)(iVar7 + 1);
    if (iVar7 < 3) {
        goto Lloop;
    }
Lret:
    return;
}
