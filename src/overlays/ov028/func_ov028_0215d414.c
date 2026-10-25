#include "ctx.h"

extern u32 data_ov028_0215df90;
extern void func_ov028_0215d28c(void);
extern s32 func_020d6228(u8 *p);
extern u32 func_020d5e60(void);
extern s32 func_020d5e70(u32 a, u32 b, s16 *c);

void func_ov028_0215d414(u8 *param_1)
{
    u8 *piVar1;
    s32 iVar4;
    u32 uVar5;
    u32 uVar6;
    u16 uVar3;
    s16 asStack_10[4];
    u32 b;
    u16 cls;

    iVar4 = func_020d6228(param_1);
    if (iVar4 == 0) {
        return;
    }
    if (*(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x18) != 0) {
        ((void (*)(u8 *))*(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x18))(param_1);
    }
    piVar1 = *(u8 **)&data_ov028_0215df90;
    iVar4 = (s32)piVar1;
    switch (*(s32 *)(iVar4 + 0x20)) {
    case 1:
        *(u32 *)(iVar4 + 0x1c) = 1;
        return;
    case 2:
        break;
    default:
        return;
    }
    *(u16 *)(iVar4 + 0x38) = 0;
    *(u16 *)(*(u8 **)&data_ov028_0215df90 + 0x3a) = 0x65;
    uVar6 = 1;
    uVar5 = func_020d5e60();
    if (uVar5 == 0x8000) {
        cls = 3;
    } else if (uVar5 == 0) {
        cls = 0x15;
    } else {
        if ((uVar5 & 1) == 0) {
            do {
                uVar6 = (u16)(uVar6 + 1);
                if (uVar6 > 0x10) {
                    cls = 0x16;
                    goto done;
                }
            } while ((((u32)1 << (uVar6 - 1)) & uVar5) == 0);
        }
        b = func_020d5e70((u32)func_ov028_0215d28c, uVar6, asStack_10);
        uVar5 = b;
        cls = asStack_10[0];
    }
done:
    piVar1 = *(u8 **)&data_ov028_0215df90;
    if (cls == 0x16) {
        if (*(s32 *)(*(u8 **)&data_ov028_0215df90 + 0x28) == 1) {
            return;
        }
        *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x28) = 1;
        *(u16 *)(*(u8 **)&data_ov028_0215df90 + 0x24) = cls;
        *(u16 *)(*(u8 **)&data_ov028_0215df90 + 0x26) = 0x1e;
        return;
    }
    if (cls == 2) {
        return;
    }
    if (*(s32 *)(*(u8 **)&data_ov028_0215df90 + 0x28) == 1) {
        return;
    }
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x28) = 1;
    *(s16 *)(*(u8 **)&data_ov028_0215df90 + 0x24) = cls;
    *(u16 *)(*(u8 **)&data_ov028_0215df90 + 0x26) = 0x1e;
    (void)piVar1;
}
