#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_02159444;
extern u8 *data_02159424;
extern u32 data_02159448;
extern u8 *data_02159458;
extern u32 data_02142468;

extern u8 *func_020038b8(s32 *a, s32 b);
extern void func_0208f5c4(u8 *p, s32 a);
extern void func_0208f544(u8 *p, u32 a);
extern s32 func_020bc3c4(void);
extern void func_020066ac(u8 *p);
extern u8 *func_020955c0(s32 a);
extern s32 func_02093834(void);
extern void func_020af9b4(u8 *p);
extern void func_ov006_02164990(s32 a);
extern s32 func_020a7918(void);
extern void func_0210947c(void);
extern u8 *func_0210f100(s32 a, s32 b);
extern void func_02108138(s32 a, s32 b);
extern void func_0210828c(void);
extern void func_02108218(void);
extern void func_021092fc(void);
extern void func_021081e4(void);
extern void func_02108250(void);
extern s32 func_02093e28(void);
extern s32 func_020b7838(void);
extern void func_02042b54(s32 a);
extern void func_020aacd8(u8 *p);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02006700(s32 a, u32 b);
extern void func_020ac41c(void);
extern void func_020ad634(void);
extern void func_020ad22c(void);
extern void func_020ad128(void);
extern void func_020ad5f8(void);
extern void func_020ad10c(void);
extern void func_020ad0c0(void);
extern void func_020ad120(void);
extern void func_020ae668(void);

#define REG304 (*(vu16 *)0x04000304)
#define SH(p, off, val) (*(u16 *)((u8 *)(p) + (off)) = (val))
#define SS(p, off, val) (*(s16 *)((u8 *)(p) + (off)) = (val))
#define WD(p, off, val) (*(u32 *)((u8 *)(p) + (off)) = (val))
#define LD(p, off) (*(u32 *)((u8 *)(p) + (off)))
#define LH(p, off) (*(s16 *)((u8 *)(p) + (off)))

