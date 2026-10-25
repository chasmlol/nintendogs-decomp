#include "ctx.h"

#define U16AT(p, off) (*(u16 *)((u8 *)(p) + off))
#define S16AT(p, off) (*(s16 *)((u8 *)(p) + off))
#define W32AT(p, off) (*(u32 *)((u8 *)(p) + off))
#define S16IDX(p, off, i) (((s16 *)((u8 *)(p) + off))[i])

extern u32 data_0214204c[];
extern u32 data_0215915c[];
extern u8 data_02159074[];
extern u8 data_0212fdc8[];
extern u8 data_0212fdc9[];
extern u8 data_02159198[];
extern u8 data_02159148[];
extern u8 data_02141f98[];

typedef struct { u32 w[3]; } T3;

extern void func_0209dc80(u32 *p);
extern void func_02070c18(u32 *p, u32 v);
extern u32 func_0209d4b0(u32 *p, s32 a);
extern u32 func_0209b774(u32 *p);
extern void func_02072fe4(u32 *p, s32 a, s32 b);
extern void func_02070800(u32 *p, s32 a, s32 b);
extern void func_0209b850(u32 *p, s32 a, s32 b);
extern s32 func_0209dd80(u32 a, s32 b, s32 c);
extern void func_0209ea80(s32 a, s32 b);
extern void func_0209e9f8(s32 a);
extern u32 func_0209b73c(u32 *p);
extern void func_02070b20(u32 *p, u32 v);
extern void func_020709c8(u32 *p, u32 a, u32 b);
extern void func_020709f8(u32 *p, u32 a, u32 b);
extern u32 func_0205e270(s32 a, s32 b);
extern void func_020a2930(void);
extern void func_0209eb68(u32 *p);
extern void func_020a31c4(void);
extern void func_020e1db0(void);

