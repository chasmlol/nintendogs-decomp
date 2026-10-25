#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_ov011_0215d324[];
extern u8 data_0214efdc[];
extern u8 data_0212eaf4[];
extern u8 data_0213c41c[];
extern u8 data_0212b14c[];
extern u8 data_ov011_0215d300[];
extern u8 data_ov011_0215d2b8[];

extern void func_0208cf68(u8 *p);
extern void func_0208cae4(u8 *p, u32 a, u32 b);
extern void func_0209b934(u8 *p);
extern void func_0209c17c(u8 *p, s32 a, u32 b);
extern void func_0209c598(u8 *p, s32 a, u32 b, s32 c);
extern void func_0209b18c(u32 a);
extern void func_01ffe154(u8 *p, s32 a, u32 b);
extern void func_0205f050(u8 *p, u32 n, u8 *s, u32 a);
extern u32 func_0208b9e8(u8 *p);
extern void func_0208f85c(u8 *p, u32 a);
extern void func_0208cc2c(u8 *p);
extern void func_0206a2dc(u8 *p);
extern void func_0208f6ac(u8 *p);
extern void func_0209c33c(u8 *p, u32 a, u32 b, u32 c);

static inline void SwapB(u32 v, vu8 *p)
{
    *p = (u8)v;
}

#define GP (*(u8 **)data_ov011_0215d324)
#define FLAGS (*(u16 *)data_0214efdc)
#define FLAGS3 (*(u16 *)(data_0214efdc + 6))

