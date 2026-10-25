#include "ctx.h"
#pragma opt_lifetimes off

extern u8 *data_02159424;
extern u8 *data_0215bf9c;

extern void func_0210a854(s32 a);
extern void func_0210452c(void);
extern void func_02108380(s32 a);
extern void func_021094ac(void);
extern void func_021045fc(u8 *p, s32 n);
extern void func_021041e8(void);
extern void func_02104278(void);
extern void func_0210a818(void);
extern void func_021084b0(void);

void func_02109b84(u8 *param_1)
{
    s32 *piVar5;
    s32 *piVar4;
    s32 iVar3;
    u32 uVar2;

    piVar4 = (s32 *)(param_1 + 0x1c48);
    iVar3 = *(s16 *)(*(u8 **)(data_02159424 + 4) + 2) + 59;
    *(s16 *)(param_1 + 0x274) = (s16)(iVar3 / 60);

    if (*(s32 *)(param_1 + 0x240) != 0 && *(s16 *)(param_1 + 0x274) <= 0) {
        if (piVar4[0] == 3) {
            piVar4[4] = 0x17;
            *(s32 *)(param_1 + 0x240) = 0;
        } else if ((u32)(piVar4[0] - 1) <= 1) {
            piVar4[4] = 5;
            func_0210a854(3);
            func_0210452c();
            *(s32 *)(param_1 + 0x240) = 0;
        }
    }
    piVar5 = (s32 *)(param_1 + 616);
    if (piVar5[0] != 0) {
        piVar5[1] -= 1;
        if (0 >= piVar5[1]) {
            func_02108380(3);
            piVar5[0] = 0;
        }
    }
    piVar5 = (s32 *)(param_1 + 596);
    if (piVar5[0] != 0) {
        piVar5[1] -= 1;
        if (0 >= piVar5[1]) {
            func_021094ac();
            piVar5[0] = 0;
        }
    }
    switch (piVar4[4]) {
    case 0:
        break;
    case 1:
        iVar3 = *(s32 *)(param_1 + 0x244);
        *(s32 *)(param_1 + 0x244) = iVar3 + 1;
        if (iVar3 < 300) {
            return;
        }
        if (iVar3 < 600) {
            func_021045fc(param_1, 0x15);
            return;
        }
        if (iVar3 < 900) {
            func_021045fc(param_1, 0x16);
            return;
        }
        if (iVar3 < 1200) {
            func_021045fc(param_1, 0x17);
            return;
        }
        if (iVar3 < 1500) {
            func_021045fc(param_1, 0x18);
            return;
        }
        if (iVar3 >= 1800) {
            return;
        }
        func_021045fc(param_1, 0x19);
        return;
    case 2:
        func_021045fc(param_1, 0);
        piVar4[4] = 3;
        return;
    case 3:
        func_021045fc(param_1, 0x1a);
        piVar4[4] = 4;
        return;
    case 4:
        if (*(s32 *)(param_1 + 0x18) == 0) {
            return;
        }
        *(s32 *)(param_1 + 0x1c58) = 1;
        *(s32 *)(param_1 + 0x244) = 0;
        return;
    case 5:
        func_021045fc(param_1, 0x1e);
        piVar4[4] = 7;
        return;
    case 6:
        iVar3 = piVar4[0];
        if (iVar3 == 4) {
            piVar4[4] = 7;
            return;
        }
        if (iVar3 == 1) {
            func_021045fc(param_1, 0x1c);
        } else if (iVar3 == 2) {
            func_021045fc(param_1, 0x24);
        }
        piVar4[4] = 7;
        *(s32 *)(param_1 + 0x24c) = 0;
        return;
    case 7:
        piVar4[0] = 4;
        return;
    case 8:
        func_021045fc(param_1, 0x14);
        *(s32 *)(param_1 + 0x240) = 1;
        piVar4[4] = 9;
        return;
    case 9:
        if (*(s32 *)(param_1 + 0x18) == 0) {
            return;
        }
        *(s32 *)(param_1 + 0x1c58) = 1;
        *(s32 *)(param_1 + 0x244) = 0;
        return;
    case 10:
        func_021045fc(param_1, 0x1b);
        piVar4[4] = 0xb;
        if (*(s16 *)(param_1 + 0x270) < *(s16 *)(param_1 + 0x272)) {
            func_02108380(2);
        }
        *(s16 *)(param_1 + 0x270) = *(s16 *)(param_1 + 0x270) + 1;
        return;
    case 0xb:
        if (*(s32 *)(param_1 + 0x18) == 0) {
            return;
        }
        if (*(s16 *)(param_1 + 0x270) <= *(s16 *)(param_1 + 0x272)) {
            piVar4[4] = 0xc;
            return;
        }
        *(s32 *)(param_1 + 0x1c58) = 1;
        *(s32 *)(param_1 + 0x244) = 0;
        return;
    case 0xc:
        if (*(s16 *)(param_1 + 0x274) >= 4) {
            func_021045fc(param_1, 0x1d);
        }
        *(s32 *)(param_1 + 0x1c58) = 1;
        *(s32 *)(param_1 + 0x244) = 0;
        return;
    case 0xd:
        if (*(s32 *)(param_1 + 0x18) == 0) {
            return;
        }
        func_021045fc(param_1, 0x1c);
        piVar4[4] = 7;
        return;
    case 0xe:
        func_021045fc(param_1, 0x14);
        *(s32 *)(param_1 + 0x240) = 1;
        if (*(s32 *)(param_1 + 0x18) != 0) {
            *(s32 *)(param_1 + 0x1c58) = 1;
            *(s32 *)(param_1 + 0x244) = 0;
        }
        return;
    case 0xf:
        func_021045fc(param_1, 0x1f);
        *(s32 *)(param_1 + 0x248) = 0;
        piVar4[4] = 0x10;
        return;
    case 0x10:
        uVar2 = *(u32 *)(param_1 + 0x248);
        *(u32 *)(param_1 + 0x248) = uVar2 + 1;
        if (uVar2 >= (u32)(*(s32 *)(data_0215bf9c + 0x178) * 60)) {
            return;
        }
        if ((s32)uVar2 < 310) {
            return;
        }
        if ((s32)uVar2 < 610) {
            func_021045fc(param_1, 0x20);
            return;
        }
        if ((s32)uVar2 < 910) {
            func_021045fc(param_1, 0x21);
            return;
        }
        if ((s32)uVar2 >= 1210) {
            return;
        }
        func_021045fc(param_1, 0x22);
        return;
    case 0x11:
        func_021045fc(param_1, 0x23);
        return;
    case 0x12:
        func_021045fc(param_1, 0x24);
        piVar4[4] = 7;
        return;
    case 0x13:
        *(s32 *)(param_1 + 0x240) = 1;
        func_021045fc(param_1, 0x14);
        if (*(s32 *)(param_1 + 0x18) == 0) {
            return;
        }
        *(s32 *)(param_1 + 0x1c58) = 1;
        *(s32 *)(param_1 + 0x244) = 0;
        return;
    case 0x14:
        func_021045fc(param_1, 0x25);
        piVar4[4] = 0x15;
        return;
    case 0x15:
        if (*(s32 *)(param_1 + 0x18) == 0) {
            return;
        }
        if (*(s16 *)(param_1 + 0x274) >= 4) {
            func_021045fc(param_1, 0x1d);
        }
        piVar4[4] = 0x16;
        return;
    case 0x16:
        break;
    case 0x17:
        *(s32 *)(param_1 + 0x240) = 0;
        func_021045fc(param_1, 0x26);
        func_0210a854(3);
        func_021041e8();
        piVar4[4] = 0x18;
        return;
    case 0x18:
        if (*(s32 *)(param_1 + 0x18) == 0) {
            return;
        }
        piVar4[4] = 0x19;
        *(s32 *)(param_1 + 0x250) = 0x5a;
        func_02104278();
        func_0210a818();
        return;
    case 0x19:
        if (*(s32 *)(param_1 + 0x250) > 0) {
            *(s32 *)(param_1 + 0x250) = *(s32 *)(param_1 + 0x250) - 1;
            return;
        }
        piVar4[4] = 0x1a;
        func_021084b0();
        return;
    case 0x1a:
        if (*(s32 *)data_0215bf9c != 10) {
            return;
        }
        if (((s32 *)data_0215bf9c)[2] != 3) {
            return;
        }
        func_021045fc(param_1, 0x27);
        return;
    }
}
