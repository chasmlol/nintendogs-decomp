#include "ctx.h"
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_strength_reduction off

extern u8 data_ov009_0215cce0[];
extern u8 data_ov009_0215cc8c[];
extern u8 data_ov009_0215cc9c[];
extern u8 data_ov009_0215ccac[];
extern u8 data_ov009_0215ccc0[];
extern u8 data_ov009_0215ccd0[];

extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov009_0215cc44(void);
extern void func_ov009_0215cc70(void);

s32 func_02002e60(void);
s32 func_02002e58(s32 a);
void func_020068c4(s32 a, s32 b);
void func_020068c0(s32 a, s32 b);
void func_02006700(s32 a, s32 b);
void func_020068bc(s32 a, s32 b);
void func_0208c604(s32 a, s32 b);
void func_02005e18(s32 a);
s32 func_0200563c(s32 a, s32 b);
void func_0200560c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_020055b4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02005508(s32 a, s32 b);
s32 func_ov009_0215ca60(s32 a);
s32 func_0208c5b4(s32 a);
s32 func_02006bac(s32 a);
s32 func_02006b78(s32 a);
void func_020042e8(s32 a);
void func_0207c640(s32 a, s32 b);
void func_0207c8bc(s32 a, s32 b);
void func_02077970(s32 a);
s32 func_02078214(s32 a);
void func_0208ba24(s32 a, s32 b);
s32 func_0208bd84(s32 a, s32 b);
s32 func_0208b9e8(s32 a);
void func_02074450(s32 a, s32 b);
void func_0205f050(s32 a, s32 b, s32 c);
void func_02078224(s32 a, s32 b);
void func_ov009_0215c890(s32 a, s32 b, s32 c);
void func_02003918(s32 a, s32 b, s32 c);
s32 func_02077ddc(s32 a, s32 b, s32 c);
void func_020744b8(s32 a, s32 b, s32 c, s32 d);
void func_02074280(s32 a, s32 b);
s32 func_020781d4(s32 a);
void func_0206b8a8(s32 a, s32 b, s32 c);
void func_0206b0a4(s32 a, s32 b, s32 c);
u64 func_0206b3e4(s32 a, s32 b, s32 c);
void func_02005900(s32 a, s32 b);