u8 *func_020ab6e0(s32 *param_1)
{
    s32 j;
    u8 *pr;
    s32 k;
    s32 r0v;
    u8 *q;
    u8 *q2;
    u32 zv;
    u8 *self;
    u32 bv2;
    s32 v;
    s32 i;

    self = func_020038b8(param_1, 0x144);
    func_0208f5c4(self, 0xff);
    func_0208f544(self, (u32)func_020ac41c);
    WD(self, 0x1c, func_020bc3c4());
    WD(self, 0x20, 0);
    SH(self, 36, 0);
    SH(self, 38, 2);
    SH(self, 40, 0);
    SH(self, 42, 0);
    SH(self, 44, 0);
    SH(self, 46, 0);
    SH(self, 48, 0);
    WD(self, 0x34, -1);
    SH(self, 58, 0);
    SH(self, 56, 0);
    WD(self, 0x3c, -1);
    SH(self, 66, 0);
    SH(self, 64, 0);
    SH(self, 68, 0);
    SH(self, 70, 0);
    WD(self, 0x48, (u32)func_020ad634);
    WD(self, 0x4c, (u32)func_020ad22c);
    WD(self, 0x50, 0);
    SH(self, 84, 0);
    SH(self, 86, 0);
    SS(self, 88, -2);
    SH(self, 90, 0);
    SH(self, 92, 0);
    SH(self, 94, 0);
    WD(self, 0x60, 0);
    SH(self, 100, 0);
    SH(self, 102, 0);
    SS(self, 104, -1);
    SH(self, 106, 0);
    WD(self, 0x70, 1);
    SS(self, 108, -1);
    SH(self, 116, 0);
    SH(self, 118, 0);
    SH(self, 120, 0);
    SH(self, 122, 0);
    SS(self, 124, -1);
    SS(self, 126, -1);
    SH(self, 128, 0);
    func_020066ac(self + 130);
    SH(self, 180, 0);
    SS(self, 182, -1);
    SH(self, 184, 0);
    WD(self, 0xbc, 0);
    zv = 0;
    i = 0;
    do {
        q = self + i * 4;
        SH(q, 134, zv);
        SH(q, 136, zv);
        i = (s16)(i + 1);
    } while (i < 3);
    WD(self, 0x94, zv);
    WD(self, 0x98, zv);
    SH(self, 196, zv);
    WD(self, 0x9c, zv);
    WD(self, 0xa0, zv);
    WD(self, 0xa4, zv);
    WD(self, 0xa8, zv);
    WD(self, 0xac, zv);
    WD(self, 0xb0, zv);
    j = 0;
    pr = self;
    do {
        SS(self + j * 2, 198, -1);
        WD(pr, 0xd0, 0);
        WD(pr, 0xd4, 0);
        WD(pr, 0xd8, 0);
        pr = pr + 12;
        j = (s16)(j + 1);
    } while (j < 3);
    SS(self, 204, -1);
    WD(self, 0xf4, 0);
    WD(self, 0xf8, 0);
    WD(self, 0xfc, 0);
    SH(self, 256, 0);
    SH(self, 258, 0);
    SS(self, 260, -1);
    SS(self, 262, -1);
    SH(self, 264, 0);
    SH(self, 266, 3);
    SH(self, 268, 0);
    SS(self, 270, -1);
    SS(self, 272, -1);
    SS(self, 274, -1);
    SS(self, 276, -1);
    SH(self, 278, 0);
    SS(self, 280, -1);
    SH(self, 282, 0);
    SS(self, 284, -1);
    SS(self, 286, -1);
    q = func_020955c0(0);
    bv2 = *(u8 *)(q + 0x72);
    r0v = func_02093834();
    if (r0v < 1 && bv2 >= 3 && bv2 <= 4) {
        SH(self, 0x120, 0x708);
        SH(self, 0x122, 0x2a30);
    } else {
        SS(self, 0x120, -1);
        SS(self, 0x122, -1);
    }
    SH(self, 0x124, 0);
    SH(self, 0x128, 0xffff);
    SH(self, 0x12a, 0);
    WD(self, 0x12c, -1);
    WD(self, 0x130, -1);
    WD(self, 0x134, -1);
    SH(self, 0x138, 0);
    WD(self, 0x13c, 0);
    WD(self, 0x140, 0);

    /* dispatch on the halfword at the pointer in data_0215942c */
    q = data_0215942c;
    v = *(u16 *)q;
    switch (v) {
    case 0: goto L31c;
    case 1: goto L9a4;
    case 2: goto L994;
    case 3: goto L9d4;
    case 4: goto La44;
    case 5: goto Lc78;
    case 6: goto Lb10;
    case 7: goto Laa4;
    case 8: goto Lb20;
    case 9: goto Lbe0;
    case 10: goto L7d4;
    case 11: goto L728;
    case 12: goto L958;
    case 13: goto Lc4c;
    case 14: goto Lc5c;
    case 15: goto L97c;
    case 16: goto Lb7c;
    case 17: goto L874;
    case 18: goto L824;
    case 0x8003: goto La80;
    case 0x8005: goto Lc6c;
    case 0xc000: goto Lc000;
    case 0xc002: goto Lc002;
    }
    goto Lc78;

L31c:
    WD(self, 0x20, LD(self, 0x20) | 1);
    WD(self, 0x20, LD(self, 0x20) | 8);
    WD(self, 0x20, LD(self, 0x20) | 2);
    WD(self, 0x4c, (u32)func_020ad128);
    if (data_02142468 == 0) goto L368;
    SH(self, 38, 1);
    func_0210947c();
    goto L55c;

L368:
    k = LH(data_0215942c, 12);
    switch (k) {
    case 0: goto L4d0;
    case 1: goto L4d0;
    case 2: goto L4d0;
    case 3: goto L510;
    case 4: goto L3dc;
    case 5: goto L3dc;
    case 6: goto L510;
    case 7: goto L490;
    case 8: goto L42c;
    case 9: goto L42c;
    case 10: goto L450;
    case 11: goto L450;
    case 12: goto L3b0;
    default: goto L550;
    }

L3b0:
    r0v = (s32)func_0210f100(0, LH(data_0215942c, 24));
    SH(self, 38, 5);
    func_02108138(LH(r0v, 4), LH(data_0215942c, 24));
    goto L55c;

L3dc:
    if (func_020a7918() < 0) goto L3f8;
    SH(self, 38, 2);
    func_0210828c();
    goto L55c;
L3f8:
    r0v = (s32)func_0210f100(0, LH(data_0215942c, 24));
    SH(self, 38, 5);
    func_02108138(LH(r0v, 4), LH(data_0215942c, 24));
    goto L55c;

L42c:
    SH(self, 38, 7);
    REG304 = (u16)(REG304 | 0x8000);
    func_02108218();
    func_021092fc();
    goto L55c;

L450:
    if (LH(data_0215942c, 18) != 0) goto L45c;
    goto L46c;
L45c:
    SH(self, 38, 2);
    func_0210828c();
    goto L55c;
L46c:
    SH(self, 38, 7);
    REG304 = (u16)(REG304 | 0x8000);
    func_02108218();
    func_021092fc();
    goto L55c;

L490:
    if (func_02093e28() != 0) goto L49c;
    goto L4ac;
L49c:
    SH(self, 38, 2);
    func_0210828c();
    goto L55c;
L4ac:
    SH(self, 38, 7);
    REG304 = (u16)(REG304 | 0x8000);
    func_02108218();
    func_021092fc();
    goto L55c;

L4d0:
    if (func_020a7918() < 0) goto L4ec;
    SH(self, 38, 2);
    func_0210828c();
    goto L55c;
L4ec:
    SH(self, 38, 8);
    REG304 = (u16)(REG304 | 0x8000);
    func_021081e4();
    func_021092fc();
    goto L55c;

L510:
    if (func_020a7918() < 0) goto L52c;
    SH(self, 38, 2);
    func_0210828c();
    goto L55c;
L52c:
    SH(self, 38, 4);
    REG304 = (u16)(REG304 | 0x8000);
    func_02108250();
    func_021092fc();
    goto L55c;

L550:
    SH(self, 38, 2);
    func_0210828c();

L55c:
    k = LH(data_0215942c, 12) + 1;
    switch (k) {
    case 0: goto L6f4;
    case 1: goto L5c4;
    case 2: goto L5c4;
    case 3: goto L5c4;
    case 4: goto L598;
    case 5: goto L5f0;
    case 6: goto L5f0;
    case 7: goto L6b4;
    default: goto Lc78;
    }

L598:
    if (func_020a7918() < 0) goto Lc78;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xd51);
    goto Lc78;

