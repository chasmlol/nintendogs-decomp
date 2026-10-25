#include "ctx.h"

extern s32 data_02159178[];
extern s32 data_02159198[];
extern s32 data_02159074[];
extern u16 func_0209e494(s32 x);
extern void func_020a0018(s32 *a, s32 b, s32 c, s32 d);
extern void func_02070938(s32 *a, s32 b);
extern void func_02070998(s32 *a, s32 b, s32 c);
extern void func_02070800(s32 *a, s32 b, s32 c);
extern void func_02070c18(s32 *a, s32 b);
extern void func_0209fb38(s32 a, s32 b, s32 c);

s32 func_0209f59c(s32 param_1)
{
    s32 *piVar1 = (s32 *)data_02159178;
    u32 iVar4;
    s32 *piVar2 = (s32 *)data_02159198;
    u16 iVar3;

    if (param_1 == piVar1[2]) {
        return 0;
    }
    if (piVar2[0] == 0) goto Lret0;
    switch (param_1) {
    case 1:
        data_02159178[2] = param_1;
        data_02159074[16] = 1;
        if (0 == piVar1[0]) {
            if (piVar1[1] == 0) goto L108;
        }
        if (0 != piVar1[0]) {
            func_020a0018(piVar2, 8, 0, 60);
            func_02070938(piVar2, 256);
            piVar1[0] = 0;
        }
        if (0 != piVar1[1]) {
            func_020a0018(piVar2, 32, 0, 60);
            func_02070938(piVar2, 256);
            func_02070998(piVar2, 0x7ca2, 0);
            piVar1[1] = 0;
        }
        goto L114;
    L108:
        func_02070800(piVar2, 12, param_1);
    L114:
        return 1;
    case 3:
    case 4:
        piVar1[2] = (s32)param_1;
        func_020a0018(piVar2, 8, 127, 60);
        func_02070938(piVar2, 240);
        piVar1[0] = 1;
        return 1;
    case 5:
        piVar1[2] = param_1;
        func_020a0018(piVar2, 32, 127, 60);
        func_02070938(piVar2, 230);
        func_02070998(piVar2, 0x7ca2, 70);
        piVar1[1] = 1;
        return 1;
    case 2:
        piVar1[2] = 1;
        func_02070800(piVar2, 12, 2);
        return 1;
    case 7:
        iVar3 = func_0209e494(0);
        iVar4 = data_02159198[0];
        data_02159178[2] = -1;
        if (iVar4 != 0 && iVar3 == 0) {
            func_02070c18(piVar2, 0);
            piVar2[64] = 0;
        }
        func_0209fb38(51, 127, 0);
        return 1;
    case 8:
        iVar3 = func_0209e494(0);
        iVar4 = data_02159198[0];
        data_02159178[2] = -1;
        if (0 != iVar4 && 0 == iVar3) {
            func_02070c18(piVar2, 0);
            piVar2[64] = 0;
        }
        func_0209fb38(53, 127, 0);
        return 1;
    }
Lret0:
    return 0;
}