void func_ov011_0215c0e4(void)
{
    u32 nv;
    u32 uVar10;
    u8 *e;
    u32 iVar11;
    u8 *g;
    u32 b10;
    u16 *psVar5;
    u32 base74;
    u8 auStack_70[64];
    u32 uVar8;
    u32 auStack_30[3];
    u8 *S;
    u32 uVar4;
    u32 uVar1;
    s32 iVar7;
    u8 *st;

    S = *(u8 **)data_ov011_0215d324;
    uVar10 = *(u32 *)(S + 0x874);
    st = *(u8 **)(S + 4);
    uVar1 = *(u16 *)(S + 0x864);
    if (uVar10 != 0 && (u16)(FLAGS & 1) != 0) {
        if (*(s32 *)(st + 0x94) != 0) {
            func_0208cf68(st);
        } else {
            u32 e8 = *(u16 *)(S + 8);
            b10 = *(u8 *)(S + 10);
            if ((s32)b10 < (s32)*(u16 *)(data_0212eaf4 + e8 * 12 + 8) - 1) {
                nv = b10 + 1;
                SwapB(nv, S + 10);
            } else {
                *(u16 *)(S + 8) = (u16)(e8 + 1);
                if (*(u16 *)(GP + 8) > 21) {
                    *(u16 *)(GP + 8) = 0;
                }
                SwapB(0, GP + 10);
            }
            func_0208cae4(st, *(u16 *)(GP + 8), *(u8 *)(GP + 10));
            func_0209b934(GP + 0x87c);
            func_0209c17c(GP + 0x87c, 0, (u32)(GP + 8));
            iVar7 = 0;
            uVar4 = *(u16 *)(GP + 0x864);
            iVar11 = (u32)(GP + 0x87c);
            uVar10 = 0;
            do {
                uVar8 = uVar4;
                if (*(s16 *)(GP + 0x866) < 3 && iVar7 != *(s16 *)(GP + 0x866)) {
                    uVar8 = 0;
                }
                func_0209c598((u8 *)iVar11, iVar7, uVar8, uVar10);
                iVar7 = iVar7 + 1;
            } while (iVar7 < 3);
        }
    }
    if ((u16)(FLAGS & 0x2000) != 0) {
        g = GP;
        *(u32 *)(g + 0x874) = *(u32 *)(g + 0x874) ^ 1;
    }
    if ((u16)(FLAGS & 4) != 0) {
        g = GP;
        if (*(u32 *)(g + 0x874) != 0) {
            *(u32 *)(g + 0x870) = *(u32 *)(g + 0x870) ^ 1;
        }
    }
    g = GP;
    uVar4 = *(u16 *)(g + 0x86a);
    if (*(u16 *)(g + 0x86c) != uVar4) {
        func_0209b18c(uVar4);
        *(u16 *)(GP + 0x86c) = *(u16 *)(GP + 0x86a);
    }
    if (*(u32 *)(GP + 0x874) == 0) {
        g = GP;
        if ((u16)(FLAGS & 0x40) != 0) {
            *(s16 *)(g + 0x878) = *(s16 *)(g + 0x878) + 1;
            if (*(s16 *)(GP + 0x878) >= 3) {
                *(u16 *)(GP + 0x878) = 0;
            }
        }
        if ((u16)(FLAGS & 0x80) != 0) {
            *(s16 *)(GP + 0x878) = *(s16 *)(GP + 0x878) - 1;
            if (*(s16 *)(GP + 0x878) < 0) {
                *(u16 *)(GP + 0x878) = 2;
            }
        }
        if ((u16)(FLAGS & 0x10) != 0) {
            *(s16 *)(GP + 0x87a) = *(s16 *)(GP + 0x87a) + 1;
            if (*(s16 *)(GP + 0x87a) > 2) {
                *(u16 *)(GP + 0x87a) = 0;
            }
        }
        if ((u16)(FLAGS & 0x20) != 0) {
            *(s16 *)(GP + 0x87a) = *(s16 *)(GP + 0x87a) - 1;
            if (*(s16 *)(GP + 0x87a) < 0) {
                *(u16 *)(GP + 0x87a) = 2;
            }
        }
        {
            s32 pa = (s32)(s16)*(u16 *)(*(u8 **)(GP + 4) + 0x7a) * 100 + (s32)data_0213c41c + 0x16;
            s32 pb = *(s16 *)(GP + 0x878);
            s32 pc = *(s16 *)(GP + 0x87a);
            psVar5 = (u16 *)(pa + pb * 6 + pc * 2);
        }
        uVar10 = FLAGS3;
        if ((u16)(uVar10 & 1) != 0) {
            *(s16 *)psVar5 = *(s16 *)psVar5 + 1;
        } else if ((u16)(uVar10 & 2) != 0) {
            *(s16 *)psVar5 = *(s16 *)psVar5 - 1;
        }
        uVar10 = FLAGS3;
        if ((u16)(uVar10 & 0x400) != 0) {
            *(s16 *)psVar5 = *(s16 *)psVar5 + 0x100;
        } else if ((u16)(uVar10 & 0x800) != 0) {
            *(s16 *)psVar5 = *(s16 *)psVar5 - 0x100;
        }
    }
    if ((u16)(FLAGS3 & 0x100) != 0) {
        *(u16 *)(GP + 0x864) = *(u16 *)(GP + 0x864) + 1;
        if (*(u16 *)(GP + 0x864) >= 0x267) {
            *(u16 *)(GP + 0x864) = 0;
        }
    }
    if ((u16)(FLAGS3 & 0x200) != 0) {
        if (*(u16 *)(GP + 0x864) != 0) {
            *(u16 *)(GP + 0x864) = *(u16 *)(GP + 0x864) - 1;
        } else {
            *(u16 *)(GP + 0x864) = 0x266;
        }
    }
    if (*(s32 *)(st + 0x94) != 0) {
        g = GP;
        if (uVar1 != *(u16 *)(g + 0x864)) {
            e = (u8 *)((s32)*(u16 *)(g + 0x864) * 24 + (s32)data_0212b14c);
            if (*(u8 *)(e + 6) == 0) {
                func_01ffe154(*(u8 **)(GP + 4), 0, *(u16 *)(GP + 0x864));
            } else {
                u8 *m = *(u8 **)(*(u8 **)(GP + 4) + 0x94);
                base74 = *(u32 *)(m + 0x74);
                func_0205f050(auStack_70, 0x40, data_ov011_0215d300, *(u32 *)e);
                func_0208f85c(m, func_0208b9e8(auStack_70));
                {
                    u32 iVar11b = 0;
                    u32 uVar4b = *(u16 *)(GP + 0x864);
                    u32 uVar10b = 0;
                    u32 uVar8b;
                    s32 iVar7b = 0;
                    iVar11b = (u32)(GP + 0x87c);
                    do {
                        uVar8b = uVar4b;
                        if (*(s16 *)(GP + 0x866) < 3 && iVar7b != *(s16 *)(GP + 0x866)) {
                            uVar8b = 0;
                        }
                        func_0209c598((u8 *)iVar11b, iVar7b, uVar8b, uVar10b);
                        iVar7b = iVar7b + 1;
                    } while (iVar7b < 3);
                }
                SwapB(0, (u8 *)base74 + 0x14);
            }
        }
    }
    func_0208cc2c(st);
    func_0206a2dc(data_ov011_0215d2b8);
    func_0208f6ac(*(u8 **)GP);
    {
        u32 *m2 = (u32 *)*(u8 **)(st + 0x94);
        s32 k;
        u8 *q;
        if (m2 == 0) {
            return;
        }
        q = (u8 *)m2[0x1d];
        k = 0;
        do {
            auStack_30[k] = *(u32 *)(q + 0x20);
            k = k + 1;
        } while (k < 3);
        func_0209c33c(GP + 0x87c, 0, (u32)auStack_30, *(u16 *)(GP + 0x86e));
    }
}
