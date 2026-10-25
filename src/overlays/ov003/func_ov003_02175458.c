#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

#define FXS(a, b) ((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12))
#define FLD(p, off) (*(s32 *)((u8 *)(p) + (off)))
#define ABS(v) ((v) > 0 ? (v) : -(v))

extern s32 func_020364cc(s32 p);
extern s32 func_020c1f34(s32 p);
extern void func_02044acc(s32 *p);
extern void func_020c17cc(s32 p, s32 *q);
extern s32 func_02028130(s32 p);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_0203942c(s32 p);
extern void func_02037450(s32 p, u32 q);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern u32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, u32 b);
extern s32 func_01ff8958(s32 a, s32 b);
extern s32 func_02067df0(s32 *a, s32 *b);
extern void func_0200c574(s32 p, s32 *q);
extern void func_02014198(s32 p, s32 q);
extern s32 func_ov003_02198298(s32 p);
extern void func_ov003_0219a658(s32 p);
extern void func_0202fd7c(s32 p);
extern void func_020362f8(s32 p);
extern s32 func_020365c8(s32 p, s32 q);
extern void func_0203e908(s32 p, s16 q);
extern void func_0209bee4(s32 p, s32 q, s32 r);

extern u8 data_02152cd8[];
extern u8 *data_02159444;
extern u32 *data_0214f464;
extern s32 data_ov003_0219a748[];
extern u8 data_0213b81e[];

typedef struct { s32 v[3]; } V3;
typedef struct { s32 w[2]; } P2;

