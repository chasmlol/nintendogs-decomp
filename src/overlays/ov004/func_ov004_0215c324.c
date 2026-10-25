#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;
extern u8 *data_02159458;
extern s8 data_ov004_0216fd24[];
extern void func_ov004_02160b0c(void);
extern s32 func_01ffdb08(s32 a);
extern u8 *func_020280e4(s32 a, s32 b);
extern s32 func_02028100(s32 a);
extern void func_0207c910(s32 a, u32 b, u8 *c, s32 d);
extern void func_02028184(s32 a);
extern void func_020f3b54(void);


void func_ov004_0215c324(s32 param_1)
{
    u8 bVar1;
    u8 bVar2;
    s32 iVar11;
    s32 lim;
    u32 uVar10;
    u32 uVar9;
    s32 iVar5;
    s32 iVar8;
    u8 *base;
    u8 *X;
    s32 iVar6;
    s32 iVar12;
    u8 *p6;
    s32 cVar4;
    u8 *p8;
    u32 h;
    s32 off;

    if (param_1 == 0) {
        goto nullc;
    }
    X = *(u8 **)(data_ov004_02170320 + 0x36c4);
    base = (u8 *)((u32)X + *(u32 *)(X + *(s8 *)(X + 0x22c4) * 4 + 0x22a8) * 2);
    bVar1 = base[0xc];
    uVar10 = bVar1;
    bVar2 = base[0xd];
    uVar9 = bVar2;
    if (uVar10 < 0x20) {
        if (uVar9 < 0x20) {
            off = (uVar10 + uVar9 * 0x20) * 2;
        } else {
            off = (uVar10 + (uVar9 - 0x20) * 0x20) * 2 + 0x1000;
        }
    } else if (uVar9 < 0x20) {
        off = ((uVar10 - 0x20) + uVar9 * 0x20) * 2 + 0x800;
    } else {
        off = ((uVar10 - 0x20) + (uVar9 - 0x20) * 0x20) * 2 + 0x1800;
    }
    iVar5 = func_01ffdb08(*(s16 *)(data_02159458 + 2));
    iVar8 = -1;
    iVar11 = 0;
    lim = 0x40;
    do {
        p6 = func_020280e4(iVar5, (s16)iVar11);
        if (p6[1] == uVar10 && p6[2] == uVar9) {
            iVar8 = iVar11;
            iVar11 = lim;
        }
        iVar11 = iVar11 + 1;
    } while (iVar11 < 0x40);
    if (iVar8 == -1) {
        iVar11 = 0;
        lim = 0x40;
        do {
            p6 = func_020280e4(iVar5, (s16)iVar11);
            if (p6[3] == 0) {
                iVar8 = iVar11;
                iVar11 = lim;
            }
            iVar11 = iVar11 + 1;
        } while (iVar11 < 0x40);
    }
    p8 = func_020280e4(iVar5, (s16)iVar8);
    cVar4 = func_02028100(iVar5);
    if (cVar4 == 0) {
        p8[3] = 6;
    } else {
        p8[3] = 4;
    }
    cVar4 = data_ov004_0216fd24[p8[3]];
    p8[1] = bVar1;
    p8[2] = bVar2;
    h = off >> 1;
    *(u16 *)(data_ov004_02170320 + h * 2 + 0x1394) = *(u16 *)(data_ov004_02170320 + cVar4 * 2 + 0x1384);
    func_0207c910(0x1b, off, data_ov004_02170320 + 0x1394 + h * 2, 2);
    func_02028184(iVar5);
    X = *(u8 **)(data_ov004_02170320 + 0x36c4);
    X = X + 0x2000;
    X[0x2a5] = X[0x2a5] + 1;
    goto join;
nullc:
    func_ov004_02160b0c();
join:
    X = *(u8 **)(data_ov004_02170320 + 0x36c4);
    base = X + 0x2000;
    *(s8 *)(base + 0x2c4) = -1;
    X = *(u8 **)(data_ov004_02170320 + 0x36c4);
    base = X + 0x2000;
    base[0x315] = 0;
    func_020f3b54();
}
