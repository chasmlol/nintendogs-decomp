#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_dead_assignments off

typedef struct {
    s32 bVar22;
    u32 half;
} Frame3;

typedef struct {
    u32 w[34];
} T34;

extern u8 data_0215ae10;
extern u32 data_0215aea4[];
extern u32 data_0215ae98[];
extern u32 data_02144a50;
extern s16 data_0215ae24;
extern u8 *data_0215ae00;
extern u32 data_0215ae84;
extern u32 data_0215ae80;
extern u32 data_0215b064[];
extern u32 data_0215aecc[];
extern u32 data_02144a44;
extern u32 data_0215ae60;
extern u32 data_0215ae48;
extern u32 data_02144a48;
extern u8 *data_0215ae30;
extern u8 data_0215ae34[];
extern u8 data_0215b0e4[];
extern u8 data_0215b0e8[];
extern u32 data_02144a4c;
extern u32 data_0215ae2c;
extern u16 data_0215ae28;
extern u32 data_0215ae74;

extern s32 func_020e1fd0(void);
extern s32 func_020dcf28(u8 *a, u32 b, u32 *c, u32 d, s32 e);
extern void func_020ddfa8(u32 *a, u32 b, u32 c);
extern void func_020e20b0(u32 a, u32 b);
extern void func_020e0114(u8 *a, s32 b, s32 c, s32 d, s32 e, u32 f);
extern void func_020e01a8(s32 a, s32 b, s32 c, u8 *d);
extern void func_02072fe4(u8 *a, s32 b, s32 c);
extern void func_02070b20(u8 *a, s32 b);

s32 func_020dec08(void)
{
    Frame3 F3;
    u32 iVar10;
    s32 iVar8;

    (void)&F3;
    if (data_0215ae10 == 4) {
        u32 unaff;
        u32 i;
        u32 uVar16;
        u32 kk;

        F3.bVar22 = 0;
        for (i = 0; i < 3; i++) {
            if ((data_02144a50 & (1 << i)) != 0) {
                uVar16 = ((vu32 *)data_0215ae98)[i];
                kk = 0;
                if (uVar16 != 0) {
                    do {
                        if (uVar16 & 1) {
                            unaff = 1;
                        } else {
                            unaff = 0;
                        }
                        iVar10 = ((vu32 *)data_0215aea4)[i] + kk * 24;
                        if (*(s32 *)(iVar10 + 0x98) == 1) {
                            *(u32 *)(iVar10 + 0x94) = unaff;
                        }
                        uVar16 >>= 1;
                        kk++;
                    } while (uVar16 != 0);
                }
                if (((vu32 *)data_0215ae98)[i] != 0) {
                    F3.bVar22 = 1;
                }
            }
        }
        iVar8 = func_020e1fd0();
        if (iVar8 == 0) {
            iVar8 = func_020dcf28(data_0215ae00, data_0215ae84, &data_0215ae80, 0, data_0215ae24);
            if (iVar8 == 0) {
                func_020ddfa8(data_0215b064, data_02144a50, 0);
                {
                    s32 sk;
                    T34 *ps;
                    T34 *pd;
                    u32 uVar17;

                    ps = (T34 *)data_0215b064;
                    uVar17 = data_02144a50;
                    pd = (T34 *)data_0215aecc;
                    sk = 0;
                    do {
                        if ((uVar17 & (1 << sk)) != 0) {
                            *pd = *ps;
                        }
                        sk++;
                        ps++;
                        pd++;
                    } while (sk < 3);
                    data_02144a44 = uVar17;
                }
            }
        } else if (F3.bVar22 == 1) {
            u32 uVar17;

            uVar17 = data_02144a50;
            data_0215ae60 = uVar17;
            func_020e20b0(uVar17, 0x20000000);
            data_0215ae48 = 1;
        }
    } else {
        u32 uVar16;
        u32 uVar20;
        u32 kk;
        u32 unaff;
        u32 uVar17;

        uVar16 = 0;
        F3.half = data_02144a48 >> 1;
        do {
            if ((data_02144a48 & (1 << uVar16)) != 0) {
                uVar20 = ((vu32 *)data_0215ae98)[uVar16];
                kk = 0;
                if (uVar20 != 0) {
                    do {
                        if (uVar20 & 1) {
                            unaff = 1;
                        } else {
                            unaff = 0;
                        }
                        iVar10 = ((vu32 *)data_0215aea4)[uVar16] + kk * 24;
                        if (*(s32 *)(iVar10 + 0x98) == 1) {
                            *(u32 *)(iVar10 + 0x94) = unaff;
                        }
                        uVar20 >>= 1;
                        kk++;
                    } while (uVar20 != 0);
                }
            }
            uVar16++;
        } while (uVar16 < 3);
        iVar8 = func_020e1fd0();
        if (iVar8 == 0) {
            iVar8 = func_020dcf28(data_0215ae00, data_0215ae84, &data_0215ae80, 0, data_0215ae24);
            func_020e0114(data_0215ae30, 1, 0, 8000, 0, data_0215ae80);
            func_020e01a8(0x39, 1, 0x3c, data_0215ae30);
            func_02072fe4(data_0215ae34, 0x13, 0x7c);
            func_02070b20(data_0215ae34, 0x40);
            if (iVar8 == 0) {
                func_020ddfa8(data_0215b064, data_02144a48, 0);
            }
            iVar10 = F3.half * 0x88;
            if (*(s32 *)(data_0215b0e4 + iVar10) != 0) {
                data_02144a4c = *(u32 *)((u8 *)data_0215b064 + iVar10);
            } else {
                data_02144a4c = *(u32 *)(data_0215b0e8 + iVar10);
            }
        }
        uVar17 = data_02144a48;
        data_0215ae60 = uVar17;
        func_020e20b0(uVar17, 0x10000000);
        data_0215ae48 = 1;
    }
    iVar8 = func_020e1fd0();
    if (iVar8 == 0) {
        data_0215ae2c = data_0215ae84;
        data_0215ae10 = 2;
        data_0215ae28 = 0;
        data_0215ae74 = 0;
    }
    return 1;
}
