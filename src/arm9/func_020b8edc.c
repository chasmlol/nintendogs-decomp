#include "ctx.h"
#pragma opt_propagation off

typedef volatile s16 vs16;

extern u8 data_021425e0[];
extern u8 data_021425e4[];
extern u8 *data_0215942c;
extern u8 *data_02159444;
extern u8 *data_02159030;
extern s32 func_01ffdb08(s32 a);
extern u8 *func_0202817c(void);
extern u8 *func_020941bc(void);
extern s32 func_02042d4c(void);
extern s32 func_02028100(void);
extern u8 *func_0208fc60(s32 a, s32 b);
extern u8 *func_0210f100(s32 a, s32 b);
extern u8 *func_02090cac(s32 a, s32 b, s32 c);

u8 *func_020b8edc(u32 param_1, s32 param_2)
{
    s32 iVar4;
    u8 *r4;
    u8 *pq;
    s32 sv;
    s32 a0;
    s32 b1;
    vs16 *q1;

    iVar4 = 0;
    r4 = data_021425e0;
    if (param_1 > 0x30014) goto HI;
    if (param_1 >= 0x30014) goto C14;
    switch (param_1) {
    case 0x30000:
        goto A0;
    case 0x30002:
        goto A2;
    case 0x30005:
        goto A5;
    case 0x30006:
        goto A6;
    default:
        goto END;
    }
HI:
    if (param_1 != 0x30015) goto END;
    goto C15;
A0:
    func_01ffdb08(*(s16 *)(data_0215942c + 28));
    func_0202817c();
    r4 = func_020941bc() + 12;
    goto END;
A2:
    if (param_2 != 0) goto NZ2;
    iVar4 = func_02042d4c();
    goto SH2;
NZ2:
    if (param_2 == 1) iVar4 = *(s16 *)(data_0215942c + 28);
SH2:
    if (func_01ffdb08(iVar4) == 0) goto END;
    r4 = func_0202817c() + 120;
    goto END;
A5:
    if (param_2 != 0) goto NZ5;
    iVar4 = func_02042d4c();
    goto SH5;
NZ5:
    if (param_2 == 1) iVar4 = *(s16 *)(data_0215942c + 28);
SH5:
    if (func_01ffdb08(iVar4) == 0) goto END;
    r4 = func_0208fc60(func_02028100(), param_2);
    goto END;
A6:
    q1 = (vs16 *)(data_02159444 + 260);
    a0 = ((s16 *)(data_02159444 + 256))[2];
    b1 = q1[1];
    pq = func_0210f100(a0, b1);
    r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), *(u16 *)(pq + 6), 0);
    goto END;
C14:
    q1 = (vs16 *)(data_02159444 + 260);
    a0 = ((s16 *)(data_02159444 + 256))[2];
    b1 = q1[1];
    pq = func_0210f100(a0, b1);
    r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), *(u16 *)(pq + 6), 1);
    goto END;
C15:
    q1 = (vs16 *)(data_02159444 + 260);
    a0 = ((s16 *)(data_02159444 + 256))[2];
    b1 = q1[1];
    pq = func_0210f100(a0, b1);
    sv = *(s16 *)(pq + 4);
    switch (sv) {
    case 0:
        r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), 4000, 1);
        goto END;
    case 1:
        r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), 4000, 3);
        goto END;
    case 2:
        r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), 4000, 4);
        goto END;
    case 3:
        r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), 4000, 0);
        goto END;
    case 4:
        r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), 4000, 2);
        goto END;
    case 5:
        r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), 4000, 5);
        goto END;
    case 6:
        r4 = func_02090cac(*(u32 *)(data_02159030 + 0x10), 4000, 6);
        goto END;
    default:
        r4 = data_021425e4;
        goto END;
    }
END:
    return r4;
}
