#include "ctx.h"

extern u8 data_0214efdc[];
extern u8 *data_02157cc4;
extern u8 data_0214f004[];
extern u8 *data_02159064;
extern u8 *data_0215942c;
extern u8 *data_0214f130;
extern u8 *data_0214f464;
extern u8 *data_02159068;
extern u8 *data_0214e778;

extern s32 func_020deb7c(void);
extern void func_0206fdf0(void);
extern u32 func_0207ee60(void);
extern void func_0206555c(u32 a);
extern void func_0206553c(u32 a);
extern void func_02088e48(void);
extern void func_02080b98(s32 a);
extern void func_020a1a40(s32 a);
extern s32 func_0209ac9c(s32 a);
extern void func_02092748(u8 *a, u8 *b, u8 *c);
extern void func_02043444(void);
extern s32 func_0209639c(void);
extern s32 func_02003a10(void);
extern void func_020dfc14(void);
extern void func_02099fac(void);
extern s32 func_020d6f50(void);
extern void func_0200246c(s32 a, s32 b, s32 c);
extern void func_0209a310(void);
extern void func_02099f98(void);
extern u32 func_020dfbf0(void);
extern void func_0204323c(void);
extern void func_0209ac44(void);


static inline u32 ModeV(void)
{
    return data_0215942c != NULL ? *(u16 *)data_0215942c : 0xfff;
}

static inline s32 Cond(void)
{
    u8 *SS = data_02159064;
    s32 lim = (ModeV() == 0) ? 180 : 60;
    if (*(s16 *)(SS + 6) < lim) {
        return 0;
    }
    if (func_0209639c() != 0) {
        return 0;
    }
    if (data_0214e778 == NULL) {
        return 0;
    }
    if (func_02003a10() == 0) {
        return 0;
    }
    return 1;
}

static inline s32 Sel(void)
{
    if (func_020d6f50() == 0) {
        return 2;
    }
    if (data_02159068 != NULL) {
        return 2;
    }
    return 1;
}

void func_02099ffc(void)
{
    u32 uVar6;
    u32 uVar5;
    s32 iVar7;
    s32 iVar4;
    u8 *P;
    s32 *pp;
    u8 *S;
    s32 bVar8;
    s32 bVar2;

    uVar6 = *(u16 *)(data_0214efdc + 2);
    P = data_02157cc4;
    pp = *(s32 **)(P + 0xc);
    if ((u16)(uVar6 & 0xcf3) != 0 || (*(u16 *)(data_0214f004 + 2) & 1) != 0 || *(s32 *)(P + 0x10) != 0 ||
        *pp != 0 || func_020deb7c() != 0) {
        *(s32 *)(data_02159064 + 0xc) = 0;
    } else {
        *(s32 *)(data_02159064 + 0xc) = *(s32 *)(data_02159064 + 0xc) + 1;
    }
    if (*(s32 *)(data_02159064 + 0xc) < 0x1c20) {
        goto Lcc;
    }
    func_0206fdf0();
    uVar5 = func_0207ee60();
    func_0206555c((u16)uVar5);
    func_0206553c((u16)uVar5);
    func_02088e48();
    func_02080b98(0);
Lcc:
    S = data_02159064;
    if (*(s16 *)(S + 4) == 0) {
        goto L0;
    }
    if (*(s16 *)(S + 4) == 1) {
        goto L1;
    }
    return;
L0:
    {
        if (((s32)(*(u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
            return;
        }
        *(s16 *)(S + 4) = 1;
        *(s16 *)(data_02159064 + 6) = 0;
        func_020a1a40(0x7f);
        iVar7 = (ModeV() == 0) ? 180 : 60;
        func_0209ac9c(iVar7);
        func_02092748(data_02159064 + 0x10, data_0214f130 + 0x1c, data_0214f130 + 0x2c);
        if (data_0214f464 == NULL) {
            return;
        }
        func_02043444();
        return;
    }
L1:
    if (*(s16 *)(S + 6) < 0x1770) {
        *(s16 *)(S + 6) = *(s16 *)(S + 6) + 1;
    }
    bVar8 = 0;
    if (((s32)(*(u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        bVar8 = 1;
    } else {
        bVar2 = Cond();
        if (bVar2) {
            func_020dfc14();
            func_02099fac();
            iVar4 = Sel();
            switch (iVar4) {
            case 1:
                func_0200246c(0x1c, 0, 0);
                break;
            case 2:
                func_0209a310();
                break;
            }
            func_02099f98();
            func_020dfbf0();
            bVar8 = 1;
        }
    }
    if (!bVar8) {
        return;
    }
    S = data_02159064;
    *(s16 *)(S + 4) = 0;
    *(s16 *)(data_02159064 + 6) = 0;
    func_020a1a40(0x80);
    if (data_0214f464 != NULL) {
        func_0204323c();
    }
    func_0209ac44();
}
