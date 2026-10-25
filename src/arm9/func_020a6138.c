#include "ctx.h"

typedef struct { u16 l20[2]; u32 l1c; u32 l18; } LB;

extern u8 data_0215942c[];
extern u8 data_02159424[];
extern u8 data_02159428[];
extern u8 data_02159430[];
extern u8 data_02159458[];
extern u8 data_0212f720[];
extern u8 data_02159450[];
extern u8 data_0214193c[];

extern void func_0208e398(u8 *p);
extern void func_0208e2e4(u8 *p, u32 a);
extern void func_0208e2b4(u32 a, u32 b, u32 c);
extern u32 func_0208b8e8(u8 *p);
extern void func_0208e23c(u8 *p, u32 a);
extern u32 func_0208b820(u8 *p);
extern void func_0208e214(u8 *p, u32 a);
extern void func_020a7500(u8 *p, u32 a, u32 b);
extern void func_020a67e4(u8 *p, u32 a, u32 b);
extern void func_020f4c00(u8 *p, u32 a);
extern u32 func_020a78c0(void);
extern void func_0208d1a0(u8 *p, u32 a);
extern void func_02043b8c(u8 *p);
extern void func_020bcc4c(u8 *p);
extern void func_020ec740(u8 *p);
extern void func_020bc2dc(void);
extern void func_020e9268(void);
extern void func_ov004_0216e9a4(u8 *p);
extern void func_ov004_0216e7bc(u8 *p);
extern void func_ov004_0216e774(s32 a);
extern void func_ov004_0216e748(s32 a);
extern void func_ov004_0216e5e0(void);
extern void func_ov004_0216e6ec(void);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e7a0(u8 *p);
extern void func_ov005_02164cc0(u8 *p);
extern u32 func_ov006_02164748(u8 *p);
extern void func_ov006_0216537c(u8 *p);
extern void func_ov006_021646ec(u8 *p);
extern s32 func_ov005_02164ec4(void);
extern void func_ov003_02164c94(u8 *p);
extern void func_020e9258(s32 a);
extern void func_0208e1e8(u16 *q);
extern s32 *func_02003568(u8 *p);
extern u8 *func_0208e150(s32 *p, u16 *q);
extern u32 func_0208f698(u8 *p);
extern void func_020bc1d8(u32 a);
extern u32 func_0208f680(u8 *p, u32 a);
extern void func_020034cc(s32 *p);
extern void func_02043ab4(void);
extern void func_02043b00(s32 *p);
extern void func_020a73cc(s32 *p);
extern void func_0208f380(void);
extern u32 func_0208f668(u8 *p, u32 a);
extern void func_02042440(u8 *p, u32 a);
extern void func_020a7134(s32 *p, u32 a);
extern s32 func_020f5220(void);
extern void func_020f3fec(u8 *p);
extern void func_020439f8(u8 *p);
extern void func_020bcbf0(u8 *p);
extern void func_020ec70c(u8 *p);
extern u8 *func_0208efcc(u8 *p);
extern void func_0208f704(u8 *a, u8 *b);
extern void func_0204231c(u8 *p, u32 a);