s32 func_ov003_02175458(s32 *param_1, s16 param_2, s32 param_3, u32 param_4,
                        s32 param_5, s32 param_6, s32 param_7, s32 param_8, s32 param_9)
{
    s32 iVar10, iVar11, iVar12;
    u32 uVar13, uVar14;
    u8 bVar9, bVar6, bVar7;
    u8 bVar5;
    s32 local_98[4];
    s32 local_88[3];
    s32 aiStack_7c[3];
    s32 local_70[3];
    s32 *local_64[3];
    s32 local_58[3];
    s32 local_4c[3];
    s32 V0[3];
    s32 V1[3];
    s32 st;
    u32 rr;
    u32 *rs;
    u32 ns;
    s32 d1;
    s32 h;

    iVar10 = func_020364cc((s32)param_1);
    bVar6 = 0;
    bVar7 = 0;
    bVar9 = 0;
    if (iVar10 != 0) {
        if (*(s16 *)(iVar10 + 0x90) == 0 || *(s16 *)(iVar10 + 0x90) == 2) {
            bVar5 = 1;
        } else if (*(s16 *)(iVar10 + 0x94) == 0x35 && func_020c1f34(iVar10) == 0) {
            bVar5 = 1;
        } else {
            bVar5 = 0;
        }
        if (!bVar5) {
            uVar14 = *(u32 *)(data_02152cd8 + 0x5c);
            func_02044acc(aiStack_7c);
            if (*(s16 *)(iVar10 + 0x96) == 6) {
                func_020c17cc(iVar10, local_88);
            } else {
                *(V3 *)local_88 = *(V3 *)(data_02159444 + 0x9c);
            }
            iVar11 = func_02028130((s32)param_1);
            func_01ff832c(iVar11 * -3, aiStack_7c, local_88, (s32 *)((u8 *)param_1 + 0x26c));
            FLD(param_1, 0x3b4) = local_88[0];
            FLD(param_1, 0x3b8) = FXS(FLD(param_1, 0x270), 0x3000) + FXS(uVar14, 0xffff8000);
            FLD(param_1, 0x3bc) = local_88[2];
            func_0203942c((s32)param_1);
            func_02037450((s32)param_1, param_4);
            if (param_3 == 2) {
                FLD(param_1, 0x260) = FXS(FLD(param_1, 0x260), 0xf80);
                FLD(param_1, 0x264) = FXS(FLD(param_1, 0x264), 0xf80);
                FLD(param_1, 0x268) = FXS(FLD(param_1, 0x268), 0xf80);
                FLD(param_1, 0x490) = FXS(FLD(param_1, 0x490), 0xf80);
                FLD(param_1, 0x494) = FXS(FLD(param_1, 0x494), 0xf80);
                FLD(param_1, 0x498) = FXS(FLD(param_1, 0x498), 0xf80);
                FLD(param_1, 0x494) += FLD(param_1, 0x25c);
                func_02067e68((s32 *)((u8 *)param_1 + 0x390), (s32 *)((u8 *)param_1 + 0x490),
                              (s32 *)((u8 *)param_1 + 0x390));
                *(P2 *)&local_98[2] = *(P2 *)data_ov003_0219a748;
                local_64[0] = local_88;
                local_64[1] = (s32 *)((u8 *)param_1 + 0x390);
                local_64[2] = (s32 *)((u8 *)param_1 + 0x2a0);
                *(V3 *)local_58 = *(V3 *)local_64[1];
                *(V3 *)local_4c = *(V3 *)local_64[2];
                if (FLD(param_1, 0x46c) < 0x1000) {
                    FLD(param_1, 0x46c) += 0x100;
                    if (FLD(param_1, 0x46c) > 0x1000) {
                        FLD(param_1, 0x46c) = 0x1000;
                    }
                }
                FLD(param_1, 0x464) += FXS(FLD(param_1, 0x46c), FLD(param_1, 0x484) - FLD(param_1, 0x464));
                local_98[0] = FLD(param_1, 0x464);
                local_98[1] = FXS(func_02028130((s32)param_1), 0x4cbc);
                {
                    s32 lk = 1;
                    s32 *piVar16, *piVar15;
                    do {
                        piVar15 = local_64[lk - 1];
                        piVar16 = local_64[lk];
                        func_02067e34(piVar16, piVar15, local_70);
                        {
                            s32 yy = local_70[1];
                            s32 zz = local_70[2];
                            s32 xx = local_70[0];
                            iVar12 = FXS(xx, xx) + FXS(yy, yy) + FXS(zz, zz);
                        }
                        if (iVar12 != 0) {
                            uVar13 = func_0206782c(iVar12);
                            iVar12 = func_02067898(local_98[lk - 1], uVar13);
                            local_70[0] = FXS(local_70[0], iVar12);
                            local_70[1] = FXS(local_70[1], iVar12);
                            local_70[2] = FXS(local_70[2], iVar12);
                            func_02067e68(piVar15, local_70, piVar16);
                        }
                        lk = (s16)(lk + 1);
                    } while (lk < 3);
                }
                func_02067e34((s32 *)((u8 *)param_1 + 0x390), local_58, local_70);
                local_70[0] = FXS(local_70[0], local_98[2]);
                local_70[1] = FXS(local_70[1], local_98[2]);
                local_70[2] = FXS(local_70[2], local_98[2]);
                func_02067e68((s32 *)((u8 *)param_1 + 0x490), local_70, (s32 *)((u8 *)param_1 + 0x490));
                func_02067e34((s32 *)((u8 *)param_1 + 0x2a0), local_4c, local_70);
                local_70[0] = FXS(local_70[0], local_98[3]);
                local_70[1] = FXS(local_70[1], local_98[3]);
                local_70[2] = FXS(local_70[2], local_98[3]);
                func_02067e68((s32 *)((u8 *)param_1 + 0x260), local_70, (s32 *)((u8 *)param_1 + 0x260));
                {
                    s32 lim = FXS(func_02028130((s32)param_1), 0x280a);
                    if (ABS(FLD(param_1, 0x260)) + ABS(FLD(param_1, 0x268)) > lim) {
                        bVar9 = 1;
                    }
                }
            } else {
                func_02067e34(local_88, (s32 *)((u8 *)param_1 + 0x2e8), V0);
                d1 = -FXS(V0[1], V0[1]) + FXS(FLD(param_1, 0x484), FLD(param_1, 0x484));
                rr = 0;
                if (d1 > 0) {
                    rr = func_0206782c(d1);
                }
                h = FXS(V0[0], V0[0]) + FXS(V0[2], V0[2]);
                if (h > FXS(rr, rr)) {
                    uVar13 = func_0206782c(h);
                    iVar12 = func_01ff8958(uVar13 - rr, uVar13);
                    if (param_8 == 0) {
                        FLD(param_1, 0x260) += FXS(V0[0], iVar12 >> 5);
                        FLD(param_1, 0x268) += FXS(V0[2], iVar12 >> 5);
                    } else if (FLD(param_1, 0x2a4) > 0) {
                        FLD(param_1, 0x260) = FXS(V0[0], iVar12 >> 2);
                        FLD(param_1, 0x268) = FXS(V0[2], iVar12 >> 2);
                    } else {
                        FLD(param_1, 0x260) += FXS(V0[0], iVar12 >> 4);
                        FLD(param_1, 0x268) += FXS(V0[2], iVar12 >> 4);
                    }
                }
            }
            if (param_9 != 0) {
                s32 g484;
                func_02067e34(local_88, (s32 *)((u8 *)param_1 + 0x2e8), V1);
                g484 = FLD(param_1, 0x484);
                if (FXS(V1[2], V1[2]) + (FXS(V1[0], V1[0]) + FXS(V1[1], V1[1])) > FXS(g484, g484)) {
                    iVar12 = func_02067df0((s32 *)((u8 *)param_1 + 0x18c), V1);
                    if (iVar12 > 0) {
                        bVar6 = 1;
                    } else {
                        bVar7 = 1;
                    }
                }
            }
            if (*(s8 *)((u8 *)param_1 + 158) == 2) {
                *(V3 *)((u8 *)param_1 + 0x390) = *(V3 *)local_88;
                FLD(param_1, 0x394) = FLD(param_1, 0x394) << 1;
            }
            {
                u8 *pd = data_02159444;
                s32 dx = *(s32 *)(pd + 0x94);
                s32 dy = *(s32 *)(pd + 0x98);
                if (dx * dx + dy * dy < 50) {
                    FLD(param_1, 0x468) = 100;
                } else if (FLD(param_1, 0x468) > 10) {
                    FLD(param_1, 0x468) -= 10;
                }
            }
            if (param_7 != 0) {
                func_0200c574((s32)param_1, local_88);
            }
        }
    }
    func_02014198((s32)param_1, param_5);
    {
        iVar11 = func_02028130((s32)param_1);
        if (local_88[1] - FLD(param_1, 0x484) > FXS(iVar11, 0x54e2)) {
            st = 2;
        } else {
            iVar11 = func_02028130((s32)param_1);
            st = 0;
            if (local_88[1] - FLD(param_1, 0x484) > FXS(iVar11, 0x34da)) {
                st = 1;
            }
        }
    }
    FLD(param_1, 0x48c) += 1;
    if (bVar9 == 0) {
        if (FLD(param_1, 0x48c) > data_0213b81e[*(s8 *)((u8 *)param_1 + 141)] * 300) {
            bVar9 = 1;
        } else {
            bVar9 = 0;
        }
    }
    if (param_3 == 2 && FLD(param_1, 0x468) != 100) {
        func_0209bee4((s32)param_1 + 0x95c, 37, 1);
    } else {
        func_0209bee4((s32)param_1 + 0x95c, 37, 0);
    }
    if (iVar10 != 0) {
        if (*(s16 *)(iVar10 + 0x90) == 0 || *(s16 *)(iVar10 + 0x90) == 2) {
            bVar5 = 1;
        } else if (*(s16 *)(iVar10 + 0x94) == 0x35 && func_020c1f34(iVar10) == 0) {
            bVar5 = 1;
        } else {
            bVar5 = 0;
        }
        if (!bVar5) {
            goto a4c;
        }
    }
    func_0202fd7c((s32)param_1);
    func_020362f8((s32)param_1);
    return 1;
a4c:
    if (func_ov003_02198298((s32)param_1) != 0) {
        return 1;
    }
    if (*(s16 *)(iVar10 + 0x90) == 4) {
        func_ov003_0219a658((s32)param_1);
        return 1;
    }
    if (bVar9 != 0) {
        *(u8 *)((u8 *)param_1 + 0xb2) = 4;
        func_0203e908((s32)param_1, 0x3da);
        return 1;
    }
    if (iVar10 != 0 && func_020365c8((s32)param_1, iVar10) != 2) {
        func_0202fd7c((s32)param_1);
        return 1;
    }
    if (param_3 == 2 && FLD(param_1, 0x46c) == 4096 && FLD(param_1, 0x2a4) <= 0 &&
        FLD(param_1, 0x264) <= 0) {
        func_0203e908((s32)param_1, (s16)(param_2 + 2));
        goto ret0;
    }
    if (param_3 != 2 && st == 2) {
        func_0203e908((s32)param_1, (s16)(param_2 + 5));
        return 1;
    }
    if (param_3 != 2 && param_3 != 1 && st == 1) {
        func_0203e908((s32)param_1, (s16)(param_2 + 2));
        return 1;
    }
    if (param_3 != 2 && param_3 != 0 && st == 0) {
        func_0203e908((s32)param_1, param_2);
        return 1;
    }
    if (bVar6) {
        func_0203e908((s32)param_1, (s16)(param_2 + 3));
        return 1;
    }
    if (bVar7) {
        func_0203e908((s32)param_1, (s16)(param_2 + 4));
        return 1;
    }
    if (param_6 == 0) {
        goto ret0;
    }
    {
        u32 w468 = (u16)FLD(param_1, 0x468);
        rs = data_0214f464;
        ns = *rs * 0x10dcd + 1;
        *rs = ns;
        if ((u16)(((u32)w468 * (u16)ns) >> 16) != 0) {
            goto ret0;
        }
    }
    rs = data_0214f464;
    ns = *rs * 0x10dcd + 1;
    *rs = ns;
    if ((u16)(((u32)(u16)ns * 3) >> 16) != 0) {
        func_0203e908((s32)param_1, (s16)(param_2 + 1));
        return 1;
    }
    if (FXS(*(s32 *)(data_02152cd8 + 0x4c), FLD(param_1, 0x2a0) - local_88[0]) +
            FXS(*(s32 *)(data_02152cd8 + 0x64), FLD(param_1, 0x2a8) - local_88[2]) > 0) {
        func_0203e908((s32)param_1, (s16)(param_2 + 6));
        return 1;
    }
    func_0203e908((s32)param_1, (s16)(param_2 + 7));
    return 1;
ret0:
    return 0;
}
