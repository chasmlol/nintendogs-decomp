#include "ctx.h"

extern int *data_0215942c;
extern int *data_02159424;
extern u16 data_021326ac[];
extern int *data_0214f130;
extern s32 func_01ffdb08(int a);
extern u32 func_0202817c(int a);
extern void func_02095200(int a, int b, int c);
extern s32 func_020b0864(int a, int b, int c);
extern void func_02093fd0(int a);
extern void func_02027bdc(int a, int b);
extern void func_02095134(int a, int b, int c, int d);
extern void func_02092890(int a, int b, int c, int d, int e, int f);
extern void func_02094b54(int a, int b, int c);
extern u8 func_02028184(int a);

u8 func_020b0564(int param_1, int param_2)
{
    s32 iVar3;
    u32 puVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 sVar1;

    iVar3 = func_01ffdb08(*(s16 *)((u8 *)data_0215942c + 0xe));
    puVar4 = func_0202817c(iVar3);
    iVar7 = *(s16 *)(param_2 + 4);
    iVar5 = *(s16 *)data_02159424;
    iVar6 = iVar5;
    switch (iVar5) {
    case 0:
        break;
    case 1:
        if (iVar7 >= 1 && iVar7 <= 3) {
            iVar6 = 2;
        }
        break;
    case 2:
        if (iVar7 < 1) {
            goto k2a;
        }
        if (iVar7 <= 3) {
            iVar6 = 3;
            break;
        }
    k2a:
        iVar6 = 1;
        break;
    case 3:
        if (iVar7 < 1) {
            goto k3a;
        }
        if (iVar7 <= 3) {
            iVar6 = 4;
            break;
        }
    k3a:
        iVar6 = 2;
        break;
    case 4:
        if (iVar7 < 1) {
            goto k4a;
        }
        if (iVar7 <= 3) {
            iVar6 = 5;
            break;
        }
    k4a:
        iVar6 = 3;
        break;
    case 5:
        if (iVar7 < 1 || iVar7 > 3) {
            iVar6 = 4;
        }
        break;
    }
    if (iVar6 != iVar5) {
        func_02095200(puVar4, *(s16 *)((u8 *)data_0215942c + 6), iVar6);
    }
    iVar6 = func_020b0864(*(s16 *)((u8 *)data_0215942c + 6), *(s16 *)data_02159424, iVar7);
    func_02093fd0(iVar6);
    iVar6 = (s16)(iVar7 - 1);
    if (iVar6 < 0 || iVar6 >= 3) {
        iVar6 = 3;
    }
    func_02027bdc(iVar3, data_021326ac[iVar6]);
    func_02095134(puVar4, *(s16 *)((u8 *)data_0215942c + 6), *(s16 *)data_02159424, iVar7);
    sVar1 = *(s16 *)((u8 *)data_0215942c + 6);
    switch (sVar1) {
    case 0:
        goto c0;
    case 1:
        goto c1;
    case 2:
        goto c2;
    }
    goto after;
c0:
    func_02092890(puVar4, sVar1, *(s16 *)data_02159424, iVar7, *(s16 *)(param_2 + 8), 0);
    goto after;
c1:
    func_02092890(puVar4, sVar1, *(s16 *)data_02159424, iVar7, *(s16 *)(param_2 + 0xe), *(s16 *)(param_2 + 0xc));
    goto after;
c2:
    func_02092890(puVar4, sVar1, *(s16 *)data_02159424, iVar7, *(s16 *)(param_2 + 0x10), 0);
after:
    func_02094b54(puVar4, (int)((u8 *)data_0214f130 + 28), (int)((u8 *)data_0214f130 + 44));
    return func_02028184(iVar3);
}
