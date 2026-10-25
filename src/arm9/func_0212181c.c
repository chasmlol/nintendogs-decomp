#pragma avoid_byte strb
#include "ctx.h"

typedef struct Obj {
    void (*cb)(s32, s32);
    s32 f04;
    s32 f08;
    s32 f0c;
    s32 f10;
    s32 f14;
    u16 tab[16];
    s32 f38;
    s32 f3c;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4c;
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5c;
} Obj;

typedef struct Ent {
    s16 h0;
    s16 h2;
    u8 b4;
    u8 b5;
} Ent;

extern u8 data_0214f004[];
extern u8 *data_0215be48;

extern s32 func_02112bc0(s32 a, u16 b);
extern s32 func_02112a30(s32 a, u16 b);
extern Ent *func_02085ddc(s32 a, u16 b);
extern void func_02112a50(s32 a, u16 b, s32 c, s32 d);
extern u64 func_021226d0(Obj *p, s32 v);
extern void func_02122768(Obj *p);
extern s32 func_02112bf0(s32 a, u16 b);
extern void func_021129b4(s32 a, u16 b, s32 c, s32 d);
extern void func_02112798(s32 a, u16 b, s32 c);

void func_0212181c(Obj *p)
{
    u16 uVar14;
    u16 uVar8;
    s32 local_34;
    u8 bVar2;
    s32 iVar6;
    s32 sum;
    s32 local_2c;

    uVar14 = (u16)(p->f04 + 7);
    uVar8 = (u16)(p->f04 + 8);
    bVar2 = data_0214f004[0];
    local_34 = data_0214f004[1];
    iVar6 = func_02112bc0(2, uVar14);
    sum = iVar6 + func_02112a30(2, uVar14);

    if (*(s32 *)(data_0215be48 + 0x4860) != 0 && (*(u16 *)(data_0214f004 + 2) & 1) != 0) {
        Ent *ps = func_02085ddc(*(s32 *)(data_0215be48 + 0x2318), (u16)(p->f08 + 2));
        s32 sh0;
        s32 h5;
        s32 b5;
        s32 h4;
        s32 b4;
        s32 b3;
        h4 = (ps->b4 + 1) / 2;
        sh0 = ((s32)ps->h0 << 20) >> 20;
        b5 = 1;
        h5 = (ps->b5 + 1) / 2;
        b4 = 1;
        b3 = 1;
        if (bVar2 >= sh0 - h4 - 30 && bVar2 <= sh0 + h4 + 30) {
            b3 = 0;
        }
        if (!b3 && local_34 >= ((((s32)ps->h2 << 20) >> 20) - h5 - 30)) {
            b4 = 0;
        }
        if (!b4 && local_34 <= h5 + (((s32)ps->h2 << 20) >> 20) + 30) {
            b5 = 0;
        }
        if (!b5) {
            s32 d = local_34 - sum;
            s32 d10;
            s32 sV;
            s32 a48;
            s32 a4c;
            if (d <= 0) {
                d = -d;
            }
            if (d <= 1) {
                local_34 = sum;
            }
            if (local_34 > p->f10) {
                local_34 = p->f10;
            } else if (local_34 < p->f0c) {
                local_34 = p->f0c;
            }
            sV = local_34 - iVar6;
            func_02112a50(2, uVar14, 0, sV);
            func_02112a50(2, uVar8, 0, sV);
            p->f4c = (u32)func_021226d0(p, local_34);

            a48 = p->f48;
            a4c = p->f4c;
            if (a4c > a48) {
                do {
                    p->f48 = p->f48 + 1;
                    func_02122768(p);
                    a48 = p->f48;
                    a4c = p->f4c;
                } while (a4c > a48);
            }
            if (a4c < a48) {
                local_2c = 0;
                do {
                    s32 i9;
                    p->f48 = p->f48 - 1;
                    i9 = local_2c;
                    if (0 < p->f14) {
                        do {
                            u16 uVar15 = p->tab[i9];
                            s32 iVar9 = p->f3c;
                            s32 iVar12 = func_02112bc0(2, uVar15);
                            s32 i7 = local_2c;
                            u32 uVar14b;
                            if (0 < iVar9 - 1) {
                                uVar14b = uVar15;
                                do {
                                    s32 iVar10 = func_02112bf0(2, uVar14b);
                                    s32 iVar11 = func_02112bc0(2, (u16)(uVar14b + 1));
                                    func_021129b4(2, uVar14b, iVar10, iVar11);
                                    uVar14b = uVar14b + 1;
                                    i7 = i7 + 1;
                                } while (i7 < iVar9 - 1);
                            }
                            {
                                u32 uVar14c = (uVar15 + iVar9) - 1;
                                s32 iVar7c = func_02112bf0(2, uVar14c);
                                func_021129b4(2, uVar14c, iVar7c, iVar12);
                            }
                            i9 = i9 + 1;
                        } while (i9 < p->f14);
                    }
                    p->f50 = p->f50 - 1;
                    if (p->f50 < 0) {
                        p->f50 = p->f3c - 1;
                    }
                    if (p->f48 - 1 >= 0 && p->f48 - p->f3c < p->f4c) {
                        p->cb(p->f50, p->f48 - 1);
                    }
                    a48 = p->f48;
                } while (p->f4c < a48);
            }

            {
                s32 q3;
                s32 q2;
                s32 f40;
                s32 uVar15;
                s32 iVar9;
                s32 iVar12;
                iVar12 = p->f0c;
                d10 = p->f10 - iVar12;
                uVar15 = (p->f44 - p->f3c) + 2;
                iVar9 = iVar12 + (d10 * p->f48) / uVar15;
                q2 = (d10 * (p->f48 + 1)) / uVar15;
                f40 = p->f40;
                q3 = (f40 * (local_34 - iVar9)) / ((iVar12 + q2) - iVar9);
                p->f5c = (-q3) % f40;
            }
            {
                s32 i8 = 0;
                if (0 < p->f3c) {
                    do {
                        s32 j7 = 0;
                        if (0 < p->f14) {
                            do {
                                func_02112a50(2, (u16)(i8 + p->tab[j7]), 0, p->f5c);
                                j7 = j7 + 1;
                            } while (j7 < p->f14);
                        }
                        i8 = i8 + 1;
                    } while (i8 < p->f3c);
                }
            }
            if (local_34 == p->f10) {
                func_02112798(2, (u16)p->f04, 0);
                func_02112798(2, (u16)(p->f04 + 2), 1);
            } else {
                func_02112798(2, (u16)p->f04, 1);
                func_02112798(2, (u16)(p->f04 + 2), 0);
            }
            if (local_34 == p->f0c) {
                func_02112798(2, (u16)(p->f04 + 3), 0);
                func_02112798(2, (u16)(p->f04 + 5), 1);
                return;
            }
            func_02112798(2, (u16)(p->f04 + 3), 1);
            func_02112798(2, (u16)(p->f04 + 5), 0);
            return;
        }
    }

    {
        s32 a = p->f5c;
        s32 f40b = p->f40;
        if (a <= 0) {
            a = -a;
        }
        if (a > f40b / 2 && p->f4c < (p->f44 - p->f3c) + 2) {
            p->f4c = p->f4c + 1;
            p->f48 = p->f48 + 1;
            func_02122768(p);
            p->f5c = p->f5c + p->f40;
            {
                s32 i8 = 0;
                if (0 < p->f3c) {
                    do {
                        s32 j7 = 0;
                        if (0 < p->f14) {
                            do {
                                func_02112a50(2, (u16)(i8 + p->tab[j7]), 0, p->f5c);
                                j7 = j7 + 1;
                            } while (j7 < p->f14);
                        }
                        i8 = i8 + 1;
                    } while (i8 < p->f3c);
                }
            }
        }
    }
    p->f38 = 3;
}
