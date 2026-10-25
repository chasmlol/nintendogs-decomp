#include "ctx.h"

extern s32 func_02077bd8(u8 *dst, u8 *src, u32 n);
extern u8 *func_ov009_0215ca54(s32 p);
extern void func_ov009_0215c890(s32 p, u32 a, s32 b);

void func_ov009_0215c890(s32 param_1, u32 param_2, s32 param_3)
{
    s32 local_2d8;
    s32 iVar1;
    s32 iStack_2d0;
    s32 iVar2;
    s32 iStack_2c8;
    s32 iVar3;
    u8 *pbStack_2c0;
    u8 *pbStack_2bc;
    u8 *pbStack_2b8;
    s32 iVar9;
    s32 iVar4;
    u8 *pbVar5;
    s32 iVar8;
    s32 iVar6;
    u8 *pbVar7;
    s32 iStack_2ac;
    s32 iStack_2a8;
    u8 abStack_2a4[128];
    u8 abStack_224[128];
    u8 abStack_1a4[128];
    u8 abStack_124[128];
    u8 abStack_a4[128];

    iVar1 = func_02077bd8(abStack_2a4, (u8 *)(param_1 + *(s32 *)(param_1 + 4)), param_2);
    local_2d8 = 0;
    if (iVar1 > 0) {
        pbStack_2c0 = abStack_2a4;
        iStack_2a8 = 0;
        iStack_2ac = 0;
        do {
            iVar2 = func_02077bd8(abStack_224, (u8 *)(param_1 + *(s32 *)(param_1 + 4)), *pbStack_2c0);
            iStack_2d0 = 0;
            if (iVar2 > 0) {
                pbStack_2bc = abStack_224;
                do {
                    iVar3 = func_02077bd8(abStack_1a4, (u8 *)(param_1 + *(s32 *)(param_1 + 4)), *pbStack_2bc);
                    iStack_2c8 = 0;
                    if (iVar3 > 0) {
                        pbStack_2b8 = abStack_1a4;
                        do {
                            iVar4 = func_02077bd8(abStack_124, (u8 *)(param_1 + *(s32 *)(param_1 + 4)), *pbStack_2b8);
                            iVar9 = iStack_2ac;
                            if (iVar4 > 0) {
                                pbVar7 = abStack_124;
                                do {
                                    pbVar5 = func_ov009_0215ca54(param_1);
                                    iVar6 = func_02077bd8(abStack_a4, pbVar5, *pbVar7);
                    iVar8 = iStack_2a8;
                                    if (iVar6 > 0) {
                                        pbVar5 = abStack_a4;
                                        do {
                                            func_ov009_0215c890(param_1, *pbVar5, param_3 + 5);
                                            pbVar5 = pbVar5 + 1;
                                            iVar8 = iVar8 + 1;
                                        } while (iVar8 < iVar6);
                                    }
                                    pbVar7 = pbVar7 + 1;
                                    iVar9 = iVar9 + 1;
                                } while (iVar9 < iVar4);
                            }
                            pbStack_2b8 = pbStack_2b8 + 1;
                            iStack_2c8 = iStack_2c8 + 1;
                        } while (iStack_2c8 < iVar3);
                    }
                    pbStack_2bc = pbStack_2bc + 1;
                    iStack_2d0 = iStack_2d0 + 1;
                } while (iStack_2d0 < iVar2);
            }
            local_2d8 = local_2d8 + 1;
            pbStack_2c0 = pbStack_2c0 + 1;
        } while (local_2d8 < iVar1);
    }
}
