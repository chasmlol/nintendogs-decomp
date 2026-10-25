#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_0212fdc9[];
extern u8 data_0212fdc8[];
extern u16 data_02141fb4;

void func_02072fe4(u32 *p, u32 a, u32 b);
void func_02070c18(u32 *p, u32 a);
u32 func_0209b774(u32 *p);
u32 func_0209dd80(s32 a, u32 b, s32 c);
u32 func_0209dd38(s32 a, u32 b, s32 c);
u32 func_0205e270(u32 a, u32 b);
void func_020709f8(u32 *p, u32 a, u32 b);
void func_02070b20(u32 *p, u32 a);
u32 func_0209b73c(u32 *p);
void func_020709c8(u32 *p, u32 a, u32 b);

u32 func_020a1164(u32 *param_1, s32 param_2, u32 param_3, s32 param_4, u32 *param_5)
{
    s32 iVar4;
    s32 iVar5;
    u32 uVar2;
    u32 uVar3;
    u32 uVar6;
    u32 r4;

    iVar4 = -1;
    func_02072fe4(param_1, param_2, param_3);
    if (*param_1 == 0) goto LAB_ret1;
    if (param_2 <= 23) {
        if (param_2 == 23) {
            iVar4 = 49;
        }
    } else {
        switch (param_2) {
        case 42:
            iVar4 = 78;
            break;
        case 37:
        case 38:
        case 39:
        case 40:
            iVar4 = 29;
            break;
        default:
            break;
        }
    }
    if (iVar4 != -1) {
        iVar5 = *(u16 *)(data_02159074 + 24) * 6;
        uVar3 = data_0212fdc9[iVar5];
        uVar2 = func_0209b774(param_5);
        uVar6 = data_0212fdc8[iVar5];
        if (uVar2 <= uVar6) {
            r4 = func_0209dd80(iVar4, param_3, param_4);
            goto Lcommon;
        }
        if (uVar2 >= uVar3) {
            goto Lzero;
        }
        r4 = func_0205e270(func_0209dd80(iVar4, param_3, param_4) * (uVar3 - uVar2), uVar3 - uVar6);
        goto Lcommon;
Lzero:
        func_02070c18(param_1, 0);
        return 0;
Lcommon:
        iVar4 = func_0209dd38(iVar4, param_3, param_4);
        func_020709f8(param_1, data_02141fb4, iVar4);
        func_02070b20(param_1, r4);
        iVar4 = func_0209b73c(param_5);
        func_020709c8(param_1, data_02141fb4, iVar4);
    }
LAB_ret1:
    return 1;
}
