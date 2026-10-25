#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_02159468;
extern u8 func_020ae3c0[];
extern u8 func_020ae408[];
extern u8 func_020b8edc[];
extern u8 func_020b8174[];
extern u8 func_020bb2d0[];
extern u8 func_020b9880[];
extern u8 func_020b4bd0[];

extern void func_0210828c(void);
extern void func_02108250(void);
extern void func_021092fc(void);
extern void func_02107fa4(u32 a);
extern void func_02108218(void);
extern void func_021081e4(void);
extern void func_021082c8(void);
extern void func_02107c0c(u32 a);
extern void func_02035280(void);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02108cb4(u32 a, u32 b, u32 c);
extern void func_021080f4(void);
extern s32 func_02093990(void);
extern s32 func_020938f0(void);
extern void func_020aacd8(u8 *p);
extern s32 func_020bc3c4(void);
extern void func_020cf998(u32 a, u32 b);
extern void func_02042a0c(void);
extern void func_02107ff4(void);
extern void func_ov006_02164990(u32 a);
extern void func_ov004_0215c81c(void);
extern void func_ov004_0216e6ec(void);
extern void func_02097b40(void);
extern void func_ov004_0215c06c(void);
extern void func_ov004_0215c0d4(void);
extern void func_ov004_0216e5e0(void);
extern void func_ov004_0215c84c(void);
extern s32 func_020939e8(void);
extern s32 func_ov004_0215c028(void);
extern u32 func_ov000_0215c000(void);
extern s32 func_02093834(void);
extern s32 func_02003a7c(void);
extern s32 func_02003a44(void);
extern void func_02003d64(void);
extern void func_02003d90(u32 a);
extern void func_021082e8(void);
extern void func_021082d8(void);

#define S16(off) (*(s16 *)(p + (off)))
#define U16(off) (*(u16 *)(p + (off)))
#define U32(off) (*(u32 *)(p + (off)))
#define SETBIT() (*(vu16 *)0x04000304 = *(vu16 *)0x04000304 | 0x8000)
#define CLRBIT() (*(vu16 *)0x04000304 = *(vu16 *)0x04000304 & ~0x8000)

