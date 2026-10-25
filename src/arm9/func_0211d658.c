#include "ctx.h"
#pragma opt_common_subs off
#define P2_DECL s32 n;
#define FINAL_PRE s32 fl;
#define FLAGV fl
#define ONE_DECL s32 one;
#define ONE one
#define P1_STMTS uVar12 = 1; n = 10 - (param_1[1] % 10); one = 1;
#define P2_STMTS n = 10; uVar12 = 1; one = 1;
#ifndef P1_DECL
#define P1_DECL
#endif
#ifndef P2_DECL
#define P2_DECL
#endif
#ifndef P1_STMTS
#define P1_STMTS uVar12 = 1; n = 10 - (param_1[1] % 10);
#endif
#ifndef P2_STMTS
#define P2_STMTS n = 10; uVar12 = 1;
#endif
#ifndef ONE_DECL
#define ONE_DECL
#endif
#ifndef ONE
#define ONE 1
#endif
#ifndef FINAL_PRE
#define FINAL_PRE
#endif
#ifndef FLAGV
#define FLAGV uVar12
#endif

extern u8 data_0214f004[];
extern u8 *data_0215be48;

typedef struct {
    s32 kind;
    s32 pad;
    s16 a;
    s16 b;
} Cell;

extern u8 *func_0210f100(s32 a, s32 b);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern void func_02112798(s32 a, s32 b, s32 c);
extern u32 func_0211c294(u8 *a, s32 b);
extern void func_0211e824(s32 *p);
extern void func_020a1a40(s32 v);
extern void func_02101280(s32 a, s32 b);
extern void func_02100fac(s32 a, s32 b, s32 c, s32 d, void *e, s32 f);
extern void func_0211bd8c(void *a, s32 b, s32 c);

