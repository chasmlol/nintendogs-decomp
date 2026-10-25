#pragma avoid_byte strb
#include "ctx.h"

u32 func_02027708(u8 *p);
s32 func_02032aac(u8 *p, u32 a);
s32 func_0204499c(void);
s32 func_02044ce4(s32 a);
void func_0203e908(u8 *p, u32 a);
void func_02027f40(u8 *p, u32 a, u32 b);
void func_02027abc(u8 *p, u32 a, u32 b);
void func_020449d0(u32 a);
void func_0204494c(u32 a);
void func_0204ea24(u8 *p, u8 *q);

u32 func_ov004_0216be28(u8 *param_1, u8 *param_2)
{
    s32 bVar1;
    u32 uVar2;
    s32 iVar3;
    s32 iVar4;

    if (param_2 != 0) {
        uVar2 = func_02027708(param_2);
        bVar1 = func_02032aac(param_1, uVar2);
        if (bVar1) {
            iVar4 = (s32)*(s16 *)(param_1 + 0xea);
            bVar1 = 0;
            if (iVar4 == 0x4d0) {
                bVar1 = 1;
                goto T1;
            }
            if (iVar4 < 0x4ce) {
                goto Z1;
            }
            if (iVar4 > 0x4cf) {
                goto Z1;
            }
            bVar1 = 1;
            goto T1;
        Z1:
            bVar1 = 0;
        T1:
            if (bVar1) {
                goto DEC;
            }
            iVar4 = (s32)*(s16 *)(param_2 + 0xea);
            bVar1 = 0;
            if (iVar4 == 0x4d0) {
                bVar1 = 1;
                goto T2;
            }
            if (iVar4 < 0x4ce) {
                goto Z2;
            }
            if (iVar4 > 0x4cf) {
                goto Z2;
            }
            bVar1 = 1;
            goto T2;
        Z2:
            bVar1 = 0;
        T2:
            if (!bVar1) {
                goto MAIN;
            }
        DEC:
            bVar1 = func_0204499c();
            if (bVar1) {
                *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) - 1;
            }
            func_0203e908(param_1, 0x4d0);
            return 1;
        MAIN:
            bVar1 = func_0204499c();
            if (bVar1) {
                *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
            }
            iVar3 = func_02044ce4((s32)*(s8 *)(param_1 + 0x88));
            if (iVar3 == 0) {
                goto P4D2;
            }
            if (*(s32 *)(param_1 + 0x488) < 4) {
                goto P4D1;
            }
            param_1[0xb0] = param_1[0xb0] & ~2;
            iVar4 = 0x2710;
            func_02027f40(param_1, 0, iVar4);
            func_02027f40(param_1, 6, 0);
            func_02027f40(param_1, 2, 0);
            func_02027f40(param_1, 5, 0x2710);
            func_02027f40(param_1, 1, 0);
            func_02027abc(param_1, func_02027708(param_2), 0);
            func_02027f40(param_2, 0, 0x2710);
            func_02027f40(param_2, 6, 0);
            func_02027f40(param_2, 2, 0);
            func_02027f40(param_2, 5, 0x2710);
            func_02027f40(param_2, 1, 0);
            func_02027abc(param_2, (u32)*(s8 *)(param_1 + 0x88), 0);
            func_020449d0(0x120);
            func_0204494c(0);
            func_0204ea24(param_1, param_2);
            return 1;
        P4D1:
            func_0203e908(param_1, 0x4d1);
            return 1;
        P4D2:
            func_0203e908(param_1, 0x4d2);
            return 1;
        }
    }
    return 0;
}