void func_020ad8f0(u8 *p)
{
    s32 sVar2;
    s32 sv;
    s32 sv10;
    u8 *q;
    u32 uVar1;
    s32 iVar6;
    u32 uVar5;
    s32 bVar4;

    sVar2 = S16(0x26);
    S16(0x26) = S16(0x28);
    S16(0x28) = 0;
    U16(0x2a) = 0;
    U16(0x2e) = 0;
    U16(0x30) = 0;

    switch (S16(0x26)) {
    case 2:
        SETBIT();
        func_0210828c();
        break;
    case 4:
        SETBIT();
        func_02108250();
        func_021092fc();
        break;
    case 9:
        SETBIT();
        func_02097b94(0, 0x4c4, 0, 0, 0);
        break;
    case 10:
        sv10 = *(u16 *)data_0215942c;
        if (sv10 > 11) {
            goto C10gt;
        }
        if (sv10 < 10) {
            goto C10lt;
        }
        if (sv10 == 10) {
            goto C10;
        }
        if (sv10 != 11) {
            goto Lsw_end;
        }
        goto C11;
    C10lt:
        if (sv10 != 3) {
            goto Lsw_end;
        }
        goto C3;
    C10gt:
        if (sv10 != 18) {
            goto Lsw_end;
        }
        goto C18;
    C10:
        if (U32(0x134) != (u32)-3) {
            func_02097b94(2, 0xd50, 0, 0, 0);
        } else {
            if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 1) {
                func_02097b94(2, 0xd50, 1, (u32)func_020ae3c0, 0);
            } else {
                func_02097b94(2, 0xd50, 1, (u32)func_020ae3c0, 1);
            }
        }
        break;
    C3:
        if (U32(0x134) != (u32)-3) {
            func_02097b94(6, 0x1edd, 0, 0, 1);
        } else {
            if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 1) {
                func_02097b94(6, 0x1ede, 0, (u32)func_020ae3c0, 0);
            } else {
                func_02097b94(6, 0x1ede, 0, (u32)func_020ae3c0, 1);
            }
        }
        break;
    C11:
        if (U32(0x130) != (u32)-3) {
            func_02097b94(2, 0xd16, 0, 0, 0);
        } else {
            func_02097b94(2, 0xd17, 0, (u32)func_020ae408, 0);
        }
        break;
    C18:
        if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 1) {
            func_02097b94(2, 0xc8c, 0, (u32)func_020ae3c0, 0);
        } else {
            func_02097b94(2, 0xc8c, 0, (u32)func_020ae3c0, 1);
        }
        break;
    case 16:
        sv = *(u16 *)data_0215942c;
        if (sv == 9) {
            goto C16a;
        }
        if (sv != 11) {
            goto C16c;
        }
        goto C16b;
    C16a:
        if (S16(0x7c) == -1) {
            S16(0x7c) = 0x70;
            if (S16(0x7c) != -1) {
                if (S16(0x76) == 0) {
                    S16(0x76) = 1;
                } else {
                    func_020aacd8(p);
                }
            }
        }
        goto C16d;
    C16b:
        func_02097b94(2, 0xcf9, 0, (u32)func_020b8edc, 0);
        iVar6 = func_020bc3c4();
        func_020cf998(iVar6 + 0x88, 2);
        S16(0x7c) = 0x71;
        if (S16(0x7c) != -1) {
            if (S16(0x76) == 0) {
                S16(0x76) = 1;
            } else {
                func_020aacd8(p);
            }
        }
        goto C16d;
    C16c:
        func_02097b94(2, 0xce4, 0, (u32)func_020b8edc, 0);
        func_02042a0c();
        iVar6 = func_020bc3c4();
        func_020cf998(iVar6 + 0x88, 2);
        S16(0x7c) = 0x70;
        if (S16(0x7c) != -1) {
            if (S16(0x76) == 0) {
                S16(0x76) = 1;
            } else {
                func_020aacd8(p);
            }
        }
    C16d:
        U16(0x102) = 0;
        break;
    case 17:
        func_02097b94(2, 0xcfb, 0, (u32)func_020b8174, 0);
        break;
    case 18:
        SETBIT();
        q = p + 256;
        sv = *(s16 *)(q + 24);
        if (sv > 0) {
            goto C18sw;
        }
        if (sv != 0) {
            goto Lsw_end;
        }
        goto C18zero;
    C18sw:
        switch (sv) {
        case 19: case 20: case 21: case 22: case 23:
            goto Lsw_end;
        case 24:
            goto C24;
        case 25:
            goto C25;
        case 26: case 27: case 28:
            goto Lsw_end;
        default:
            goto Lsw_end;
        }
    C18zero:
        iVar6 = func_02093834();
        if (iVar6 < 1) {
            goto C18neg;
        }
        func_02097b94(2, 0xc26, 1, (u32)func_020bb2d0, 0);
        break;
    C18neg:
        func_02097b94(2, 0xc26, 0, (u32)func_020bb2d0, 0);
        break;
    C24:
        func_02097b94(2, 0xc54, 0, (u32)func_020bb2d0, 0);
        break;
    C25:
        func_02107ff4();
        break;
    case 20:
        q = p + 256;
        CLRBIT();
        sv = *(s16 *)(q + 24);
        if (sv == 17) {
            goto C20a;
        }
        if (sv == 22) {
            goto C20b;
        }
        if (sv != 26) {
            goto Lsw_end;
        }
        goto C20c;
    C20a:
        func_02097b94(2, 0xc4e, 1, (u32)func_020bb2d0, 0);
        break;
    C20b:
        func_02097b94(2, 0xc52, 0, (u32)func_020bb2d0, 0);
        break;
    C20c:
        func_02097b94(2, 0xc58, 0, (u32)func_020bb2d0, 0);
        break;
    case 19:
        func_02108cb4(8, 0, 0);
        break;
    case 7:
        SETBIT();
        func_02108218();
        func_021092fc();
        break;
    case 8:
        SETBIT();
        func_021081e4();
        func_021092fc();
        break;
    case 5:
        SETBIT();
        func_021082c8();
        sv = *(u16 *)data_0215942c;
        if (sv == 10 || sv == 11 || sv == 18) {
            func_02107c0c(2);
        } else {
            func_02107c0c(0);
        }
        func_021092fc();
        break;
    case 6:
        if (sVar2 == 2) {
            func_02035280();
        }
        switch (S16(0x7c)) {
        case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86:
        case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94:
        case 95: case 96: case 97: case 98: case 99: case 100:
            bVar4 = 0;
            break;
        default:
            bVar4 = 1;
            break;
        }
        if (bVar4) {
            CLRBIT();
            func_021092fc();
            func_021082e8();
        } else {
            SETBIT();
            func_021092fc();
            func_021082d8();
        }
        *(u32 *)(data_02159468 + 0x24) = 0;
        break;
    case 3:
        SETBIT();
        func_02107fa4(2);
        break;
    case 11:
        SETBIT();
        break;
    case 12:
        SETBIT();
        break;
    case 13:
        SETBIT();
        func_021080f4();
        break;
    case 14:
        SETBIT();
        iVar6 = func_02093990();
        func_02108cb4(11, 1, iVar6);
        break;
    case 15:
        SETBIT();
        iVar6 = func_020938f0();
        func_02108cb4(27, 1, iVar6);
        break;
    case 21:
        SETBIT();
        func_02108cb4(11, 0, 0);
        break;
    case 25:
        func_02097b94(2, 0xc20, 0, (u32)func_020b9880, 0);
        break;
    case 40:
        func_ov004_0215c81c();
        SETBIT();
        func_02097b94(7, 0x1f41, 0, 0, 1);
        func_ov004_0215c06c();
        func_ov004_0216e6ec();
        break;
    case 41:
        CLRBIT();
        func_02097b40();
        func_02097b94(7, 0x1f42, 0, 0, 1);
        func_ov004_0215c0d4();
        func_ov004_0216e5e0();
        break;
    case 42:
        func_ov004_0215c84c();
        break;
    case 43:
        iVar6 = func_020939e8();
        if (iVar6 > 0x77) {
            goto C43a;
        }
        func_02097b94(7, 0x1f5e, 0, (u32)func_020b4bd0, 0);
        break;
    C43a:
        if (iVar6 > 0x12b) {
            goto C43b;
        }
        func_02097b94(7, 0x1f5f, 0, (u32)func_020b4bd0, 0);
        break;
    C43b:
        if (iVar6 > 0x1f3) {
            goto C43c;
        }
        func_02097b94(7, 0x1f60, 0, (u32)func_020b4bd0, 0);
        break;
    C43c:
        iVar6 = func_ov004_0215c028();
        if (iVar6 == 0) {
            goto C43z;
        }
        uVar5 = func_ov000_0215c000();
        if (uVar5 < 6) {
            goto C43l6;
        }
        func_02097b94(7, 0x1f57, 0, (u32)func_020b4bd0, 0);
        break;
    C43l6:
        if (uVar5 < 5) {
            goto C43l5;
        }
        func_02097b94(7, 0x1f56, 0, (u32)func_020b4bd0, 0);
        break;
    C43l5:
        if (uVar5 < 1) {
            goto C43l1;
        }
        func_02097b94(7, 0x1f55, 0, (u32)func_020b4bd0, 0);
        break;
    C43l1:
        func_02097b94(7, 0x1f58, 0, (u32)func_020b4bd0, 0);
        break;
    C43z:
        func_02097b94(7, 0x1f59, 0, (u32)func_020b4bd0, 0);
        break;
    case 28:
        func_ov006_02164990(1);
        break;
    case 35:
        func_02107ff4();
        break;
    case 36:
        func_021082c8();
        func_02107c0c(1);
        break;
    case 0:
    case 1:
        break;    }
Lsw_end:
    iVar6 = func_02003a7c();
    if (iVar6 != 0) {
        func_02003d64();
    } else {
        if (func_02003a44()) {
            func_02003d90(20);
        }
    }
    S16(0x2c) = 0;
}
