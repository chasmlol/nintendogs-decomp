#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_common_subs off

extern u16 data_02133070[];
extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern s32 data_02133078[];



extern u32 func_02112978(s32 a, u32 b, s32 c, s32 d);
extern void func_02108e24(s32 a);
extern u32 func_020a1a40(u32 a);
extern u32 func_02003c10(u32 a);
extern s32 func_021178a8(u8 *p);
extern u32 func_02112320(u32 a, u32 b, u32 c);
extern u32 func_02109010(void);
extern u32 func_02107c24(void);
extern u32 func_020fddc0(u32 a);
extern void func_02117a58(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
extern void func_021179b0(u8 *p, s16 a, s16 b);

void func_020f1f58(u8 *param_1)
{
    u32 uVar9;
    u32 *puVar11;

    puVar11 = (u32 *)(param_1 + 0x1c90);
    uVar9 = 0x1c90;
    switch ((s8)*param_1) {
    case 0: {
        s32 i0;
        BOOL ok0;
        s32 a0;
        s32 b0;
        ok0 = TRUE;
        i0 = 0;
        do {
            *(s32 *)(param_1 + i0 * 8 + 0xfc) = *(s32 *)(param_1 + i0 * 8 + 0xfc) + *(s32 *)(param_1 + i0 * 8 + 0x11c);
            *(s32 *)(param_1 + i0 * 8 + 0x100) = *(s32 *)(param_1 + i0 * 8 + 0x100) + *(s32 *)(param_1 + i0 * 8 + 0x120);
            a0 = *(s32 *)(param_1 + i0 * 8 + 0xfc);
            if (a0 >= 0) {
                *(s32 *)(param_1 + i0 * 8 + 0xfc) = 0;
            } else {
                ok0 = FALSE;
            }
            b0 = *(s32 *)(param_1 + i0 * 8 + 0x100);
            if (b0 >= 0) {
                *(s32 *)(param_1 + i0 * 8 + 0x100) = 0;
            } else {
                ok0 = FALSE;
            }
            uVar9 = func_02112978(2, data_02133070[i0], (s16)*(s32 *)(param_1 + i0 * 8 + 0xfc),
                                  (s16)*(s32 *)(param_1 + i0 * 8 + 0x100));
            i0 = i0 + 1;
        } while (i0 < 4);
        if (ok0) {
            *(u8 *)(param_1) = (1);
        }
        return;
    }
    case 1: {
        s32 bVar2;
        s32 sVar5;
        s32 iVar10;
        BOOL bVar3;
        u8 *Q;
        s32 tn;
        BOOL bVar4;
        s32 zz;
        func_02108e24(1);
        if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
            { *(u8 *)(param_1) = (3); return; }
        }
        uVar9 = *(s32 *)(data_0215be48 + 0x4860);
        if (uVar9 == 0) {
            return;
        }
        bVar3 = data_0214f004[1];
        bVar2 = data_0214f004[0];
        uVar9 = func_02112320(2, bVar2, bVar3);
        if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
            return;
        }
        bVar4 = TRUE;
        switch (uVar9) {
        case 0:
            uVar9 = 0;
            *(u32 *)(param_1 + 8) = 0;
            break;
        case 1:
            *(u32 *)(param_1 + 8) = 1;
            break;
        case 2:
            uVar9 = 2;
            *(u32 *)(param_1 + 8) = 2;
            break;
        case 3:
            uVar9 = 3;
            *(u32 *)(param_1 + 8) = 3;
            break;
        default:
            bVar4 = FALSE;
        }
        if (!bVar4) {
            return;
        }
        iVar10 = *(s32 *)(param_1 + 8);
        iVar10 = (s8)iVar10;
        sVar5 = iVar10 * 2;
        Q = (u8 *)(param_1 + 12) + iVar10 * 60;
        zz = 0;
        tn = 10;
        func_02117a58(Q, 2, *(u16 *)((u8 *)data_02133070 + sVar5), 1, (u16)(sVar5 + 1), (u16)(sVar5 + 2), zz, zz, zz, tn, tn);
        func_021179b0(Q, (s16)bVar2, (s16)bVar3);
        *(u8 *)(param_1) = (2);
        func_02108e24(0);
        uVar9 = func_020a1a40(0x14);
        return;
    }
    case 2: {
        s32 j2;
        uVar9 = func_021178a8((u8 *)(param_1 + 0xc) + *(s32 *)(param_1 + 8) * 0x3c);
        if (uVar9 == 0) {
            return;
        }
        j2 = 0;
        do {
            if (j2 == *(s32 *)(param_1 + 8)) {
                *(s32 *)(param_1 + j2 * 8 + 0x11c) = 0;
                *(s32 *)(param_1 + j2 * 8 + 0x120) = -data_02133078[j2];
            } else {
                *(s32 *)(param_1 + j2 * 8 + 0x11c) = -16;
                *(s32 *)(param_1 + j2 * 8 + 0x120) = 0;
            }
            j2 = j2 + 1;
        } while (j2 < 4);
        *(u8 *)(param_1) = (4);
        uVar9 = func_02109010();
        return;
    }
    case 3:
        if (*(u32 *)(data_0215be48 + 0x48bc) != 1) {
            return;
        }
        *puVar11 = 0xffffffff;
        func_020a1a40(0x2c);
        uVar9 = func_02003c10(0x14);
        return;
    case 4: {
        BOOL ok4;
        s32 i4;
        ok4 = TRUE;
        i4 = 0;
        do {
            *(s32 *)(param_1 + i4 * 8 + 0xfc) = *(s32 *)(param_1 + i4 * 8 + 0xfc) + *(s32 *)(param_1 + i4 * 8 + 0x11c);
            *(s32 *)(param_1 + i4 * 8 + 0x100) = *(s32 *)(param_1 + i4 * 8 + 0x100) + *(s32 *)(param_1 + i4 * 8 + 0x120);
            if (i4 != *(s32 *)(param_1 + 8)) {
                if (*(s32 *)(param_1 + i4 * 8 + 0xfc) <= -256) {
                    *(s32 *)(param_1 + i4 * 8 + 0xfc) = -256;
                } else {
                    ok4 = FALSE;
                }
            } else {
                s32 w;
                w = *(s32 *)(param_1 + 0x14c) - *(s32 *)(param_1 + i4 * 4 + 0x13c);
                if (*(s32 *)(param_1 + i4 * 8 + 0x100) <= w) {
                    *(s32 *)(param_1 + i4 * 8 + 0x100) = w;
                } else {
                    ok4 = FALSE;
                }
            }
            uVar9 = func_02112978(2, data_02133070[i4], (s16)*(s32 *)(param_1 + i4 * 8 + 0xfc),
                                  (s16)*(s32 *)(param_1 + i4 * 8 + 0x100));
            i4 = i4 + 1;
        } while (i4 < 4);
        if (!ok4) {
            return;
        }
        *puVar11 = *(u32 *)(param_1 + 8);
        uVar9 = *puVar11;
        switch (uVar9) {
        case 0:
            func_020fddc0(0x11); return;
        case 1:
            func_02107c24(); return;
        case 2:
            func_020fddc0(0x15); return;
        case 3:
            uVar9 = func_020fddc0(0x10);
        default:
            return;
        }
    }
    default:
        return;
    }
}
