#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 v);
extern s32 func_020d7be8(void);
extern s32 func_020d7c2c(void);
extern s32 func_020d7d34(void);
extern s16 func_020d5284(void);
extern s32 func_020d7e20(void);
extern void func_020d7fc0(int v);
extern void func_020d7fa4(u32 a, u32 b);
extern s32 func_020d7f08(void);
extern s32 func_020d7ce0(void);
extern s32 func_020d7c18(void);
extern s32 func_020d7cbc(void);
extern s32 func_020d7c40(void);
extern s16 func_020d5270(void);
extern void func_020d7e8c(void);

void func_0209a730(s16 *param_1)
{
    u32 uVar8;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 bVar6;
    s32 bVar7;
    s32 bVar1;

    uVar8 = func_02080b08();
    iVar3 = func_020d7be8();
    iVar4 = func_020d7c2c();
    iVar5 = func_020d7d34();
    if (iVar5 != 5) goto zb;
    switch (func_020d5284()) {
    case 0x14:
        bVar6 = 1;
        break;
    default:
    zb:
        bVar6 = 0;
        break;
    }
    func_02080b1c(uVar8);
    switch (param_1[3]) {
    case 0:
        break;
    case 1:
        bVar7 = func_020d7e20();
        if (bVar7) {
            func_020d7fc0(0);
            func_020d7fa4(*(u32 *)(param_1 + 6), *(u32 *)(param_1 + 8));
            param_1[3] = 2;
        }
        break;
    case 2:
        iVar3 = func_020d7f08();
        if (iVar3 != 0) {
            param_1[3] = 3;
        }
        break;
    case 3:
        bVar7 = 0;
        bVar1 = func_020d7ce0();
        if (bVar1) {
            iVar3 = func_020d7c18();
            bVar7 = (iVar3 != 0);
        } else {
            bVar1 = func_020d7cbc();
            if (bVar1) {
                bVar7 = 1;
            }
        }
        if (bVar7 && func_020d7c40()) {
            param_1[3] = 4;
        }
        break;
    case 4:
        iVar5 = func_020d5270();
        if (iVar5 != 0) {
            if (iVar4 != 0) {
                param_1[3] = 5;
            }
        } else {
            if (iVar3 != 0) {
                param_1[3] = 5;
            }
        }
        break;
    case 5:
        param_1[0] = 2;
        param_1[2] = 1;
        func_020d7e8c();
        break;
    }
    if (param_1[3] == 5) {
        return;
    }
    if (param_1[4] != 0) {
        param_1[0] = 4;
        return;
    }
    if (!bVar6) {
        return;
    }
    func_020d7e8c();
    param_1[3] = 2;
}