void func_ov009_0215c3dc(void)
{
    s32 iVar2;
    s32 zr;
    s32 iVar6;
    s32 piVar3;
    s32 puVar4;
    s32 uVar10;
    s32 i;
    s32 iVarB;
    s32 iVar8;
    s32 puVar5;
    s32 piVar7;
    s32 uVar11;
    s32 uVar12;
    u8 F[80];
    u64 uVar14;

    iVar2 = func_02002e60();
    piVar3 = func_02002e58(iVar2);
    *(u16 *)(F + 0) = 0xff;
    *(u16 *)(F + 2) = 0;
    func_020068c4(piVar3, (s32)(F + 0));
    func_020068c0(piVar3, 5);
    func_02006700(0, (s32)func_020068a0);
    func_02006700(1, (s32)func_020067d8);
    func_02006700(2, (s32)func_02006734);
    func_02006700(3, (s32)func_ov009_0215cc44);
    func_02006700(4, (s32)func_ov009_0215cc70);
    func_020068bc(piVar3, 2);
    func_0208c604(piVar3, 0);
    func_02005e18((s32)(F + 36));
    *(u16 *)(F + 38) = 1;
    *(u16 *)(F + 42) = 1;
    *(u16 *)(F + 46) = 1;
    *(u16 *)(F + 44) = 0;
    *(u16 *)(F + 50) = 8;
    *(u16 *)(F + 58) = 7;
    *(u16 *)(F + 60) = 16;
    *(u16 *)(F + 52) = 64;
    puVar4 = func_0200563c(piVar3, (s32)(F + 36));
    func_0200560c(puVar4 + 44, 1, 0, 0, 1, 5, 1, 0);
    func_020055b4(puVar4 + 44, 1, 0, 0, 0, 5, 1);
    func_02005508(puVar4, 0xfc00);
    puVar5 = func_ov009_0215ca60(piVar3);
    *(s32 *)data_ov009_0215cce0 = puVar5;
    iVar2 = func_0208c5b4((s32)data_ov009_0215cc8c);
    iVar6 = func_0208c5b4((s32)data_ov009_0215cc9c);
    uVar10 = func_0208c5b4((s32)data_ov009_0215ccac);
    piVar7 = func_02006bac(iVar2);
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xf4) = piVar7;
    piVar7 = func_02006b78(iVar6);
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xf8) = piVar7;
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xfc) = uVar10;
    func_020042e8(puVar4);
    func_0207c640(4, 1);
    func_0207c8bc(0x8000, 1);
    zr = 0;
    func_02077970(zr);
    iVarB = func_02078214(zr);
    iVar2 = *(s32 *)(iVarB + *(u16 *)(iVarB + 0xe) + 0xc);
    iVarB = iVarB + iVar2;
    func_0208ba24(piVar3, iVar2);
    iVar2 = func_0208bd84(piVar3, zr);
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xdc) = iVar2;
    iVar8 = func_0208bd84(piVar3, 4);
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xe0) = iVar8;
    iVar2 = func_0208bd84(piVar3, 0x1e2);
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xe4) = iVar2;
    uVar10 = func_0208b9e8((s32)data_ov009_0215ccc0);
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xec) = uVar10;
    func_02074450(*(s32 *)data_ov009_0215cce0 + 0x7c, iVarB);
    func_0205f050((s32)(F + 20), 0x10, (s32)data_ov009_0215ccd0);
    func_02078224(iVarB + 0x40, (s32)(F + 20));
    func_ov009_0215c890(iVarB, 0, 0);
    func_02003918((s32)(F + 4), piVar3, 4);
    i = 0;
    {
        s32 f4 = (s32)(F + 4);
        s32 zc = i;
        s32 zb = i;
        do {
            u8 *rec;
            u8 *ep;
            uVar10 = func_02077ddc(f4, *(s32 *)(*(u32 *)data_ov009_0215cce0 + 0xdc), iVarB);
            *(s32 *)(*(u32 *)data_ov009_0215cce0 + i * 4 + 0xd0) = uVar10;
            iVar8 = *(u32 *)data_ov009_0215cce0 + i * 4;
            func_020744b8(*(s32 *)(iVar8 + 0xd0), *(s32 *)(iVar8 + 0xdc), iVarB, zc);
            rec = (u8 *)*(s32 *)(*(u32 *)data_ov009_0215cce0 + i * 4 + 0xd0);
            iVar8 = zb;
            if ((s32)*(u8 *)(rec + 0x19) > 0) {
                do {
                    switch (iVar8) {
                    case 10: case 11: case 12: case 13:
                    case 14: case 15: case 16: case 17:
                        if (i != 2) {
                            ep = rec + iVar8 * 2;
                            *(u16 *)(ep + 0x1a) = *(u16 *)(ep + 0x1a) & ~0x100;
                        }
                        goto next;
                    case 18: case 19: case 20: case 21: case 22: case 23:
                    case 24: case 25: case 26: case 27: case 28: case 29:
                        break;
                    default:
                        goto dflt;
                    }
                    if (i != 1) {
                        ep = rec + iVar8 * 2;
                        *(u16 *)(ep + 0x1a) = *(u16 *)(ep + 0x1a) & ~0x100;
                    }
                    goto next;
dflt:
                    if (i != 0) {
                        ep = rec + iVar8 * 2;
                        *(u16 *)(ep + 0x1a) = *(u16 *)(ep + 0x1a) & ~0x100;
                    }
next:
                    iVar8++;
                } while (iVar8 < *(u8 *)(rec + 0x19));
            }
            func_02074280(*(u32 *)data_ov009_0215cce0 + 0x7c, *(s32 *)(*(u32 *)data_ov009_0215cce0 + i * 4 + 0xd0));
            i++;
        } while (i < 3);
    }
    uVar10 = func_02077ddc((s32)(F + 4), *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xec), iVarB);
    *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xe8) = uVar10;
    uVar12 = *(s32 *)data_ov009_0215cce0;
    uVar11 = func_020781d4(zr);
    func_020744b8(*(s32 *)(uVar12 + 0xe8), *(s32 *)(uVar12 + 0xec), iVarB, uVar11);
    func_02074280(*(s32 *)data_ov009_0215cce0 + 0x7c, *(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xe8));
    func_0206b8a8(*(s32 *)(*(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xf8) + 0xc), 0, 0x200);
    func_0206b0a4(*(s32 *)(*(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xf4) + 0x14), 0, 0x8000);
    uVar14 = func_0206b3e4(*(s32 *)(*(s32 *)data_ov009_0215cce0 + 0xfc), 0, 0x800);
    func_02005900((s32)uVar14, (s32)(uVar14 >> 32));
}
