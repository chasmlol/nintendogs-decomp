#include "ctx.h"

extern s32 data_02159428[];
extern s32 data_0214f464[];
extern s32 func_02044c8c(void);
extern s32 func_01ffdb08(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern void func_02027654(s32 a, s32 *b);
extern s32 func_02009bd0(s32 *a, s32 *b);
extern void func_02039448(u8 *p);
extern void func_02027690(s32 a, s32 *b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_02026df0(u8 *p);
extern s32 func_02026d3c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern u32 func_0203e908(u8 *p, s32 a);
extern s32 func_02029504(u8 *p);
extern s32 func_02022e14(u8 *p, s32 a);
extern s32 func_020bc14c(void);
extern s32 func_0203852c(u8 *p);
extern s32 func_0203567c(u8 *p);

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

typedef struct { s32 a[3]; s32 b[2]; s32 c; s32 d; } Frm;
typedef struct { u32 w[3]; } T3;

u32 func_ov003_0217bc54(u8 *param_1, s32 param_2)
{
    Frm F;
    s32 iVar6;
    s32 iVar5;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    s32 bVar3;
    u32 bVar4;
    s32 t470;
    s32 tv;

    iVar5 = func_02044c8c();
    iVar5 = func_01ffdb08(iVar5);
    if (iVar5 == 0) goto after;
    if (param_2 == 0) goto setup;
    if (param_2 != 1) goto after;
    goto p1;
setup:
        func_02027668(iVar5, F.a);
        func_02027654(iVar5, (s32 *)(param_1 + 0x3b4));
        iVar6 = func_02009bd0(F.a, (s32 *)(param_1 + 0x2a0));
        uVar8 = *(u32 *)(*data_02159428 + 0xc);
        uVar7 = (u32)mulr((s32)uVar8, (s32)uVar8);
        if (*(s32 *)(param_1 + 0x464) == 0) goto flag0;
            func_02039448(param_1);
            func_02027654(iVar5, (s32 *)(param_1 + 0x278));
            func_02037450(param_1, 0x300);
            if (iVar6 < mulr(0x5c4, (s32)uVar7)) {
                *(s32 *)(param_1 + 0x464) = 0;
            }
        goto after;
flag0:
            func_02027690(iVar5, F.b);
            *(s32 *)(param_1 + 0x26c) = mulr(F.b[0], mulr(0x99c, (s32)uVar8));
            *(s32 *)(param_1 + 0x270) = 0;
            *(s32 *)(param_1 + 0x274) = mulr(F.c, mulr(0x99c, (s32)uVar8));
            func_0203942c(param_1);
            func_02037450(param_1, 0x392);
            if (iVar6 > mulr(0x7d9, (s32)uVar7)) {
                *(s32 *)(param_1 + 0x464) = 1;
            }
    goto after;
p1:
        func_02039448(param_1);
        func_02027654(iVar5, (s32 *)(param_1 + 0x278));
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x278);
        func_02037450(param_1, 0x300);
after:
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    uVar9 = func_020289d0(param_1, 0, 1);
    if (uVar9 != 0) {
        return uVar9;
    }
    bVar3 = func_02026df0(param_1);
    if (bVar3 != 0 || func_02026d3c(param_1) != 0) {
        iVar5 = func_020385e4(param_1);
        switch (iVar5) {
        case 0:
            func_0203e908(param_1, 0x30f);
            break;
        case 1:
            func_0203e908(param_1, 0x311);
            break;
        case 2:
            func_0203e908(param_1, 0x312);
            break;
        case 3:
            func_0203e908(param_1, 0x313);
            break;
        }
        if (*(s16 *)(param_1 + 0xf0) == 1) {
            return (u32)func_02029504(param_1);
        }
        tv = func_02022e14(param_1, 1);
        if (tv == 0) {
            return (u32)tv;
        }
        return (u32)func_02029504(param_1);
    }
    iVar5 = func_020bc14c();
    uVar7 = 0;
    if (iVar5 == -1) {
        uVar7 = (u32)func_0203852c(param_1);
        switch (uVar7) {
        case 0:
            return (u32)func_0203e908(param_1, 0x30a);
        case 1:
            return (u32)func_0203e908(param_1, 0x30c);
        case 2:
            return (u32)func_0203e908(param_1, 0x30d);
        case 3:
            return (u32)func_0203e908(param_1, 0x30e);
        }
    } else {
        t470 = *(s32 *)(param_1 + 0x470);
        if (t470 != 0) {
            return (u32)t470;
        }
        uVar8 = *(u32 *)*data_0214f464 * 0x10dcd + 1;
        *(u32 *)*data_0214f464 = uVar8;
        if ((u16)(((u32)(u16)uVar8 * 40u) >> 16) != 0) {
            return 0x10dcd;
        }
        iVar5 = *(s32 *)*data_0214f464 * 0x10dcd + 1;
        uVar7 = (u16)(((u32)iVar5 << 16) >> 30);
        *(s32 *)*data_0214f464 = iVar5;
        switch (uVar7) {
        case 0:
            return (u32)func_0203e908(param_1, 0x35b);
        case 1:
            return (u32)func_0203e908(param_1, 0x35c);
        case 2:
            return (u32)func_0203e908(param_1, 0x35d);
        default:
            return (u32)func_0203e908(param_1, 0x35a);
        }
    }
    return uVar7;
}
