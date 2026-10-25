#include "ctx.h"

extern u32 data_0214204c[];
extern u8 data_02159198[];

s32 func_020df0d4(void);
void func_020a38c0(u32 a);
void func_020a302c(void);
u32 func_01ffdb08(s32 a);
u8 *func_02027540(u32 a);
void func_020a3938(u32 a);
void func_02070c18(u8 *p, u32 b);
void func_0209e5a0(s32 a, s32 b, u32 c);

void func_0209e894(s32 param_1, s32 param_2)
{
    s32 i;
    s32 iVar3;
    s32 iVar6;
    s32 iVar5;
    u32 uVar4;
    s32 bVar7;
    u16 sVar1;
    u8 *ptr;
    u8 *dp;

    ptr = (u8 *)data_0214204c[param_1];
    dp = data_02159198;
    iVar3 = *(s16 *)(ptr + 2);
    *(u16 *)(dp + 0x36) = 0;
    *(u16 *)(dp + 0x34) = (u16)param_2;
    if (iVar3 == 0x12) {
        iVar6 = func_020df0d4();
        if (iVar6 != -11) {
            s32 bVar7b;
            if (*(s32 *)(data_02159198 + 4) != 0) goto T3;
            if (*(s32 *)(data_02159198 + 0x2c) == 0) goto F3;
        T3:
            bVar7b = 1;
            goto J3;
        F3:
            bVar7b = 0;
        J3:
            if (bVar7b == 0) {
                func_020a38c0(5);
            }
        }
    } else if (iVar3 == 0x3a) {
        func_020a302c();
    } else {
        i = 0;
        do {
            uVar4 = func_01ffdb08(i);
            if (uVar4 != 0) {
                iVar5 = (s32)func_02027540(uVar4);
                sVar1 = *(u16 *)(iVar5 + 0x26);
                bVar7 = 0;
                switch (iVar3) {
                case 0xb:
                    bVar7 = (sVar1 == 1);
                    break;
                case 0xc:
                    bVar7 = (sVar1 == 3);
                    break;
                case 0xd:
                    bVar7 = (sVar1 == 0);
                    break;
                case 0xe:
                    bVar7 = (sVar1 == 4);
                    break;
                case 0xf:
                    if (sVar1 == 2) {
                        bVar7 = 1;
                    }
                    break;
                }
                if (bVar7) {
                    func_020a3938(uVar4);
                }
            }
            i = (s16)(i + 1);
        } while (i < 3);
    }
    func_02070c18(dp + 8, 0);
    func_0209e5a0(param_1, param_2, 127);
}