void func_0211d658(s32 *param_1)
{
    u8 *psVar5, *psVar7;
    s32 uVar12, bVar3, bVar2, bVar4, uVar9, iVar6, iVar10, n, flag, cnt;
    u32 uVar13;
    u16 text[4];
    u8 auStack_40[28];

    {
        Cell *c = (Cell *)((u8 *)param_1 + 0x1cc0);
        psVar5 = func_0210f100(c->a, c->b);
    }
    iVar6 = func_02112320(2, data_0214f004[0], data_0214f004[1]);
    flag = *(s32 *)(data_0215be48 + 0x4860);
    uVar12 = 0;
    if (flag != 0 && (*(u16 *)(data_0214f004 + 2) & 2) != 0) {
        uVar12 = 1;
    }
    bVar3 = 0;
    if (flag != 0 && (*(u16 *)(data_0214f004 + 2) & 2) == 0) {
        bVar3 = 1;
    }
    bVar4 = 0;
    func_02112798(2, 4, 0);
    func_02112798(2, 5, 0);
    func_02112798(2, 6, 0);
    func_02112798(2, 7, 0);
    {
        Cell *c = (Cell *)((u8 *)param_1 + 0x1cc0);
        psVar7 = func_0210f100(c->a, c->b);
    }
    uVar13 = func_0211c294(psVar7, param_1[0x730]);
    if (param_1[0x730] == 2) {
        bVar2 = bVar4;
        if (param_1[1] < param_1[0]) {
            bVar2 = (param_1[1] + 1) * (s32)uVar13 + param_1[2] <= 99999999;
        }
    } else {
        bVar2 = bVar4;
        if (param_1[1] < 99 - param_1[0] && param_1[2] >= (param_1[1] + 1) * (s32)uVar13) {
            bVar2 = 1;
        }
    }
    if (!bVar2) {
        func_02112798(2, 6, 1);
    }
    if (param_1[1] <= 0) {
        func_02112798(2, 7, 1);
    }
    switch (param_1[8]) {
    case 0:
        if (uVar12 != 0) {
            if (0 == iVar6) {
                u32 f;
                {
                    Cell *c = (Cell *)((u8 *)param_1 + 0x1cc0);
                    psVar7 = func_0210f100(c->a, c->b);
                }
                uVar13 = func_0211c294(psVar7, param_1[0x730]);
                if (param_1[0x730] == 2) {
                    f = 0;
                    if (param_1[1] < param_1[0]) {
                        f = (param_1[1] + 1) * (s32)uVar13 + param_1[2] <= 99999999;
                    }
                } else {
                    f = 0;
                    if (param_1[1] < 99 - param_1[0] && param_1[2] >= (param_1[1] + 1) * (s32)uVar13) {
                        f = 1;
                    }
                }
                if (f) {
                    bVar4 = 1;
                    param_1[1]++;
                    param_1[8] = 1;
                    func_02112798(2, 4, 1);
                } else {
                    func_020a1a40(0x20);
                    func_0211e824(param_1);
                }
            }
            if (iVar6 == 1) {
                if (param_1[1] > 0) {
                    param_1[1]--;
                    bVar4 = 1;
                    param_1[8] = 3;
                    func_02112798(2, 5, 1);
                } else {
                    func_020a1a40(0x20);
                }
            }
        }
        break;
    case 1:
        if (bVar3 != 0 && iVar6 == 0) {
            param_1[6]++;
            iVar10 = param_1[6];
            if (90 < iVar10) {
                P1_DECL
                ONE_DECL
                int f;
                P1_STMTS
                goto c1_test;
c1_body:
                param_1[1]++;
                bVar4 = ONE;
                n--;
                one = 1;
c1_test:
                {
                    Cell *c = (Cell *)((u8 *)param_1 + 0x1cc0);
                    if (0 >= n) {
                        goto c1_exit;
                    }
                    psVar7 = func_0210f100(c->a, c->b);
                    uVar13 = func_0211c294(psVar7, c->kind);
                    if (c->kind == 2) {
                        f = 0;
                        if (param_1[1] < param_1[0]) {
                            f = (param_1[1] + 1) * (s32)uVar13 + param_1[2] <= 99999999;
                        }
                    } else {
                        f = 0;
                        if (param_1[1] < 99 - param_1[0] && param_1[2] >= (param_1[1] + 1) * (s32)uVar13) {
                            f = ONE;
                        }
                    }
                    if (f) {
                        goto c1_body;
                    }
                }
c1_exit:
                param_1[8] = 2;
            } else {
                if (iVar10 > 30 && (iVar10 - 30) % 15 == 0) {
                    u32 f;
                    {
                        Cell *c = (Cell *)((u8 *)param_1 + 0x1cc0);
                        psVar7 = func_0210f100(c->a, c->b);
                    }
                    uVar13 = func_0211c294(psVar7, param_1[0x730]);
                    if (param_1[0x730] == 2) {
                        f = 0;
                        if (param_1[1] < param_1[0]) {
                            f = (param_1[1] + 1) * (s32)uVar13 + param_1[2] <= 99999999;
                        }
                    } else {
                        f = 0;
                        if (param_1[1] < 99 - param_1[0] && param_1[2] >= (param_1[1] + 1) * (s32)uVar13) {
                            f = 1;
                        }
                    }
                    if (f) {
                        bVar4 = 1;
                        param_1[1]++;
                    }
                }
            }
            func_02112798(2, 4, 1);
        } else {
            param_1[6] = 0;
            param_1[8] = 0;
        }
        break;
    case 3:
        if (bVar3 != 0 && iVar6 == 1) {
            param_1[6]++;
            if (90 < param_1[6]) {
                for (n = param_1[1] % 10; n > 0 && 0 < param_1[1]; (s32)n--) {
                    param_1[1]--;
                    bVar4 = 1;
                }
                param_1[8] = 4;
            }
            if (param_1[6] > 30 && (param_1[6] - 30) % 15 == 0) {
                if (param_1[1] > 0) {
                    param_1[1]--;
                    bVar4 = 1;
                }
            }
            func_02112798(2, 5, 1);
        } else {
            param_1[6] = 0;
            param_1[8] = 0;
        }
        break;
    case 2:
        if (bVar3 != 0 && iVar6 == 0) {
            param_1[6]++;
            if ((param_1[6] - 90) % 15 == 0) {
                P2_DECL
                ONE_DECL
                u32 f;
                P2_STMTS
                goto c2_test;
c2_body:
                param_1[1]++;
                n--;
                bVar4 = ONE;
                one = 1;
c2_test:
                {
                    Cell *c = (Cell *)((u8 *)param_1 + 0x1cc0);
                    if (0 >= n) {
                        goto c2_exit;
                    }
                    psVar7 = func_0210f100(c->a, c->b);
                    uVar13 = func_0211c294(psVar7, c->kind);
                    if (c->kind == 2) {
                        f = 0;
                        if (param_1[1] < param_1[0]) {
                            f = (param_1[1] + 1) * (s32)uVar13 + param_1[2] <= 99999999;
                        }
                    } else {
                        f = 0;
                        if (param_1[1] < 99 - param_1[0] && param_1[2] >= (param_1[1] + 1) * (s32)uVar13) {
                            f = ONE;
                        }
                    }
                    if (f) {
                        goto c2_body;
                    }
                }
c2_exit: ;
            }
            func_02112798(2, 4, 1);
        } else {
            param_1[6] = 0;
            param_1[8] = 0;
        }
        break;
    case 4:
        if (bVar3 != 0 && iVar6 == 1) {
            param_1[6]++;
            if ((param_1[6] - 90) % 15 == 0) {
                for (n = 10; n > 0 && 0 < param_1[1]; n--) {
                    param_1[1]--;
                    bVar4 = 1;
                }
            }
            func_02112798(2, 5, 1);
        } else {
            param_1[6] = 0;
            param_1[8] = 0;
        }
        break;
    }
    if (bVar4 != 0) {
        uVar9 = 0;
        cnt = param_1[1];
        text[0] = 0x78;
        text[1] = (u16)((cnt / 10) % 10 + 0x30);
        text[2] = (u16)(cnt % 10 + 0x30);
        text[3] = 0;
        func_02101280(0, *(u16 *)((u8 *)param_1 + 0x34));
        func_02100fac(0, *(s32 *)(data_0215be48 + 0x232c), *(u16 *)((u8 *)param_1 + 0x34),
                      *(u16 *)((u8 *)param_1 + 0x36), text, 7);
        uVar13 = func_0211c294(psVar5, param_1[0x730]);
        func_0211bd8c(auStack_40, 12, uVar13 * param_1[1]);
        func_02101280(0, *(u16 *)((u8 *)param_1 + 0x30));
        func_02100fac(0, *(s32 *)(data_0215be48 + 0x232c), *(u16 *)((u8 *)param_1 + 0x30),
                      *(u16 *)((u8 *)param_1 + 0x32), auStack_40, 7);
        switch (param_1[8]) {
        case 0:
            break;
        case 2:
            uVar9 = 27;
            break;
        case 4:
            uVar9 = 28;
            break;
        case 1:
            uVar9 = 25;
            break;
        case 3:
            uVar9 = 26;
            break;
        }
        func_020a1a40((int)uVar9);
    }
    {
        FINAL_PRE
        s32 *piVar11 = (s32 *)((u8 *)param_1 + 0x1ce0);
        Cell *c = (Cell *)((u8 *)param_1 + 0x1cc0);
        psVar5 = func_0210f100(c->a, c->b);
        if (param_1[1] == 0) {
            FLAGV = 1;
        } else {
            FLAGV = 0;
        }
        if (2 != c->kind) {
            uVar13 = func_0211c294(psVar5, c->kind);
            FLAGV |= (param_1[2] < (s32)uVar13);
        }
        if (*piVar11 == 0) {
            iVar6 = 10;
        } else {
            iVar6 = 3;
        }
        func_02112798(2, iVar6, FLAGV);
    }
}
