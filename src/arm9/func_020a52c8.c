#include "ctx.h"

extern u8 *data_0215942c;
extern u32 data_02142334[];
extern u8 *data_02159424;
extern u8 *data_0215be48;
extern u8 *data_02159438;
extern u8 *data_02159060;
extern u8 *data_02159458;
extern u32 data_0214193c;

extern u32 func_02002e60(void);
extern u8 *func_02002e58(u32 a);
extern void func_02097a20(u32 a, u32 b);
extern void func_020068c4(u8 *p, u16 *q);
extern void func_020068c0(u8 *p, u32 a);
extern void func_02006700(u32 a, u32 b);
extern void func_020068bc(u8 *p, u32 a);
extern void func_020066d0(u32 a);
extern void func_020068b8(u8 *p, u32 a);
extern void func_020066cc(u32 a, u32 b, u32 c);
extern void func_0208c604(u8 *p, u32 k);
extern void func_02090f40(u8 *p, u32 k);
extern void func_02096264(u8 *p, u32 a, u32 b);
extern void func_020aa5f0(u8 *p);
extern u8 *func_020a6a24(u8 *p, u8 *q);
extern void func_0209a8b4(u8 *p, u32 a, u32 b);
extern void func_020b2888(u8 *p);
extern void func_020075c8(u8 *p);
extern void func_020fe06c(u32 k, u8 *p);
extern void func_02107fa4(u32 k);
extern void func_021092fc(void);
extern void func_02108a68(void);
extern void func_02107ff4(void);
extern void func_02108060(void);
extern void func_02107e90(void);
extern void func_02107e74(void);
extern void func_02108fc8(void);
extern void func_0210828c(void);
extern void func_02107c90(void);
extern void func_02107c70(void);
extern void func_020b1c90(u8 *p, u32 a, u32 b);
extern void func_020fc898(u32 a);
extern void func_020fc880(u32 a);
extern void func_020aa560(void);
extern void func_020b1c30(void);
extern void func_0209944c(void);
extern u8 *func_020a6138(u8 *p);
extern void func_ov004_021639ec(u8 *p);
extern void func_ov004_0215c57c(void);
extern void func_ov004_0215c0d4(void);
extern void func_020e90ac(u8 *p);
extern void func_020e8f8c(u32 a);
extern s32 func_ov005_02164ec4(void);
extern void func_020942c0(s16 *p, u32 a);
extern void func_ov005_02164984(u32 a, u32 b);
extern void func_020034bc(u8 *p);
extern void func_0208af88(void);
extern void func_0209eeec(u32 a, u32 b);
extern s32 func_020a7918(void);
extern s32 func_02093e28(void);
extern s32 func_020ae69c(void);
extern void func_0209fb38(u32 a, u32 b, u32 c);
extern void func_020a0db0(u32 a, u32 b, u32 c);
extern void func_0209fac0(void);
extern void func_0209af44(u32 a);
extern u64 func_020ae688(void);
extern void func_02005900(void);
extern void func_020068a0(void);
extern void func_0200689c(void);
extern void func_020a7028(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_020a6fd4(void);
extern void func_0209a5d4(void);

void func_020a52c8(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u8 *piVar5;
    u8 *psVar6;
    u8 *puVar11;
    u32 uVar13;
    s32 sv;
    s32 sv2;
    u16 loc0[2];
    s16 loc1[2];
    s32 iVar4;
    s32 bVar14;
    s16 sa;
    s16 t16;

    iVar4 = func_02002e60();
    piVar5 = func_02002e58(iVar4);
    if (*(u16 *)(data_0215942c + 2) != 0xffff) {
        func_02097a20(*(u16 *)(data_0215942c + 2), 0xffff);
    }
    loc0[0] = 8;
    loc0[1] = 0;
    func_020068c4(piVar5, loc0);
    func_020068c0(piVar5, 18);
    func_02006700(0, (u32)func_020068a0);
    func_02006700(1, (u32)func_0200689c);
    func_02006700(2, (u32)func_020a7028);
    func_02006700(3, (u32)func_020067d8);
    func_02006700(4, (u32)func_02006734);
    func_02006700(15, (u32)func_020a6fd4);
    func_02006700(17, (u32)func_0209a5d4);
    func_020068bc(piVar5, 20);
    uVar13 = 0;
    do {
        func_020066d0(uVar13);
        uVar13 = (u16)(uVar13 + 1);
    } while (uVar13 < 20);
    func_020068b8(piVar5, 10);
    uVar13 = 0;
    do {
        func_020066cc(uVar13, data_02142334[uVar13], uVar13);
        uVar13 = (u16)(uVar13 + 1);
    } while (uVar13 < 10);
    sv = (s32)*(u16 *)data_0215942c;
    switch (sv) {
    case 0: goto L_3dc;
    case 1: goto L_1e8;
    case 2: goto L_2b0;
    case 3: goto L_210;
    case 4: goto L_238;
    case 5: goto L_3dc;
    case 6: goto L_26c;
    case 7: goto L_294;
    case 8: goto L_3dc;
    case 9: goto L_2c0;
    case 10: goto L_390;
    case 11: goto L_3dc;
    case 12: goto L_2c0;
    case 13: goto L_2f4;
    case 14: goto L_31c;
    case 15: case 16: case 17: goto L_3dc;
    case 18: goto L_390;
    case 0x8003: goto L_1e8;
    case 0x8005: goto L_390;
    case 0xc000: goto L_1c8;
    case 0xc002: goto L_1d8;
    default: goto L_3dc;
    }
L_1c8:
    func_0208c604(piVar5, 1);
    goto L_418;
L_1d8:
    func_0208c604(piVar5, 5);
    goto L_418;
L_1e8:
    func_02090f40(piVar5, 4);
    func_02090f40(piVar5, 13);
    func_0208c604(piVar5, 3);
    goto L_418;
L_210:
    func_02090f40(piVar5, 6);
    func_02090f40(piVar5, 13);
    func_0208c604(piVar5, 7);
    goto L_418;
L_238:
    func_02090f40(piVar5, 5);
    func_02090f40(piVar5, 10);
    func_02090f40(piVar5, 13);
    func_0208c604(piVar5, 8);
    goto L_418;
L_26c:
    func_02090f40(piVar5, 9);
    func_02090f40(piVar5, 3);
    func_0208c604(piVar5, 2);
    goto L_418;
L_294:
    func_02090f40(piVar5, 9);
    func_0208c604(piVar5, 2);
    goto L_418;
L_2b0:
    func_0208c604(piVar5, 2);
    goto L_418;
L_2c0:
    func_02090f40(piVar5, 2);
    func_02090f40(piVar5, 7);
    func_02090f40(piVar5, 3);
    func_02090f40(piVar5, 13);
    goto L_418;
L_2f4:
    func_0208c604(piVar5, 2);
    func_02090f40(piVar5, 2);
    func_02090f40(piVar5, 8);
    goto L_418;
L_31c:
    func_0208c604(piVar5, 2);
    func_02090f40(piVar5, 2);
    func_02090f40(piVar5, 8);
    func_02090f40(piVar5, 1);
    uVar13 = 0;
    do {
        func_02096264(piVar5, 4, uVar13);
        func_02096264(piVar5, 5, uVar13);
        uVar13 = (u16)(uVar13 + 1);
    } while (uVar13 < 5);
    goto L_418;
L_390:
    func_0208c604(piVar5, 2);
    func_02090f40(piVar5, 2);
    func_02090f40(piVar5, 3);
    func_02090f40(piVar5, 11);
    func_02090f40(piVar5, 13);
    func_02090f40(piVar5, 8);
    goto L_418;
L_3dc:
    func_0208c604(piVar5, 2);
    func_02090f40(piVar5, 2);
    func_02090f40(piVar5, 3);
    func_02090f40(piVar5, 11);
    func_02090f40(piVar5, 8);
L_418:
    func_020aa5f0(piVar5);
    psVar6 = func_020a6a24(piVar5, param_1);
    data_02159424 = psVar6;
    if (*(u16 *)data_0215942c == 7) {
        func_0209a8b4(piVar5, *(u32 *)(psVar6 + 0x1c), 0x74f8);
    }
    func_020b2888(piVar5);
    func_020075c8(piVar5);
    puVar11 = data_0215942c;
    sv2 = (s32)*(u16 *)puVar11;
    switch (sv2) {
    case 0: goto L_6e4;
    case 1: goto L_52c;
    case 2: goto L_5e8;
    case 3: goto L_544;
    case 4: goto L_59c;
    case 5: goto L_770;
    case 6: goto L_75c;
    case 7: goto L_600;
    case 8: goto L_628;
    case 9: goto L_658;
    case 10: goto L_694;
    case 11: goto L_694;
    case 12: goto L_668;
    case 13: goto L_6bc;
    case 14: goto L_6d0;
    case 15: goto L_770;
    case 16: goto L_640;
    case 17: goto L_6f4;
    case 18: goto L_6a8;
    case 0x8003: goto L_5d0;
    case 0x8005: goto L_728;
    case 0xc000: goto L_51c;
    case 0xc002: goto L_5b4;
    default: goto L_770;
    }
L_51c:
    func_020fe06c(1, piVar5);
    goto L_5a48;
L_52c:
    func_020fe06c(5, piVar5);
    func_02107fa4(7);
    goto L_5a48;
L_544:
    if (*(s16 *)data_02159424 == 0) {
        func_020fe06c(8, piVar5);
        func_021092fc();
        func_02108a68();
        goto L_5a48;
    }
    func_020fe06c(7, piVar5);
    func_02107fa4(16);
    *(u32 *)(data_0215be48 + 0x5030) = 1;
    goto L_5a48;
L_59c:
    func_020fe06c(6, piVar5);
    func_02107fa4(19);
    goto L_5a48;
L_5b4:
    func_020b1c90(piVar5, (u32)(s16)*(s16 *)(puVar11 + 6), (u32)(s16)*(s16 *)data_02159424);
    goto L_5a48;
L_5d0:
    func_020fe06c(5, piVar5);
    func_02107fa4(15);
    goto L_5a48;
L_5e8:
    func_020fe06c(0, piVar5);
    func_02108060();
    func_021092fc();
    goto L_5a48;
L_600:
    func_020fe06c(0, piVar5);
    func_02107ff4();
    *(u32 *)(data_0215be48 + 0x5030) = 1;
    goto L_5a48;
L_628:
    func_020fe06c(3, piVar5);
    func_02107e90();
    func_021092fc();
    goto L_5a48;
L_640:
    func_020fe06c(12, piVar5);
    func_02107e74();
    func_021092fc();
    goto L_5a48;
L_658:
    func_020fe06c(15, piVar5);
    goto L_5a48;
L_668:
    func_020fe06c(11, piVar5);
    func_021092fc();
    *(u32 *)(data_0215be48 + 0x5030) = 1;
    func_02108fc8();
    goto L_5a48;
L_694:
    func_020fe06c(4, piVar5);
    func_0210828c();
    goto L_5a48;
L_6a8:
    func_020fe06c(14, piVar5);
    func_0210828c();
    goto L_5a48;
L_6bc:
    func_020fe06c(10, piVar5);
    func_02107c90();
    goto L_5a48;
L_6d0:
    func_020fe06c(9, piVar5);
    func_02107c70();
    goto L_5a48;
L_6e4:
    func_020fe06c(0, piVar5);
    goto L_5a48;
L_6f4:
    func_020fe06c(0, piVar5);
    func_02107ff4();
    *(u32 *)(data_0215be48 + 0x5030) = 1;
    *(u32 *)(data_0215be48 + 0x5034) = 1;
    goto L_5a48;
L_728:
    func_020fe06c(0, piVar5);
    func_02107ff4();
    *(u32 *)(data_0215be48 + 0x5030) = 1;
    *(u32 *)(data_0215be48 + 0x5034) = 1;
    goto L_5a48;
L_75c:
    func_020fe06c(0, piVar5);
    func_02107ff4();
    goto L_5a48;
L_770:
    func_020fe06c(0, piVar5);
    func_0210828c();
L_5a48:
    if (data_0215be48 != 0) {
        func_020fc898(*(u32 *)(data_02159424 + 0xc));
        func_020fc880(*(u32 *)(data_02159424 + 0x10));
    }
    func_020aa560();
    func_020b1c30();
    if ((*(u16 *)(data_02159438 + 4) & 1) == 0) {
        func_0209944c();
    } else {
        *(u32 *)(data_02159060 + 0xa8) = 0;
    }
    psVar6 = func_020a6138(piVar5);
    *(u8 **)(data_02159424 + 8) = psVar6;
    if ((*(u16 *)data_0215942c == 9) || (*(u16 *)data_0215942c == 12)) {
        func_ov004_021639ec(piVar5);
        if (*(s16 *)(data_02159458 + 4) != 0) {
            func_ov004_0215c57c();
        }
        if ((*(s16 *)data_02159458 == 0) && (*(u16 *)data_0215942c != 12)) {
            func_ov004_0215c0d4();
        }
    }
    func_020e90ac(piVar5);
    func_020e8f8c(0);
    if (data_0214193c == 0x17) {
        iVar4 = func_ov005_02164ec4();
        bVar14 = iVar4 != 0;
    } else {
        bVar14 = 0;
    }
    if (bVar14) {
        t16 = *(s16 *)(data_0215942c + 16);
        loc1[0] = 0;
        loc1[1] = t16;
        func_020942c0(loc1, 0xffffffff);
        func_ov005_02164984((u32)*(s16 *)(data_0215942c + 14), (u32)*(s16 *)(data_0215942c + 16));
    }
    func_020034bc(piVar5);
    if ((*(u16 *)data_0215942c & 0x8000) == 0) {
        func_0208af88();
    }
    puVar11 = data_0215942c;
    iVar4 = (s32)*(u16 *)puVar11;
    switch (iVar4) {
    case 0:
        goto L_988;
    case 1:
        goto L_ad0;
    case 2:
        goto L_b5c;
    case 3:
        goto L_ad0;
    case 4:
        goto L_ad0;
    case 5:
        goto L_b5c;
    case 6:
        goto L_b5c;
    case 7:
        goto L_abc;
    case 8:
        goto L_b5c;
    case 9:
        goto L_b5c;
    case 10:
        goto L_978;
    case 11:
        goto L_b5c;
    case 12:
        goto L_a58;
    case 13:
        goto L_b5c;
    case 14:
        goto L_b5c;
    case 15:
        goto L_b5c;
    case 16:
        goto L_b5c;
    case 17:
        goto L_b30;
    case 0x8003:
        goto L_b0c;
    case 0xc002:
        goto L_af4;
    default:
        goto L_b5c;
    }
L_978:
    func_0209eeec(31, 127);
    goto L_b5c;
L_988:
    switch (*(s16 *)(puVar11 + 12)) {
    case -1:
        goto L_a38;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        goto L_a20;
    case 7:
        goto L_9e8;
    case 8:
    case 9:
    case 10:
        goto L_a38;
    case 11:
        goto L_a04;
    case 12:
        goto L_a38;
    case 13:
        goto L_9d8;
    default:
        goto L_a20;
    }
L_9d8:
    func_0209eeec(31, 127);
    goto L_a38;
L_9e8:
    if (func_02093e28() != 0) {
        func_0209eeec(31, 127);
    }
    goto L_a38;
L_a04:
    if (*(s16 *)(puVar11 + 18) != 0) {
        func_0209eeec(31, 127);
    }
    goto L_a38;
L_a20:
    if (func_020a7918() >= 0) {
        func_0209eeec(31, 127);
    }
L_a38:
    if (func_020ae69c() != 0) {
        func_0209fb38(0, 70, 0);
    }
    goto L_b5c;
L_a58:
    sa = *(s16 *)(puVar11 + 20 * *(s16 *)(puVar11 + 28) + 48);
    switch (sa) {
    case 2:
        func_0209fb38(35, 127, 0);
        break;
    case 1:
        func_0209fb38(36, 127, 0);
        break;
    case 0:
        func_0209fb38(34, 127, 0);
        break;
    }
    goto L_b5c;
L_abc:
    func_0209fb38(27, 127, 0);
    goto L_b5c;
L_ad0:
    func_0209fb38(5, 100, 0);
    func_020a0db0(0, 100, 60);
    goto L_b5c;
L_af4:
    func_0209fac0();
    func_020a0db0(0, 110, 60);
    goto L_b5c;
L_b0c:
    func_0209fb38(5, 127, 0);
    func_020a0db0(0, 80, 60);
    goto L_b5c;
L_b30:
    switch (*(s16 *)(puVar11 + 26)) {
    case 2:
        func_0209af44(1);
        break;
    case 3:
        func_0209af44(2);
        break;
    }
L_b5c:
    uVar13 = *(u16 *)data_0215942c;
    if (uVar13 == 0) {
        uVar13 = (u32)func_020ae688();
    }
    ((void (*)(u32))func_02005900)(uVar13);
    return;
}
