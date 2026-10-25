#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;

extern u32 func_ov005_021668c0(int a, int *b, int *c);
extern u32 func_02028130(u8 *p);
extern int func_0200b8a0(int *a, int *b, int *c);

void func_ov005_0215da28(u8 *param_1, int *param_2, int param_3)
{
    int bVar2;
    int iVar4;
    int iVar5;
    int iVar6;
    s64 lVar1;
    int aiStack_30[3];
    int aiStack_24[3];

    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(u16 *)(param_1 + 0x11c) = *(u16 *)(param_1 + 0x11c) + 1;
    iVar6 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar6 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar6) {
        iVar4 = 0;
    } else {
        iVar4 = *(int *)(data_02159468 + iVar6 * 4 + 4);
    }
    if (iVar4 == 0) {
        goto zflag;
    }
    if (*(s16 *)(iVar4 + 0x96) == 10) {
        bVar2 = 1;
        goto chkflag;
    }
zflag:
    bVar2 = 0;
chkflag:
    if (bVar2) {
        if (iVar6 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar6) {
            iVar6 = 0;
        } else {
            iVar6 = *(int *)(data_02159468 + iVar6 * 4 + 4);
        }
        if (iVar6 != 0 && func_ov005_021668c0(iVar6, aiStack_30, aiStack_24) != 0) {
            iVar6 = func_02028130(param_1);
            iVar4 = func_02028130(param_1);
            iVar5 = func_0200b8a0(param_2, aiStack_30, aiStack_24);
            {
                s64 t1 = (s64)iVar4 * iVar6 + 0x800;
                lVar1 = (s64)(s32)(t1 >> 12) * param_3 + 0x800;
            }
            if (iVar5 < (s32)(lVar1 >> 12)) {
                *(u16 *)(param_1 + 0x11c) = 0;
            }
        }
    }
    iVar6 = *(int *)(data_02159444 + 0x98);
    iVar4 = *(int *)(data_02159444 + 0x94);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    if (iVar4 + iVar6 > 2) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
        return;
    }
    if (*(u16 *)(param_1 + 0x11e) != 0) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
    }
}
