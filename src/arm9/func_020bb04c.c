#include "ctx.h"

extern u8 *data_0215942c;
extern s32 func_02093834(void);
extern s32 func_01ffdb08(s32 v);
extern s32 func_02027ddc(s32 v);
extern s32 func_0202817c(s32 v);
extern void func_020ad7c8(u8 *p, int v);
extern void func_020ad6fc(u8 *p, int v);
extern void func_02027ccc(s32 a, int b);
extern void func_020240e0(s32 a, int b);
extern void func_02028184(s32 a);

s32 func_020bb04c(u8 *param_1)
{
    u32 bVar1;
    s32 cVar2;
    s32 iVar3;
    s32 uVar4;
    s32 iVar5;
    s32 iVar6;

    iVar6 = 0;
    iVar3 = func_02093834();
    if (*(u16 *)data_0215942c != 0) {
        return 0;
    }
    if (iVar3 < 1) {
        uVar4 = func_01ffdb08(0);
        bVar1 = func_02027ddc(uVar4);
        if (bVar1 == 0) {
            *(u16 *)(param_1 + 0x118) = 0;
            *(u16 *)(param_1 + 0x11a) = 0;
            *(u16 *)(param_1 + 0x11c) = 0;
            func_020ad7c8(param_1, 0x12);
            func_020ad6fc(param_1, 0);
            iVar6 = 1;
        } else if (bVar1 == 2) {
            *(u16 *)(param_1 + 0x118) = 3;
            *(u16 *)(param_1 + 0x11a) = 2;
            *(u16 *)(param_1 + 0x11c) = 0;
            *(u16 *)(param_1 + 0x2e) = 2;
            *(u16 *)(param_1 + 0x30) = 0;
            *(u16 *)(param_1 + 0x100) = 0x13;
            iVar6 = 1;
        } else if (bVar1 >= 3 && bVar1 <= 4) {
            if (*(s16 *)(param_1 + 0x122) > 0) {
                *(s16 *)(param_1 + 0x122) = *(s16 *)(param_1 + 0x122) - 1;
            }
            if (*(s16 *)(param_1 + 0x122) <= 0) {
                *(u16 *)(param_1 + 0x118) = 3;
                *(u16 *)(param_1 + 0x11a) = 2;
                *(u16 *)(param_1 + 0x11c) = 0;
                *(u16 *)(param_1 + 0x2e) = 2;
                *(u16 *)(param_1 + 0x30) = 0;
                *(u16 *)(param_1 + 0x100) = 0x13;
                iVar6 = 1;
                func_02027ccc(uVar4, 2);
                func_020240e0(uVar4, 0);
                func_02028184(uVar4);
            } else if (bVar1 == 4) {
                *(u16 *)(param_1 + 0x118) = 0x10;
                *(u16 *)(param_1 + 0x11a) = 3;
                *(u16 *)(param_1 + 0x11c) = 0;
                *(u16 *)(param_1 + 0x2e) = 2;
                *(u16 *)(param_1 + 0x30) = 0;
                *(u16 *)(param_1 + 0x100) = 0x13;
                iVar6 = 1;
            }
        }
    } else {
        iVar5 = -1;
        iVar3 = 0;
        do {
            uVar4 = func_01ffdb08(iVar3);
            if (uVar4 != 0) {
                func_0202817c(uVar4);
                if (func_02027ddc(uVar4) == 0) {
                    iVar5 = iVar3;
                    break;
                }
            }
            iVar3 = (s16)(iVar3 + 1);
        } while (iVar3 < 3);
        if (iVar5 >= 0) {
            *(u16 *)(param_1 + 0x118) = 0;
            *(u16 *)(param_1 + 0x11a) = 0;
            *(s16 *)(param_1 + 0x11c) = (s16)iVar5;
            iVar6 = 1;
            func_020ad7c8(param_1, 0x12);
            func_020ad6fc(param_1, 0);
        } else {
            iVar5 = -1;
            iVar3 = 0;
            do {
                uVar4 = func_01ffdb08(iVar3);
                if (uVar4 != 0) {
                    func_0202817c(uVar4);
                    if (func_02027ddc(uVar4) == 2) {
                        iVar5 = iVar3;
                        break;
                    }
                }
                iVar3 = (s16)(iVar3 + 1);
            } while (iVar3 < 3);
            if (iVar5 >= 0) {
                *(u16 *)(param_1 + 0x118) = 3;
                *(u16 *)(param_1 + 0x11a) = 2;
                *(s16 *)(param_1 + 0x11c) = (s16)iVar5;
                *(u16 *)(param_1 + 0x2e) = 2;
                *(u16 *)(param_1 + 0x30) = 0;
                *(u16 *)(param_1 + 0x100) = 0x13;
                iVar6 = 1;
            }
        }
    }
    return iVar6;
}
