#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern void func_ov028_0215d5b0(void);
extern void func_ov028_0215d28c(void);

extern u32 func_02064a34(u32 a);
extern u16 func_020d5e60(void);
extern u32 func_020d5e70(u32 a, u32 b, u16 *c);

void func_ov028_0215d904(void)
{
    u32 uVar7;
    u16 uVar4;
    u32 uVar6;
    s32 iVar5;
    s32 bVar3;
    u16 t;
    s32 v;
    u16 asStack_10[4];

    *(u32 *)(data_ov028_0215df90 + 0x20) = 2;
    *(u32 *)(data_ov028_0215df90 + 0x1c) = 3;
    iVar5 = func_02064a34((u32)func_ov028_0215d5b0);
    if (iVar5 == 0) {
        goto LZERO;
    }
    t = (u16)iVar5;
    if (*(u32 *)(data_ov028_0215df90 + 0x28) != 1) {
        *(u32 *)(data_ov028_0215df90 + 0x28) = 1;
        *(u16 *)(data_ov028_0215df90 + 0x24) = t;
        *(u16 *)(data_ov028_0215df90 + 0x26) = 0x80;
    }
    bVar3 = 0;
    goto LCHK;
LZERO:
    bVar3 = 1;
LCHK:
    if (bVar3 == 0) {
        return;
    }
    *(u16 *)(data_ov028_0215df90 + 0x38) = 0;
    *(u16 *)(data_ov028_0215df90 + 0x3a) = 0x65;
    uVar7 = 1;
    uVar4 = func_020d5e60();
    uVar6 = uVar4;
    if (uVar6 == 0x8000) {
        v = 3;
    } else if (uVar6 == 0) {
        v = 0x15;
    } else {
        if ((uVar4 & 1) == 0) {
            do {
                uVar7 = (u16)(uVar7 + 1);
                if (uVar7 > 0x10) {
                    v = 0x16;
                    goto LAB;
                }
            } while ((1 << (uVar7 - 1) & uVar6) == 0);
        }
        func_020d5e70((u32)func_ov028_0215d28c, uVar7, asStack_10);
        v = asStack_10[0];
    }
LAB:
    if (v == 0x16) {
        if (*(u32 *)(data_ov028_0215df90 + 0x28) == 1) {
            return;
        }
        *(u32 *)(data_ov028_0215df90 + 0x28) = 1;
        *(u16 *)(data_ov028_0215df90 + 0x24) = (u16)v;
        *(u16 *)(data_ov028_0215df90 + 0x26) = 0x1e;
        return;
    }
    if (v == 2) {
        return;
    }
    if (*(u32 *)(data_ov028_0215df90 + 0x28) == 1) {
        return;
    }
    *(u32 *)(data_ov028_0215df90 + 0x28) = 1;
    *(u16 *)(data_ov028_0215df90 + 0x24) = (u16)v;
    *(u16 *)(data_ov028_0215df90 + 0x26) = 0x1e;
}
