#include "ctx.h"

extern u8 data_0212fdc5[];
extern u32 data_02159074[];
extern u32 data_021592e4[];
extern u8 data_02159198[];
extern void func_0209adc8(s32 a);
extern void func_0209b53c(s32 a, s32 b);
extern void func_0209ae94(s32 a);
extern void func_0209fe4c(s32 a);
extern void func_02070ba8(u32 a, u32 b, u32 c);
extern u32 func_020708d0(u32 a);
extern u32 func_020a2284(u32 a, u32 b);
extern u32 func_020708ac(s32 *a);
extern u32 func_02070888(s32 *a);
extern u32 func_020a0e04(u32 a);

u32 func_020a0e04(u32 param_1)
{
    s32 bVar1;
    u32 uVar2;
    u32 uVar3;
    s32 iVar5;
    s32 *piVar4;

    uVar3 = data_0212fdc5[*(u16 *)((u8 *)data_02159074 + 24) * 6];
    if ((s32)uVar3 >= 61 && (s32)uVar3 <= 65) {
        switch (param_1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 8:
        case 11:
            break;
        case 10:
            if (uVar3 != 0xff) {
                func_02070ba8(uVar3, 6, 10);
            }
            func_0209fe4c(0x29);
            break;
        case 12:
            if (uVar3 == 0xff) {
                goto zero12;
            } else {
                iVar5 = 0;
                piVar4 = (s32 *)((u8 *)data_021592e4 + 0x28);
                do {
                    if (*piVar4 != 0 && (uVar2 = func_020708ac(piVar4), uVar3 == uVar2) &&
                        (uVar2 = func_02070888(piVar4), uVar2 == 6)) {
                        bVar1 = 1;
                        goto LAB_020a0f00;
                    }
                    iVar5 = (s16)(iVar5 + 1);
                    piVar4 = piVar4 + 1;
                } while (iVar5 < 4);
                bVar1 = 0;
                goto LAB_020a0f00;
            }
zero12:
            bVar1 = 0;
LAB_020a0f00:
            if (bVar1) {
                uVar2 = data_0212fdc5[*(u16 *)((u8 *)data_02159074 + 24) * 6];
                if (uVar2 != 0xff) {
                    func_02070ba8(uVar2, 6, 10);
                }
                func_020a0e04(8);
                func_0209fe4c(0x39);
            } else {
                func_0209fe4c(0x2a);
            }
            break;
        case 9:
            uVar2 = func_020708d0((u32)data_02159198);
            if (uVar2 != 0x2d) {
                uVar2 = data_0212fdc5[*(u16 *)((u8 *)data_02159074 + 24) * 6];
                if (uVar2 != 0xff) {
                    func_02070ba8(uVar2, 6, 10);
                }
                func_0209fe4c(0x2b);
            }
            break;
        case 5:
            func_0209adc8(2);
            func_0209b53c(0x48, (s32)data_02159074[0]);
            func_0209ae94(2);
            break;
        case 7:
            if (uVar3 != 0xff) {
                func_02070ba8(uVar3, 6, 10);
            }
            uVar2 = func_020708d0((u32)data_02159198);
            if (uVar2 == 0x2d) {
                return 0xffffffff;
            }
            func_020a2284(uVar3, 9);
            break;
        case 6:
            func_0209fe4c(0x38);
            break;
        }
    }
    if (uVar3 == 0xff) {
        return 0xffffffff;
    }
    uVar3 = func_020a2284(uVar3, param_1);
    return uVar3;
}
