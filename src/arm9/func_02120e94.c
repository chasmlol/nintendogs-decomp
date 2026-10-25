#include "ctx.h"

s32 func_02112bc0(s32 a, u16 b);
s32 func_02112bf0(s32 a, u16 b);
void func_021129b4(s32 a, u16 b, s32 c, s32 d);
void func_02121170(u32 *p, u32 a, u32 *b, u16 *c, s32 d, s32 e, s32 f, s32 g, s32 h);

void func_02120e94(u32 *param_1, s32 param_2)
{
    u16 local_48[16] = {0};
    s32 local_4c;
    s32 iVar1;
    s32 iVar4;
    s32 iVar9;
    s32 iVar8;
    s32 iVar2;
    s32 iVar3;
    u32 uVar7;
    u16 uVar10;

    if (param_1[0x14] != 0) {
        s32 two = 2;
        local_4c = 0;
        do {
            iVar4 = local_4c;
            if ((s32)param_1[5] > 0) {
                do {
                    uVar10 = ((u16 *)param_1 + iVar4)[12];
                    iVar9 = param_1[0xf];
                    iVar1 = func_02112bc0(two, uVar10);
                    iVar8 = local_4c;
                    if (iVar9 - 1 > 0) {
                        uVar7 = uVar10;
                        do {
                            iVar2 = func_02112bf0(two, uVar7);
                            iVar3 = func_02112bc0(two, uVar7 + 1);
                            func_021129b4(two, uVar7, iVar2, iVar3);
                            uVar7 = uVar7 + 1;
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < iVar9 - 1);
                    }
                    uVar7 = (uVar10 + iVar9) - 1;
                    func_021129b4(two, uVar7, func_02112bf0(two, uVar7), iVar1);
                    iVar4 = iVar4 + 1;
                } while (iVar4 < (s32)param_1[5]);
            }
            param_1[0x14] = param_1[0x14] - 1;
            if ((s32)param_1[0x14] < 0) {
                param_1[0x14] = param_1[0xf] - 1;
            }
            iVar3 = param_1[0x12];
            if ((iVar3 - 1 >= 0) && ((s32)(iVar3 - param_1[0xf]) < (s32)param_1[0x13])) {
                ((void (*)(u32, s32))(*(u32 *)param_1))(param_1[0x14], iVar3 - 1);
            }
        } while (param_1[0x14] != 0);
    }
    iVar8 = param_1[5];
    iVar4 = 0;
    if (iVar8 > 0) {
        do {
            iVar1 = iVar4 + 1;
            local_48[iVar4] = ((u16 *)param_1 + iVar4)[12];
            iVar8 = param_1[5];
            iVar4 = iVar1;
        } while (iVar1 < iVar8);
    }
    func_02121170(param_1, *param_1, param_1 + 1, local_48, iVar8, param_1[0xf], param_1[0x10], param_2, param_1[0x12]);
}