L5c4:
    if (func_020a7918() < 0) goto Lc78;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xc82);
    goto Lc78;

L5f0:
    if (func_020a7918() < 0) goto Lc78;
    if (LH(data_0215942c, 20) < 0x2329) goto L634;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xdb6);
    goto Lc78;
L634:
    if (LH(data_0215942c, 20) < 0x1771) goto L660;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xdb7);
    goto Lc78;
L660:
    if (LH(data_0215942c, 20) < 0xbb9) goto L68c;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xdb8);
    goto Lc78;
L68c:
    if (LH(data_0215942c, 20) < 1) goto Lc78;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xdb9);
    goto Lc78;

L6b4:
    if (func_020a7918() < 0) goto Lc78;
    if (LH(data_0215942c, 22) != 1) goto Lc78;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xd21);
    goto Lc78;

L6f4:
    if (data_02159448 == 0) goto Lc78;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xc84);
    data_02159448 = 0;
    goto Lc78;

L728:
    WD(self, 0x20, LD(self, 0x20) | 1);
    WD(self, 0x20, LD(self, 0x20) | 8);
    WD(self, 0x20, LD(self, 0x20) | 2);
    WD(self, 0x4c, (u32)func_020ad128);
    SH(self, 38, 2);
    WD(self, 0x130, -2);
    if (func_020b7838() != 0) goto L790;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xcf8);
    goto L7a8;
L790:
    func_02042b54((s8)LH(data_0215942c, 28));
L7a8:
    {
        u8 *t = (u8 *)LD(data_02159424, 0x38);
        r0v = t ? LD(t, 4) : 0;
    }
    if (r0v != 0) SH(self, 0x100 + 56, 1);
    goto Lc78;

L7d4:
    WD(self, 0x20, LD(self, 0x20) | 1);
    WD(self, 0x20, LD(self, 0x20) | 8);
    WD(self, 0x20, LD(self, 0x20) | 2);
    WD(self, 0x4c, (u32)func_020ad128);
    WD(self, 0x134, -2);
    SH(self, 38, 2);
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xd4f);
    goto Lc78;

L824:
    WD(self, 0x20, LD(self, 0x20) | 1);
    WD(self, 0x20, LD(self, 0x20) | 8);
    WD(self, 0x20, LD(self, 0x20) | 2);
    WD(self, 0x4c, (u32)func_020ad128);
    WD(self, 0x134, -2);
    SH(self, 38, 2);
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xc8a);
    goto Lc78;

L874:
    WD(self, 0x20, LD(self, 0x20) | 1);
    WD(self, 0x20, LD(self, 0x20) | 8);
    WD(self, 0x20, LD(self, 0x20) | 2);
    WD(self, 0x4c, (u32)func_020ad120);
    SH(self, 38, 18);
    k = LH(data_0215942c, 26);
    if (k == 2) goto L8c4;
    if (k != 3) goto Lc78;
    goto L92c;
L8c4:
    SH(self, 0x100 + 24, 3);
    SH(self, 0x100 + 28, LH(data_0215942c, 14));
    q = func_020955c0(LH(self, 0x100 + 28));
    if (*(u16 *)(q + 120) == 0) goto L90c;
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xc45);
    goto Lc78;
L90c:
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 3120);
    goto Lc78;
