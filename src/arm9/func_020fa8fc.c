#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off

extern u8 data_0215be48[];
extern u8 data_0214f004[];
extern u8 data_021332d4[];
extern u8 data_021332d0[];
extern u8 data_021332fc[];

extern u32 func_02108e24(u32 a);
extern void func_02109010(void);
extern void func_02109084(void);
extern u32 func_0210e938(void);
extern void func_0207dbe0(u32 a, u32 b);
extern void func_020a1a40(u32 a);
extern void func_020fae9c(s32 *a);
extern void func_020fddc0(u32 a);
extern void func_020fb96c(s32 *a);
extern u32 func_02112320(u32 a, u32 b, u32 c);
extern void func_02117a58(s32 *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j, u32 k);
extern void func_021179b0(s32 *a, u32 b, u32 c);
extern s32 func_021178a8(s32 *a);

void func_020fa8fc(s32 *param_1)
{
    u16 bVar1;
    u16 bVar2;
    u8 *pbVar10, *pbVar9;
    s32 nx;
    s32 d;
    u32 uVar5;
    u8 *gb;
    vu32 *pv;
    s32 *q;
    s32 iv;
    s32 bv;
    s32 i;
    s32 *p = param_1;

    pv = (vu32 *)p;
    pv[0] = p[1];
    switch (pv[0]) {
    case 0:
        bv = 1;
        i = 0;
        do {
            iv = i + 1;
            q = (s32 *)((u8 *)p + i * 8);
            q[4] = q[4] + 0x10000;
            if (q[4] >= 0) {
                q[4] = 0;
            } else {
                bv = 0;
            }
            i = iv;
        } while (i < 3);
        if (bv != 0) {
            p[1] = 1;
        }
        break;
    case 1:
        func_02108e24(1);
        gb = *(u8 **)data_0215be48;
        gb += 0x4000;
        if (*(s32 *)(gb + 0x8b8) == 1) {
            p[1] = 3;
            return;
        }
        if (*(s32 *)(gb + 0x860) != 0) {
            bVar1 = data_0214f004[0];
            bVar2 = data_0214f004[1];
            if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
                uVar5 = func_02112320(2, bVar1, bVar2);
                i = 0;
                pbVar10 = data_021332d4;
                pbVar9 = data_021332d0;
                do {
                    if (uVar5 == *pbVar10) {
                        func_02117a58((s32 *)((u8 *)p + 80), 2, *pbVar9, 1, (u16)i, (u16)(i + 6), 0, 0, 0, 10, 10);
                        {
                            s16 sb1 = (s16)bVar1;
                            s16 sb2 = (s16)bVar2;
                            func_021179b0((s32 *)((u8 *)p + 80), sb1, sb2);
                        }
                        *(u16 *)(p + 3) = (u16)i;
                        p[1] = 2;
                        func_02108e24(0);
                        func_020a1a40(2);
                    }
                    i = i + 1;
                    pbVar10 = pbVar10 + 1;
                    pbVar9 = pbVar9 + 1;
                } while (i < 3);
            }
        }
        break;
    case 2:
        if (func_021178a8((s32 *)((u8 *)p + 80)) != 0) {
            func_02109010();
            p[1] = 4;
        }
        break;
    case 3:
        if (*(s32 *)(*(u8 **)data_0215be48 + 0x4000 + 0x8bc) == 1) {
            p[1] = 11;
            func_02109010();
            iv = func_0210e938();
            func_0207dbe0(iv, 0x4e464948);
            func_020a1a40(59);
        }
        break;
    case 4:
        bv = 1;
        i = 0;
        do {
            if (i == *(s16 *)(p + 3)) {
                q = (s32 *)((u8 *)p + i * 8);
                q[5] = q[5] - (p + i)[10];
                d = p[0x13] - (p + i)[16];
                if (q[5] <= d) {
                    q[5] = d;
                } else {
                    bv = 0;
                }
            } else {
                q = (s32 *)((u8 *)p + i * 8);
                q[4] = q[4] - 0x10000;
                iv = *(s32 *)(data_021332fc + i * 4);
                if (q[4] <= iv) {
                    q[4] = iv;
                } else {
                    bv = 0;
                }
            }
            i++;
        } while (i < 3);
        if (bv != 0) {
            p[1] = 5;
            func_020fae9c(p);
            func_020a1a40(57);
        }
        break;
    case 5:
        bv = 1;
        {
            s32 kc = 0x6aaa;
            p[13] = p[13] - kc;
        }
        if (p[13] <= 0) {
            p[13] = 0;
        } else {
            bv = 0;
        }
        p[14] = p[14] + 0x1111;
        if (p[14] >= 0x10000) {
            p[14] = 0x10000;
        } else {
            bv = 0;
        }
        if (bv != 0) {
            p[1] = 6;
        }
        break;
    case 6:
        bv = 1;
        p[15] = p[15] + 0x2492;
        if (p[15] >= 0x10000) {
            p[15] = 0x10000;
        } else {
            bv = 0;
        }
        if (bv != 0) {
            p[1] = 7;
            func_02109084();
            p[46] = 1;
        }
        break;
    case 7:
        if (*(s32 *)(*(u8 **)data_0215be48 + 0x4000 + 0x8b8) == 1) {
            p[46] = 0;
        }
        if (p[46] != 0) {
            func_02108e24(1);
        }
        if (*(s32 *)(*(u8 **)data_0215be48 + 0x4000 + 0x8bc) == 1) {
            p[1] = 8;
            func_02109010();
            func_02108e24(0);
            func_020a1a40(58);
        }
        break;
    case 8:
        bv = 1;
        {
            s32 kc = 0x2492;
            p[15] = p[15] - kc;
        }
        if (p[15] <= 0) {
            p[15] = 0;
        } else {
            bv = 0;
        }
        if (bv != 0) {
            p[1] = 9;
        }
        break;
    case 9:
        bv = 1;
        p[13] = p[13] + 0x6aaa;
        if (p[13] >= 0x64000) {
            p[13] = 0x64000;
        } else {
            bv = 0;
        }
        {
            s32 kc = 0x1111;
            p[14] = p[14] - kc;
        }
        if (p[14] <= 0) {
            p[14] = 0;
        } else {
            bv = 0;
        }
        if (bv != 0) {
            p[1] = 10;
            func_02109084();
            func_020a1a40(56);
        }
        break;
    case 10:
        bv = 1;
        i = 0;
        do {
            if (i == *(s16 *)(p + 3)) {
                q = (s32 *)((u8 *)p + i * 8);
                q[5] = q[5] + (p + i)[10];
                if (q[5] >= 0) {
                    q[5] = 0;
                } else {
                    bv = 0;
                }
            } else {
                q = (s32 *)((u8 *)p + i * 8);
                q[4] = q[4] + 0x10000;
                if (q[4] >= 0) {
                    q[4] = 0;
                } else {
                    bv = 0;
                }
            }
            i++;
        } while (i < 3);
        if (bv != 0) {
            p[1] = 1;
        }
        break;
    case 11:
        bv = 1;
        i = 0;
        do {
            q = (s32 *)((u8 *)p + i * 8);
            q[4] = q[4] - 0x10000;
            if (q[4] <= -0x100000) {
                q[4] = -0x100000;
            } else {
                bv = 0;
            }
            i++;
        } while (i < 3);
        if (bv != 0) {
            func_020fddc0(15);
        }
        break;
    default:
        break;
    }
    func_020fb96c(p);
}
