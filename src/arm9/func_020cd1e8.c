#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067df0(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_01ffdb08(s32 a);
extern u8 func_020341fc(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern void func_02027550(s32 a, s32 *b);
extern s32 func_020c8eec(s32 a);

void func_020cd1e8(s32 *param_1, s32 *param_2, s32 *param_3, s32 *param_4, s32 *param_5, s32 param_6)
{
    s32 iVar7;
    s32 local_88;
    s32 aiStack_84[3];
    s32 aiStack_78[3];
    s32 local_6c[3];
    s32 local_60[3];
    s32 aiStack_54[3];
    s32 aiStack_48[3];
    s32 aiStack_3c[3];
    s32 aiStack_30[3];
    s32 iVar6;
    s32 iVar5;
    s32 iVar10;
    s32 uVar3;
    s32 uVar4;
    u8 bVar2;

    if (param_6 != 0) {
        iVar10 = *(s32 *)((u8 *)param_6 + 0xf8) + 0x1000;
        func_01ff832c(-iVar10, param_5, (s32 *)((u8 *)param_6 + 0xbc), param_1);
        func_01ff832c(iVar10, param_5, (s32 *)((u8 *)param_6 + 0xbc), param_2);
        uVar3 = func_02067df0((s32 *)((u8 *)param_6 + 0xb0), param_5);
        uVar3 = FX_Mul(uVar3, 0x3c000);
        if (uVar3 > 0) {
            func_01ff832c(uVar3, param_5, param_2, param_2);
        } else {
            func_01ff832c(uVar3, param_5, param_1, param_1);
        }
        func_02067e34(param_1, param_3, aiStack_54);
        uVar3 = func_02067df0(aiStack_54, param_5);
        uVar4 = func_02067df0(aiStack_54, param_4);
        iVar7 = func_02067898(uVar3, uVar4);
        func_02067e34(param_2, param_3, aiStack_48);
        uVar3 = func_02067df0(aiStack_48, param_5);
        uVar4 = func_02067df0(aiStack_48, param_4);
        local_88 = func_02067898(uVar3, uVar4);
    } else {
        iVar7 = 0x64000;
        local_88 = -iVar7;
    }
    iVar6 = 0;
    do {
        iVar5 = func_01ffdb08(iVar6);
        if (iVar5 != 0) {
            bVar2 = func_020341fc(iVar5);
            if (bVar2 == 0) {
                func_020c8e4c(iVar5, aiStack_84);
                func_02027550(iVar5, aiStack_78);
                iVar10 = func_020c8eec(iVar6) + 0x1000;
                func_01ff832c(-iVar10, param_5, aiStack_84, local_6c);
                func_01ff832c(iVar10, param_5, aiStack_84, local_60);
                uVar3 = func_02067df0(aiStack_78, param_5);
                uVar3 = FX_Mul(uVar3, 0x1e000);
                if (uVar3 > 0) {
                    func_01ff832c(uVar3, param_5, local_60, local_60);
                } else {
                    func_01ff832c(uVar3, param_5, local_6c, local_6c);
                }
                func_02067e34(local_6c, param_3, aiStack_3c);
                uVar3 = func_02067df0(aiStack_3c, param_5);
                uVar4 = func_02067df0(aiStack_3c, param_4);
                iVar5 = func_02067898(uVar3, uVar4);
                if (iVar5 < iVar7) {
                    param_1[0] = local_6c[0];
                    param_1[1] = local_6c[1];
                    param_1[2] = local_6c[2];
                    iVar7 = iVar5;
                }
                func_02067e34(local_60, param_3, aiStack_30);
                uVar3 = func_02067df0(aiStack_30, param_5);
                uVar4 = func_02067df0(aiStack_30, param_4);
                iVar5 = func_02067898(uVar3, uVar4);
                if (iVar5 > local_88) {
                    param_2[0] = local_60[0];
                    param_2[1] = local_60[1];
                    param_2[2] = local_60[2];
                    local_88 = iVar5;
                }
            }
        }
        iVar6 = (s16)(iVar6 + 1);
    } while (iVar6 < 3);
}