L92c:
    SH(self, 0x100 + 24, 16);
    SH(self, 0x100 + 28, LH(data_0215942c, 14));
    SH(self, 0x100 + 40, 2);
    SH(self, 0x100 + 42, 0);
    WD(self, 0x12c, 0xc4e);
    goto Lc78;

L958:
    WD(self, 0x4c, (u32)func_020ad120);
    SH(self, 38, 44);
    REG304 = (u16)(REG304 & ~0x8000);
    goto Lc78;

L97c:
    WD(self, 0x20, LD(self, 0x20) | 1);
    SH(self, 38, 2);
    goto Lc78;

L994:
    SH(self, 36, 0);
    SH(self, 38, 33);
    goto Lc78;

L9a4:
    WD(self, 0x20, LD(self, 0x20) | 16);
    SH(self, 36, 2);
    func_020af9b4(self);
    WD(self, 0x48, (u32)func_020ad5f8);
    WD(self, 0x4c, (u32)func_020ad10c);
    goto Lc78;

L9d4:
    SH(self, 36, 0);
    WD(self, 0x48, (u32)func_020ad5f8);
    REG304 = (u16)(REG304 & ~0x8000);
    if (LH(data_02159424, 0) != 0) goto L9fc;
    SH(self, 38, 28);
    WD(self, 0x134, -2);
    func_ov006_02164990(1);
    SH(self, 0x100 + 40, 6);
    SH(self, 0x100 + 42, 1);
    WD(self, 0x12c, 0x1edc);
    goto Lc78;
L9fc:
    SH(self, 38, 27);
    goto Lc78;

La44:
    WD(self, 0x20, LD(self, 0x20) | 2);
    SH(self, 36, 0);
    SH(self, 38, 30);
    WD(self, 0x48, (u32)func_020ad5f8);
    WD(self, 0x4c, (u32)func_020ad0c0);
    REG304 = (u16)(REG304 & ~0x8000);
    goto Lc78;
Lc000:
    SH(self, 38, 45);
    goto Lc78;
Lc002:
    SH(self, 38, 45);
    goto Lc78;

La80:
    SH(self, 36, 2);
    SH(self, 38, 45);
    REG304 = (u16)(REG304 & ~0x8000);
    goto Lc78;

Laa4:
    SH(self, 36, 0);
    SH(self, 38, 34);
    k = 0;
    if (LD(data_02159424, 0x38) != 0) {
        if (LH(LD(data_02159424, 0x38), 8) != -1) k = 1;
    }
    if (k == 0) goto Lc78;
    SH(self, 124, 113);
    if (LH(self, 124) == -1) goto Lc78;
    if (LH(self, 118) == 0) {
        SH(self, 118, 1);
        goto Lc78;
    }
    func_020aacd8(self);
    goto Lc78;

Lb10:
    SH(self, 36, 0);
    SH(self, 38, 35);
    goto Lc78;

Lb20:
    WD(self, 0x20, LD(self, 0x20) | 1);
    SH(self, 36, 0);
    SH(self, 38, 38);
    SH(self, 124, 110);
    if (LH(self, 124) == -1) goto Lb68;
    if (LH(self, 118) == 0) {
        SH(self, 118, 1);
        goto Lb68;
    }
    func_020aacd8(self);
Lb68:
    REG304 = (u16)(REG304 & ~0x8000);
    goto Lc78;

Lb7c:
    WD(self, 0x20, LD(self, 0x20) | 1);
    SH(self, 36, 2);
    SH(self, 38, 39);
    SH(self, 124, LH(data_0215942c, 16));
    if (LH(self, 124) == -1) goto Lbcc;
    if (LH(self, 118) == 0) {
        SH(self, 118, 1);
        goto Lbcc;
    }
    func_020aacd8(self);
Lbcc:
    REG304 = (u16)(REG304 & ~0x8000);
    goto Lc78;

Lbe0:
    WD(self, 0x20, LD(self, 0x20) | 8);
    WD(self, 0x4c, (u32)func_020ad120);
    SH(self, 36, 0);
    if (LH(data_02159458, 0) != 0) {
        SH(self, 38, 40);
        func_02097b94(7, 0x1f41, 0, 0, 1);
        goto Lc78;
    }
    SH(self, 38, 42);
    REG304 = (u16)(REG304 & ~0x8000);
    goto Lc78;

Lc4c:
    SH(self, 36, 0);
    SH(self, 38, 45);
    goto Lc78;

Lc5c:
    SH(self, 36, 0);
    SH(self, 38, 45);
    goto Lc78;

Lc6c:
    SH(self, 36, 0);
    SH(self, 38, 45);
    goto Lc78;

Lc78:
    data_02159444 = self;
    func_02006700(9, (u32)func_020ae668);
    return self;
}