u8 *func_020a6138(u8 *p)
{
    u8 *puVar6;
    s32 *piVar5;
    u8 *puVar7;
    s32 iVar3;
    u8 *puVar9;
    s32 uVar10;
    u32 uVar4;
    LB lb;
    s32 bVar2;

    func_0208e398(p);
    func_0208e2e4(p, 4);
    func_0208e2b4(0, 0, 10);
    if (*(u16 *)*(u8 **)data_0215942c == 8) {
        func_0208e2b4(1, 10, 2);
        func_0208e2b4(2, 13, 50);
        func_0208e2b4(3, 63, 1);
    } else {
        func_0208e2b4(1, 10, 20);
        func_0208e2b4(2, 30, 20);
        func_0208e2b4(3, 62, 2);
    }
    iVar3 = (s32)func_0208b8e8(p);
    func_0208e23c(p, iVar3);
    iVar3 = (s32)func_0208b820(p);
    func_0208e214(p, iVar3);
    func_020a7500(p, *(u16 *)(*(u8 **)data_0215942c + 4), *(s16 *)*(u8 **)data_02159424);
    func_020a67e4(p, *(u16 *)(*(u8 **)data_02159428 + 6), *(s16 *)*(u8 **)data_02159424);
    if (*(u16 *)(*(u8 **)data_02159428 + 6) == 24) {
        if (*(u16 *)*(u8 **)data_0215942c == 12) {
            func_020f4c00(p, **(u32 **)data_02159430);
        } else {
            func_020f4c00(p, 8);
        }
    }
    iVar3 = (s32)func_020a78c0();
    func_0208d1a0(p, iVar3);
    func_02043b8c(p);
    func_020bcc4c(p);
    func_020ec740(p);
    {
        s32 v9 = *(u16 *)*(u8 **)data_0215942c;
        switch (v9) {
        case 9:
            goto A9;
        case 12:
            goto A12;
        }
        goto E1;
    A9:
        func_ov004_0216e9a4(p);
        func_ov004_0216e7bc(p);
        func_ov004_0216e774(*(s16 *)(*(u8 **)data_02159458 + 2));
        func_ov004_0216e748(-1);
        if (*(s16 *)*(u8 **)data_02159458 != 0) {
            func_ov004_0216e6ec();
        } else {
            func_ov004_0216e5e0();
        }
        goto E1;
    A12:
        {
            u16 *puVar11;
            s32 i3;
            func_ov004_0216e9a4(p);
            func_ov004_0216e7bc(p);
            func_ov004_0216e774(*(s16 *)(*(u8 **)data_02159458 + 2));
            i3 = 0;
            puVar11 = (u16 *)(*(u8 **)data_0215942c + 0x20);
            do {
                if (((*puVar11 & 1) != 0) && ((*puVar11 & 2) != 0)) {
                    func_ov004_0216e748(i3);
                    break;
                }
                i3 = (i3 + 1) * 0x10000 >> 16;
                puVar11 = puVar11 + 10;
            } while (i3 < 3);
            func_ov004_0216e5e0();
        }
    E1:
        ;
    }
    if (*(u16 *)*(u8 **)data_0215942c == 8) {
        func_ov005_02164cc0(p);
    }
    if (*(u16 *)*(u8 **)data_0215942c == 3) {
        uVar4 = func_ov006_02164748(p);
        *(u32 *)(*(u8 **)data_02159424 + 0x14) = uVar4;
        func_ov006_0216537c(p);
    }
    func_020e9258(*(s16 *)(data_0212f720 + (u32)*(u16 *)(*(u8 **)data_02159428 + 6) * 28 + 26));
    func_0208e1e8(lb.l20);
    lb.l1c = (u32)func_020bc2dc;
    lb.l20[0] = 3;
    lb.l18 = (u32)func_020e9268;
    piVar5 = func_02003568(p);
    puVar6 = func_0208e150(piVar5, lb.l20);
    if ((*(u16 *)*(u8 **)data_0215942c & 0x4000) != 0) {
        iVar3 = (s32)func_0208f698(puVar6);
        *(u16 *)(iVar3 + 0x24) = 1;
    }
    puVar9 = *(u8 **)data_0215942c;
    uVar10 = *(u16 *)puVar9;
    switch (uVar10) {
    case 0:
    case 5:
    case 6:
    case 10:
    case 11:
    case 15:
        goto L4f4;
    case 1:
        goto L3d4;
    case 2:
        goto L450;
    case 3:
        goto L45c;
    case 4:
        goto L488;
    case 7:
    case 9:
        goto L494;
    case 8:
        goto L4ac;
    case 12:
        goto L4a0;
    case 13:
        goto L4dc;
    case 14:
        goto L4d0;
    case 16:
        goto L4b8;
    case 17:
        goto L4c4;
    case 0x8003:
        goto L3e0;
    case 0x8005:
        goto L4e8;
    case 0xc000:
        goto L3c8;
    case 0xc002:
        goto L3ec;
    default:
        goto L4f4;
    }
L3c8:
    func_020bc1d8(5);
    goto L4fc;
L3d4:
    func_020bc1d8(7);
    goto L4fc;
L3e0:
    func_020bc1d8(8);
    goto L4fc;
L3ec:
    {
        u32 uv = *(u16 *)(puVar9 + 4);
        switch (uv) {
        case 1:
            goto L40c;
        case 2:
            goto L418;
        case 3:
            goto L424;
        }
        goto L4fc;
    }
L40c:
    func_020bc1d8(6);
    goto L4fc;
L418:
    func_020bc1d8(9);
    goto L4fc;
L424:
    if (*(u16 *)(*(u8 **)data_02159428 + 6) == 18) {
        func_020bc1d8(13);
    } else {
        func_020bc1d8(12);
    }
    goto L4fc;
L450:
    func_020bc1d8(1);
    goto L4fc;
L45c:
    if (*(s16 *)*(u8 **)data_02159424 == 0) {
        func_020bc1d8(11);
    } else {
        func_020bc1d8(10);
    }
    goto L4fc;
L488:
    func_020bc1d8(14);
    goto L4fc;
L494:
    func_020bc1d8(15);
    goto L4fc;
L4a0:
    func_020bc1d8(16);
    goto L4fc;
L4ac:
    func_020bc1d8(17);
    goto L4fc;
L4b8:
    func_020bc1d8(18);
    goto L4fc;
L4c4:
    func_020bc1d8(3);
    goto L4fc;
L4d0:
    func_020bc1d8(2);
    goto L4fc;
L4dc:
    func_020bc1d8(1);
    goto L4fc;
L4e8:
    func_020bc1d8(4);
    goto L4fc;
L4f4:
    func_020bc1d8(0);
L4fc:
    uVar4 = func_0208f680(puVar6, 0);
    *(u32 *)(*(u8 **)data_02159450 + 0xc) = uVar4;
    func_020034cc(piVar5);
    func_02043ab4();
    piVar5 = func_02003568(p);
    func_02043b00(piVar5);
    func_020034cc(piVar5);
    piVar5 = func_02003568(p);
    func_020a73cc(piVar5);
    func_020034cc(piVar5);
    func_0208f380();
    iVar3 = (s32)func_0208f668(puVar6, 0);
    func_02042440(p, iVar3);
    piVar5 = func_02003568(p);
    func_020a7134(piVar5, iVar3);
    func_020034cc(piVar5);
    bVar2 = func_020f5220();
    if (bVar2 != 0) {
        func_020f3fec(puVar6);
    }
    func_020439f8(puVar6);
    func_020bcbf0(puVar6);
    func_020ec70c(puVar6);
    if (*(s32 *)data_0214193c == 22) {
        iVar3 = func_ov004_0216ea3c();
        bVar2 = iVar3 != 0;
    } else {
        bVar2 = 0;
    }
    if (bVar2 != 0) {
        func_ov004_0216e7a0(puVar6);
    }
    puVar7 = func_0208efcc(p);
    func_0208f704(puVar6, puVar7);
    func_0204231c(p, (u32)puVar7);
    if (*(s32 *)(*(u8 **)data_02159424 + 0x14) != 0) {
        func_ov006_021646ec(puVar6);
    }
    if (*(s32 *)data_0214193c == 23) {
        iVar3 = func_ov005_02164ec4();
        bVar2 = iVar3 != 0;
    } else {
        bVar2 = 0;
    }
    if (bVar2 != 0) {
        func_ov003_02164c94(puVar6);
    }
    return puVar6;
}
