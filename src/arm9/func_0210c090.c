#include "ctx.h"

extern u16 data_021498d4[];
extern u16 data_021497f4[];
extern u16 data_02149864[];
extern u8 data_021483d8[];
extern s32 func_02112320(s32 a, u32 b, u32 c);
extern s32 func_02112458(s32 a, s32 b, u32 c, u32 d);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_0210cf70(u32 *p, s32 a, s32 b);
extern void func_0210d860(u32 *p, s32 a, s32 b);
extern void func_0210ce80(u32 *p);
extern void func_0210d080(u32 *p);
extern void func_021044cc(void);
extern void func_021044dc(void);
extern void func_021044ec(void);
extern void func_0210450c(void);
extern void func_0210451c(void);

void func_0210c090(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 pv;
    s32 iVar1;
    s32 iVar2;
    u32 *puVar3;
    s32 *piVar4;

    piVar4 = (s32 *)((u8 *)param_1 + 0x1c5c);
    iVar1 = func_02112320(2, param_2, param_3);
    if (iVar1 < 0) {
        return;
    }
    if (iVar1 > 56) {
        return;
    }
    iVar2 = *piVar4;
    if (iVar2 == 0) goto S0;
    if (iVar2 == 1) goto S1;
    if (iVar2 != 2) goto DFLT;
    goto S2;
S0:
    *(u16 *)((u8 *)param_1 + 12) = data_021498d4[iVar1];
    goto JOIN;
S1:
    *(u16 *)((u8 *)param_1 + 12) = data_021497f4[iVar1];
    goto JOIN;
S2:
    *(u16 *)((u8 *)param_1 + 12) = data_02149864[iVar1];
    goto JOIN;
DFLT:
    *(u16 *)((u8 *)param_1 + 12) = data_021498d4[iVar1];
JOIN:
    param_1[2] = iVar1;
    if (iVar1 > 49) goto HIGH;
    if (iVar1 >= 49) goto TAIL;
    if (iVar1 > 3) goto DEF;
    if (iVar1 < 0) goto DEF;
    if (iVar1 == 0) goto C0;
    if (iVar1 == 1) goto C1;
    if (iVar1 != 3) goto DEF;
    goto C3;
HIGH:
    if (iVar1 > 50) goto SW;
    if (iVar1 != 50) goto DEF;
    goto TAIL;
SW:
    switch (iVar1) {
    case 51:
        goto K51;
    case 52:
        goto K52;
    case 53:
        goto K53;
    case 54:
        goto K54;
    case 55:
        goto K55;
    case 56:
        goto TAIL;
    default:
        goto DEF;
    }
C3:
    if (*(u16 *)(param_1 + 0xc) != 0) {
        func_0210cf70(param_1, param_1[2], 1);
        pv = param_1[2];
        puVar3 = param_1 + 0xe;
        iVar2 = 0;
        do {
            if (*(s16 *)((u8 *)puVar3 + 2) == 0) {
                *(s16 *)puVar3 = (s16)pv;
                *(u16 *)((u8 *)puVar3 + 2) = 5;
                break;
            }
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 1;
        } while (iVar2 < 10);
        func_021044ec();
        *(u16 *)(param_1 + 0xc) = *(u16 *)(param_1 + 0xc) - 1;
        *(u16 *)(data_021483d8 + *(u16 *)(param_1 + 0xc) * 2) = 0;
        func_0210d080(param_1);
    } else {
        func_021044dc();
    }
    goto TAIL;
K52:
    func_0210d860(param_1, 3, 1);
    goto TAIL;
K51:
    func_021044cc();
    goto TAIL;
K53:
    func_0210d860(param_1, 5, 1);
    goto TAIL;
K54:
    func_0210d860(param_1, 6, 1);
    goto TAIL;
K55:
    func_0210d860(param_1, 7, 1);
    goto TAIL;
C1:
    if (param_1[0x219] == 0) {
        param_1[0x219] = 1;
        func_0210cf70(param_1, 1, 1);
        if (param_1[0x21a] != 0) {
            param_1[0x21a] = 0;
            func_0210cf70(param_1, 0, 0);
        }
        func_0210d860(param_1, 1, 1);
    } else {
        param_1[0x219] = 0;
        func_0210cf70(param_1, 1, 0);
        func_0210d860(param_1, 0, 1);
    }
    goto TAIL;
C0:
    if (param_1[0x21a] != 0) {
        param_1[0x21a] = 0;
        func_0210cf70(param_1, 0, 0);
        func_0210d860(param_1, 0, 1);
    } else {
        param_1[0x21a] = 1;
        func_0210cf70(param_1, 0, 1);
        func_0210d860(param_1, 2, 1);
        if (param_1[0x219] != 0) {
            param_1[0x219] = 0;
            func_0210cf70(param_1, 1, 0);
        }
    }
    goto TAIL;
DEF:
    func_0210ce80(param_1);
    if (param_1[0x219] != 0) {
        param_1[0x219] = 0;
        func_0210d860(param_1, 0, 1);
        func_0210cf70(param_1, 1, 0);
    }
TAIL:
    if (piVar4[2] == 0) goto ZB;
    if (iVar1 == 49) goto N49;
    if (iVar1 == 50) goto N50;
    return;
N49:
    func_0210450c();
    *param_1 = 2;
    func_02112978(2, 5, 2, 2);
    func_02112978(2, 7, 2, 2);
    param_1[0x21c] = 5;
    return;
N50:
    func_0210451c();
    *param_1 = 3;
    func_02112978(2, 6, 2, 2);
    func_02112978(2, 8, 2, 2);
    param_1[0x21c] = 5;
    return;
ZB:
    iVar1 = func_02112458(2, 0x38, param_2, param_3);
    if (iVar1 != 0x38) {
        return;
    }
    func_0210451c();
    *param_1 = 3;
    func_02112978(2, 9, 2, 2);
    func_02112978(2, 10, 2, 2);
    param_1[0x21c] = 5;
}
