#include "ctx.h"

extern u8 data_02159074[];
extern s16 data_02159148[];
extern u8 data_02159198[];
extern u8 data_02159184[];
extern u8 *data_0214f130;
extern u8 data_0215907c[];

extern void func_020a17bc(u32);
extern void func_0209adc8(u32);
extern void func_0209fb38(u32, u32, u32);
extern void func_02072d28(u32, int *);
extern void func_020707e4(u32, s32);
extern void func_02071e34(int *, s32);
extern u32 func_02071f20(int *);
extern void func_020a219c(u32, u32, u32, u32);
extern void func_020a2284(u32, u32);

void func_0209af44(u32 param_1)
{
    u32 uVar4;
    int iVar2;
    u32 uVar3;

    *(u16 *)(data_02159074 + 62) = (u16)param_1;
    func_020a17bc(100);
    data_02159148[0] = -1;
    data_02159148[3] = -1;
    *(u32 *)(data_02159198 + 0x10c) = 0;
    switch (param_1) {
    case 0:
        func_0209adc8(0);
        *(u16 *)(data_02159074 + 24) = 29;
        func_0209fb38(126, 127, 0);
        return;
    case 1:
        func_02072d28(80, *(int **)data_02159074);
        func_020707e4(9, -1);
        *(u32 *)(data_02159184 + 0x10) = 1;
        return;
    case 2:
        func_02072d28(81, *(int **)data_02159074);
        func_020707e4(9, -1);
        *(u32 *)(data_02159184 + 0x10) = 1;
        return;
    case 3:
        uVar4 = *(u32 *)(data_0214f130 + 0x2c);
        func_02071e34((int *)*(u32 *)(data_02159074 + 4), *(s16 *)(data_02159074 + 20));
        *(s16 *)(data_02159074 + 22) = -1;
        func_020a17bc(100);
        func_0209adc8(0);
        func_02072d28(79, *(int **)data_02159074);
        iVar2 = (int)data_0215907c;
        uVar3 = func_02071f20(*(int **)data_02159074);
        *(s16 *)(iVar2 + 2) = (s16)uVar3;
        *(s16 *)(iVar2 + 10) = 1;
        func_0209fb38(23, 127, 300);
        if (uVar4 >= 7 && uVar4 <= 19) {
            func_020a219c(68, 0, 127, 60);
            return;
        }
        func_020a219c(68, 1, 127, 60);
        return;
    case 4:
        func_02071e34((int *)*(u32 *)(data_02159074 + 4), *(s16 *)(data_02159074 + 20));
        *(s16 *)(data_02159074 + 22) = -1;
        func_020a17bc(100);
        func_0209adc8(0);
        func_02072d28(82, *(int **)data_02159074);
        iVar2 = (int)data_0215907c;
        uVar3 = func_02071f20(*(int **)data_02159074);
        *(s16 *)(iVar2 + 2) = (s16)uVar3;
        *(s16 *)(iVar2 + 10) = 1;
        func_020a2284(71, 0);
        func_0209fb38(39, 127, 0);
        return;
    default:
        return;
    }
}
