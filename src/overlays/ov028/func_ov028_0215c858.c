#include "ctx.h"

extern u32 data_ov028_0215df14;
extern u32 data_ov028_0215dee0;
extern void func_ov028_0215c674(void);

extern s32 func_ov028_0215d758(void);
extern u32 func_0206f448(u32 a, u32 b, u32 c);
extern void func_0206fa0c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_0206f284(u32 a, u32 b);
extern void func_ov028_0215d63c(u32 a, u32 b);
extern void func_0206f878(u32 a);
extern void func_0206f2bc(void);
extern u32 func_ov028_0215d74c(void);
extern void func_0206fc00(u32 a);

#define GP74() (*(u8 **)&data_ov028_0215df14)

#define TAILCALLS() \
    { \
        u32 t_ = (u16)func_0206f284(*(u32 *)(GP74() + 0x38), 0x200); \
        func_ov028_0215d63c(*(u32 *)(GP74() + 0x38), t_); \
    }

void func_ov028_0215c858(u16 *param_1)
{
    s32 iVar6;
    s32 uVar5;
    s32 i;
    u8 *P;

    iVar6 = func_ov028_0215d758();
    uVar5 = *param_1;
    if (uVar5 > 1) {
        goto SW;
    }
    if (uVar5 == 1) {
        goto C1;
    }
    return;
SW:
    switch (uVar5) {
    case 8:
        if (iVar6 != 2) {
            return;
        }
        func_0206f448(128, 32, (u32)func_ov028_0215c674);
        *(u16 *)(GP74() + 0x106) = 2;
        *(u32 *)(GP74() + 0x108) = 0;
        *(u32 *)(GP74() + 0x10c) = 0;
        for (i = 0; i < 16; i++) {
            *(u32 *)(GP74() + ((u32)i << 2) + 0x3c) = 0;
        }
        *(u32 *)(GP74() + 0x40) = *(u32 *)(GP74() + 0x11c);
        P = GP74();
        func_0206fa0c((u32)(P + 4), 0x438, (u32)&data_ov028_0215dee0, *(u32 *)(P + 0x114), *(u32 *)(P + 0x118), 0);
        if (param_1[4] != 7) {
            return;
        }
        TAILCALLS();
        return;
    case 9:
    case 10:
    case 11:
        goto END;
    case 12:
        func_0206fc00(func_ov028_0215d74c());
        return;
    case 13:
        goto END;
    default:
        goto END;
    case 14:
        goto LAB;
    case 15:
        goto C15;
    }
    return;
C1:
    func_0206f878(0xffff);
    func_0206f2bc();
    *(u32 *)*(u8 **)&data_ov028_0215df14 = 0;
LAB:
    if (param_1[2] != 10) {
        return;
    }
    if (iVar6 != 2) {
        return;
    }
    TAILCALLS();
    return;
C15:
    if (iVar6 != 2) {
        return;
    }
    TAILCALLS();
END:
    return;
}
