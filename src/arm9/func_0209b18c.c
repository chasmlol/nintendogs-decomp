#include "ctx.h"

extern u32 data_02159074;
extern u8 data_0212fdc4[];
extern u8 data_02159148[];
extern u8 data_02159198[];
extern u32 data_0215907c;
extern u32 data_0215be34_unused;
extern u8 data_0213b7d0_unused[];

extern void func_0207161c(u32 a, u32 *b);
extern void func_020707e4(u32 a, u32 b);
extern void func_02071e34(u32 *a, u32 b);
extern void func_020a17bc(u32 a);
extern void func_0209adc8(u32 a);
extern void func_02072d28(u32 a, u32 *b);
extern void func_0209fb38(u32 a, u32 b, u32 c);
extern void func_020a0a80(void);
extern u32 *func_02071f78(u32 *a, u32 b, u32 c, u32 d, u32 e);
extern void func_0207167c(u32 *a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_02071f20(u32 *a);
extern void func_020a0958(u32 a);
extern void func_020a0e04(u32 a);
extern void func_020a219c(u32 a, u32 b, u32 c, u32 d);

void func_0209b18c(u32 param_1)
{
    u32 uVar1;
    u32 uVar8;
    u32 *piVar7;
    u32 *piVar6;
    u32 *puVar4;
    s16 *puVar2;
    u32 iVar3;
    u8 *pd;

    uVar8 = data_0212fdc4[param_1 * 6];
    uVar1 = 1u << param_1;
    piVar7 = *(u32 **)&data_02159074;
    piVar6 = *(u32 **)((u8 *)&data_02159074 + 4);
    func_0207161c(0, (u32 *)&data_02159074);
    *(u16 *)((u8 *)&data_02159074 + 24) = (u16)param_1;
    func_020707e4(7, (s16)param_1);
    func_02071e34(*(u32 **)((u8 *)&data_02159074 + 4), (s16)*(u16 *)((u8 *)&data_02159074 + 20));
    *(s16 *)((u8 *)&data_02159074 + 22) = -1;
    func_020a17bc(100);
    puVar2 = (s16 *)data_02159148;
    puVar2[0] = -1;
    puVar2[3] = -1;
    *(s16 *)((u8 *)&data_02159074 + 62) = -1;
    *(u32 *)(data_02159198 + 0x10c) = 0;
    func_0209adc8(0);
    if (param_1 <= 0x16 && (uVar1 & 0x7fff00) != 0) {
        if (uVar8 != 0xff) {
            func_02072d28(uVar8, piVar6);
        }
        if ((uVar1 & 0x1f00) != 0 || (uVar1 & 0x7c0000) != 0) {
            func_02072d28(0x37, piVar7);
        } else if ((uVar1 & 0x3e000) != 0) {
            if (*(u32 *)((u8 *)&data_02159074 + 0x40) != 0) {
                func_0209fb38(0x26, 0x7f, 0);
                func_02072d28(0x3d, piVar7);
            } else {
                func_02072d28(0x37, piVar7);
            }
        }
    } else {
        if (param_1 == 0x18) {
            func_02072d28(0x4a, piVar6);
            func_020a0a80();
        }
        if (uVar8 != 0xff) {
            func_02072d28(uVar8, piVar7);
        }
    }
    if (param_1 == 0x1c) {
        puVar4 = func_02071f78(piVar7, 0x1400, 0, 0, 0);
        func_0207167c(puVar4, 0x1400, 0, 32000, 0x3f);
    } else if ((uVar1 & 0x42100) != 0 || param_1 == 6) {
        puVar4 = func_02071f78(piVar7, 0xc00, 0, 0, 0);
        func_0207167c(puVar4, 0xc00, 0, 32000, 0x32);
    } else if ((uVar1 & 0x3e000) != 0) {
        puVar4 = func_02071f78(piVar7, 0x1800, 0, 0, 0);
        func_0207167c(puVar4, 0x1800, 0, 32000, 0x37);
    } else if ((uVar1 & 0x7c0000) != 0) {
        puVar4 = func_02071f78(piVar7, 0x1000, 0, 0, 0);
        func_0207167c(puVar4, 0x1000, 0, 32000, 0x3c);
    }
    pd = (u8 *)&data_0215907c;
    iVar3 = func_02071f20(*(u32 **)&data_02159074);
    *(u16 *)(pd + 2) = (u16)iVar3;
    *(u16 *)(pd + 10) = 1;
    func_020a0958(param_1);
    switch ((s32)param_1) {
    case 28:
        func_0209fb38(0x1c, 0x7f, 0);
        break;
    case 30:
        func_0209fb38(0x17, 0x7f, 300);
        func_020a219c(0x44, 1, 0x7f, 0x3c);
        break;
    case 27:
        func_020a0e04(4);
        func_0209fb38(0x7d, 0x7f, 0);
        break;
    case 24:
        *(u32 *)((u8 *)&data_02159074 + 0x40) = 1;
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 31:
        *(u32 *)((u8 *)&data_02159074 + 0x40) = 0;
        break;
    }
}
