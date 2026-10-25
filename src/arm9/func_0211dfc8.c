#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern void func_0210f100(s32, s32);
extern s32 func_02112320(s32, u32, u32);
extern u32 func_0211e8f0(u8 *);
extern void func_02112798(s32, s32, s32);
extern void func_020a1a40(s32);
extern void func_02097b94(s32, u32, u32, u32, s32);
extern void func_0211ea50(void);

void func_0211dfc8(u8 *param_1)
{
    s32 iVar3;
    u32 uVar4;
    u32 uVar6;
    u8 *p7;
    u32 bVar2;
    u8 bVar1;
    u32 uVar5;

    p7 = param_1 + 0x1cc0;
    func_0210f100(*(s16 *)(p7 + 8), *(s16 *)(p7 + 10));
    if (*(s32 *)(data_0215be48 + 0x4860) == 0) {
        return;
    }
    bVar1 = data_0214f004[1];
    bVar2 = data_0214f004[0];
    iVar3 = func_02112320(2, bVar2, bVar1);
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
        return;
    }
    if (iVar3 == *(s32 *)(param_1 + 0xc)) {
        uVar4 = func_0211e8f0(param_1);
        if (uVar4 == 0) {
            return;
        }
        uVar5 = 0;
        if (*(s32 *)(param_1 + 0x1ce0) == 0) {
            if (*(s32 *)(param_1 + 0x24) == 0) {
                iVar3 = 9;
            } else {
                iVar3 = 12;
            }
        } else if (*(s32 *)(param_1 + 0x24) == 0) {
            iVar3 = 2;
        } else {
            iVar3 = 5;
        }
        func_02112798(2, iVar3, 1);
        *(u16 *)(param_1 + 0x1c18) = bVar2;
        *(u16 *)(param_1 + 0x1c1a) = bVar1;
        *(s32 *)(param_1 + 0x24) = 0;
        switch (*(s32 *)p7) {
        case 2:
            *(s32 *)(param_1 + 0x1c) = 1;
            uVar6 = 0x2456;
            break;
        case 3:
            *(s32 *)(param_1 + 0x1c) = 4;
            uVar6 = 0x24ba;
            break;
        case 4:
            *(s32 *)(param_1 + 0x1c) = 4;
            uVar6 = 0x238e;
            uVar5 = 1;
            break;
        default:
            uVar6 = 0x23f2;
            *(s32 *)(param_1 + 0x1c) = 1;
            break;
        }
        func_020a1a40(0x1d);
        func_02097b94(8, uVar6, uVar5, (u32)func_0211ea50, 0);
        return;
    }
    if (iVar3 != *(s32 *)(param_1 + 0x10)) {
        return;
    }
    *(s32 *)(param_1 + 0x24) = 1;
    *(s32 *)(param_1 + 0x1c) = 1;
    if (*(s32 *)(param_1 + 0x1ce0) == 0) {
        if (*(s32 *)(param_1 + 0x24) == 0) {
            iVar3 = 9;
        } else {
            iVar3 = 12;
        }
    } else if (*(s32 *)(param_1 + 0x24) == 0) {
        iVar3 = 2;
    } else {
        iVar3 = 5;
    }
    func_02112798(2, iVar3, 1);
    func_020a1a40(0x1e);
    *(u16 *)(param_1 + 0x1c18) = bVar2;
    *(u16 *)(param_1 + 0x1c1a) = bVar1;
}