void func_0209c83c(u32 *param_1, u32 *param_2)
{
    u32 uVar15;
    u32 unaff_r7;
    u32 uVar1;
    s16 uVar14;
    u32 *piVar13;
    u32 uVar4;
    u32 uVar6;
    u32 uVar7;
    u32 uVar9;
    u32 uVar10;
    u32 bVar3;
    u32 *entry;
    s32 iVar12;
    s32 iVar12b;
    s32 iVar8;
    u32 uVar5;

    entry = (u32 *)data_0214204c[U16AT(param_1, 36)];
    if (param_2 != 0) {
        *(T3 *)data_0215915c = *(T3 *)param_2;
    }
    if (entry != 0 && *(u8 *)((u8 *)entry + 1) != 0xff) {
        iVar12 = (u32)*(u16 *)(data_02159074 + 0x18) * 6;
        uVar9 = data_0212fdc8[iVar12];
        uVar10 = data_0212fdc9[iVar12];
        bVar3 = 0;
        func_0209dc80(param_1);
        uVar14 = 0;
        if (*(s32 *)param_1 > 0) {
            piVar13 = param_1 + 6;
            uVar5 = uVar10 - uVar9;
            do {
                uVar6 = (u32)S16IDX(param_1, 12, uVar14);
                uVar15 = (u32)S16IDX(param_1, 18, uVar14);
                uVar7 = 1u << uVar14;
                uVar1 = (u16)uVar7;
                if (U16AT(param_1, 4) != 0 && (U16AT(param_1, 4) & uVar1) != 0 &&
                    (U16AT(param_1, 6) & uVar1) == 0) {
                    func_02070c18(piVar13, 0);
                    U16AT(param_1, 4) = U16AT(param_1, 4) & ~uVar1;
                    U16AT(param_1, 38) = U16AT(param_1, 38) & ~uVar1;
                    if (U16AT(param_1, 36) >= 0x40 && U16AT(param_1, 36) <= 0x42) {
                        if (uVar15 == 4) {
                            iVar12 = W32AT(param_1, uVar14 * 4 + 40);
                            uVar7 = func_0209d4b0(param_1, 6);
                            if (uVar7 != 0xffffffff) {
                                W32AT(param_1, uVar7 * 4 + 40) = iVar12;
                                U16AT(param_1, 38) = U16AT(param_1, 38) | (1u << uVar7);
                            } else {
                                uVar1 = (u16)(1u << uVar14);
                            }
                        } else if (uVar15 == 5) {
                            iVar12b = W32AT(param_1, uVar14 * 4 + 40);
                            uVar7 = func_0209d4b0(param_1, 7);
                            if (uVar7 != 0xffffffff) {
                                W32AT(param_1, uVar7 * 4 + 40) = iVar12b;
                                U16AT(param_1, 38) = U16AT(param_1, 38) | (1u << uVar7);
                            }
                        }
                        if (*(s16 *)(data_02159198 + 0x22) != 0xf0) {
                            func_0209ea80(0x50, 0x3c);
                            func_0209e9f8(0xf0);
                        }
                    }
                }
                if ((U16AT(param_1, 8) & uVar1) != 0) {
                    if (!bVar3) {
                        if (param_2 != 0) {
                            unaff_r7 = func_0209b774(param_2);
                        } else {
                            unaff_r7 = 0;
                        }
                        bVar3 = 1;
                    }
                    if (unaff_r7 < uVar10) {
                        if (uVar6 == 0x1f) {
                            func_02072fe4(piVar13, (s32)*(s16 *)(data_02159148 + 2) + 0x1f, 0);
                            func_02070800(piVar13, 4, uVar15);
                        } else {
                            if (uVar15 == 0 || uVar15 == 3) {
                                func_0209b850(param_1, S16AT(param_1, 12), 4);
                            }
                            func_02072fe4(piVar13, uVar6, uVar15);
                        }
                        if ((U16AT(param_1, 38) & uVar1) != 0) {
                            iVar12 = func_0209dd80(U16AT(param_1, 36), S16IDX(param_1, 18, uVar14), *(s32 *)((int)param_1 + uVar14 * 4 + 40));
                            W32AT(param_1, uVar14 * 4 + 64) = iVar12;
                            iVar12 = (s32)data_0214204c[U16AT(param_1, 36)] + 8 + S16IDX(param_1, 18, uVar14) * 8;
                            iVar8 = *(s16 *)(iVar12 + 4) + ((s32)W32AT(param_1, uVar14 * 4 + 40) >> *(s8 *)(iVar12 + 1));
                            if (iVar8 > 0x7fff) {
                                iVar8 = 0x7fff;
                            } else if (iVar8 < -0x8000) {
                                iVar8 = -0x8000;
                            }
                            *(u32 *)((u8 *)(param_1 + uVar14) + 52) = iVar8;
                        }
                    }
                    U16AT(param_1, 8) ^= uVar1;
                }
                if (*piVar13 != 0) {
                    if (!bVar3) {
                        if (param_2 != 0) {
                            unaff_r7 = func_0209b774(param_2);
                        } else {
                            unaff_r7 = 0;
                        }
                        bVar3 = 1;
                    }
                    if (unaff_r7 <= uVar9) {
                        if ((U16AT(param_1, 38) & uVar1) != 0) {
                            if (U16AT(param_1, 4) != 0 && (U16AT(param_1, 4) & uVar1) != 0 &&
                                (U16AT(param_1, 6) & uVar1) != 0) {
                                uVar4 = func_0209dd80(U16AT(param_1, 36), S16IDX(param_1, 18, uVar14), W32AT(param_1, uVar14 * 4 + 40));
                            } else {
                                uVar4 = W32AT(param_1, uVar14 * 4 + 64);
                            }
                        } else {
                            uVar4 = 0x7f;
                        }
                    } else if (unaff_r7 < uVar10) {
                        if ((U16AT(param_1, 38) & uVar1) != 0) {
                            if (U16AT(param_1, 4) != 0 && (U16AT(param_1, 4) & uVar1) != 0 &&
                                (U16AT(param_1, 6) & uVar1) != 0) {
                                iVar12 = func_0209dd80(U16AT(param_1, 36), S16IDX(param_1, 18, uVar14), W32AT(param_1, uVar14 * 4 + 40));
                            } else {
                                iVar12 = W32AT(param_1, uVar14 * 4 + 64);
                            }
                            uVar4 = func_0205e270(iVar12 * (s32)(uVar10 - unaff_r7), uVar5);
                        } else {
                            uVar4 = func_0205e270((s32)((uVar10 - unaff_r7) * 0x7f), uVar5);
                        }
                    } else {
                        uVar4 = 0;
                        func_02070c18(piVar13, uVar4);
                        if ((U16AT(param_1, 4) & uVar1) != 0) {
                            U16AT(param_1, 4) ^= uVar1;
                        }
                    }
                    func_02070b20(piVar13, uVar4);
                    if (param_2 != 0) {
                        iVar12 = func_0209b73c(param_2);
                        func_020709c8(piVar13, *(u16 *)data_02141f98, iVar12);
                    }
                    if ((U16AT(param_1, 38) & uVar1) != 0) {
                        if (U16AT(param_1, 4) != 0 && (U16AT(param_1, 4) & uVar1) != 0 &&
                            (U16AT(param_1, 6) & uVar1) != 0) {
                            iVar12 = (s32)data_0214204c[U16AT(param_1, 36)] + 8 + S16IDX(param_1, 18, uVar14) * 8;
                            iVar8 = *(s16 *)(iVar12 + 4) + ((s32)W32AT(param_1, uVar14 * 4 + 40) >> *(s8 *)(iVar12 + 1));
                            if (iVar8 > 0x7fff) {
                                iVar8 = 0x7fff;
                            } else if (iVar8 < -0x8000) {
                                iVar8 = -0x8000;
                            }
                        } else {
                            iVar8 = W32AT(param_1, uVar14 * 4 + 52);
                        }
                        func_020709f8(piVar13, *(u16 *)data_02141f98, iVar8);
                    }
                }
                if ((U16AT(param_1, 10) & uVar1) != 0 && *piVar13 == 0) {
                    U16AT(param_1, 10) ^= uVar1;
                }
                piVar13 = piVar13 + 1;
                uVar14 = (s16)(uVar14 + 1);
            } while (uVar14 < *(s32 *)param_1);
        }
        U16AT(param_1, 6) = 0;
    }
    if (U16AT(param_1, 36) == 0x4f) {
        func_020a2930();
    }
    func_0209eb68(param_2);
    func_020a31c4();
    if (*(s32 *)(data_02159148 + 0x10) == 0) {
        return;
    }
    func_020e1db0();
}
