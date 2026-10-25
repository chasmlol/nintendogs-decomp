#include "ctx.h"

extern u8 *data_02159464;
extern void func_020cf9c8(u8 *, s32, s32, s32);
extern void func_020be07c(void);
extern void func_020cf9bc(u8 *);
extern void func_020d9b50(u8 *, u32);

void func_020bbe14(u32 param_1, s32 param_2)
{
    s32 iVar2;
    s32 unaff_r4;
    u32 uVar1;

    iVar2 = *(s32 *)(data_02159464 + 0x7c);
    if (iVar2 == 0 || (u32)(iVar2 - 3) <= 1) {
        switch (param_1) {
        case 0:
            unaff_r4 = 0x11;
            param_2 = -1;
            break;
        case 1:
            unaff_r4 = 2;
            param_2 = -1;
            break;
        case 2:
            unaff_r4 = 4;
            break;
        case 3:
            unaff_r4 = 5;
            break;
        case 4:
            unaff_r4 = 1;
            break;
        case 5:
            unaff_r4 = 6;
            break;
        case 6:
            unaff_r4 = 7;
            break;
        case 7:
            unaff_r4 = 8;
            break;
        case 8:
            unaff_r4 = 9;
            break;
        case 9:
            unaff_r4 = 10;
            break;
        case 10:
            unaff_r4 = 0xb;
            break;
        case 11:
            unaff_r4 = 0xc;
            break;
        case 12:
            unaff_r4 = 0xd;
            break;
        case 13:
            unaff_r4 = 0xe;
            break;
        case 14:
            unaff_r4 = 0xf;
            break;
        case 15:
            unaff_r4 = 0x13;
        }
        func_020cf9c8(data_02159464 + 0x88, unaff_r4, param_2, 0);
        if (unaff_r4 != 0x13) {
            return;
        }
        if (*(s32 *)(data_02159464 + 0xbc) == 0x14) {
            return;
        }
        func_020be07c();
        func_020cf9bc(data_02159464 + 0x88);
        return;
    }
    if (iVar2 != 0xe) {
        return;
    }
    switch (param_1) {
    case 2:
    case 3:
        goto z2;
    case 6:
        goto c6;
    case 8:
        goto c8;
    case 10:
        goto c10;
    case 12:
        goto c12;
    default:
        goto dflt;
    }
z2:
    uVar1 = 0;
    goto call;
c6:
    uVar1 = 2;
    goto call;
c8:
    uVar1 = 3;
    goto call;
c10:
    uVar1 = 4;
    goto call;
c12:
    uVar1 = 1;
    goto call;
dflt:
    uVar1 = 0;
call:
    func_020d9b50(data_02159464 + 0x27c, uVar1);
}
