#include "ctx.h"

extern u32 *data_0214f464;
extern u8 *func_01ffdb08(s32 i);
extern void func_02025548(u8 *p);

void func_ov003_021975fc(u32 param_1, u8 *param_2)
{
    u32 bVar1;
    u32 uVar6;
    u32 uVar8;
    s32 iVar10;
    u32 bVar9;
    s16 sh;
    s32 iVar5;
    s32 iVar7;

    if (*(u16 *)(param_2 + 0x96) > 1) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 200) {
        return;
    }
    uVar8 = *data_0214f464 * 0x10dcd + 1;
    uVar6 = (u16)(((u32)(u16)uVar8 * 50) >> 16);
    *data_0214f464 = uVar8;
    if (uVar6 != 0) {
        return;
    }
    bVar9 = 1;
    iVar10 = 0;
    do {
        if (iVar10 != *(s8 *)(param_1 + 0x88)) {
            iVar5 = (s32)func_01ffdb08(iVar10);
            if (iVar5 != 0) {
                iVar7 = *(s16 *)(iVar5 + 0xea);
                if (iVar7 < 960) {
                    goto lowrange;
                }
                if (iVar7 <= 0x3c6) {
                    goto chk;
                }
lowrange:
                sh = (s16)(iVar7 - 0x41d);
                if ((u16)sh > 1) {
                    goto zero;
                }
chk:
                if (*(s8 *)(iVar5 + 0xaf) == 2) {
                    bVar1 = bVar9;
                    goto test;
                }
zero:
                bVar1 = 0;
test:
                if (bVar1) {
                    bVar9 = 0;
                    break;
                }
            }
        }
        iVar10 = (s8)(iVar10 + 1);
    } while (iVar10 < 3);
    if (bVar9 == 0) {
        return;
    }
    func_02025548((u8 *)param_1);
}
