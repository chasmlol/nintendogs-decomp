#include "ctx.h"

extern u8 data_02159444[];
extern u8 data_02159468[];
extern u32 data_02152cd8[];
extern u32 *data_0214f464;

extern u32 func_02028130(u8 *p);
extern s32 func_ov005_02167268(u8 *p, s32 *b);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern s32 func_0200b8a0(s32 *a, s32 *b, s32 *c);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02027b38(u8 *p, s32 a);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_0203996c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

typedef struct { s32 a, b, c; } T3s;
typedef volatile s32 vs32;

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(s32)(b) + 0x800) >> 12))

#define local_60 stk[0]
#define uStack_5c stk[1]
#define uStack_58 stk[2]
#define aiStack_54 (&stk[3])
#define local_48 stk[6]
#define local_44 stk[7]
#define local_40 stk[8]
#define local_3c stk[9]
#define local_38 stk[10]
#define local_34 stk[11]
#define local_30 stk[12]
#define local_2c stk[13]
#define local_28 stk[14]
#define local_24 stk[15]
#define local_20 stk[16]
#define local_1c stk[17]

void func_ov005_0215e90c(u8 *param_1)
{
    s32 bVar3;
    s32 stk[19];
    s32 iVar8;
    s32 bVar4;
    s32 uVar10;
    s32 iVar9;
    s32 iVar11;
    u32 uVar12;
    u32 uVar13;
    s16 sVar1;
    u8 *pObj;

    iVar8 = *(s16 *)(*(u8 **)data_02159444 + 0x7a);
    bVar4 = 0;
    if (iVar8 < 0 || *(s16 *)(*(u8 **)data_02159468 + 0x20) <= iVar8) {
        iVar11 = 0;
    } else {
        iVar11 = *(s32 *)(*(u8 **)data_02159468 + iVar8 * 4 + 4);
    }
    if (iVar11 == 0) goto Lz3;
    if (*(s16 *)(iVar11 + 0x96) == 8) {
        bVar3 = 1;
        goto Lm3;
    }
Lz3:
    bVar3 = 0;
Lm3:
    if (bVar3 && (*(u16 *)(*(u8 **)data_02159444 + 0x84) & 1) != 0) {
        if (iVar8 < 0 || *(s16 *)(*(u8 **)data_02159468 + 0x20) <= iVar8) {
            iVar8 = 0;
        } else {
            iVar8 = *(s32 *)(*(u8 **)data_02159468 + iVar8 * 4 + 4);
        }
        if (iVar8 != 0 && func_ov005_02167268((u8 *)iVar8, &local_60) != 0) {
            local_24 = data_02152cd8[0x54 / 4];
            local_20 = data_02152cd8[0x60 / 4];
            local_1c = data_02152cd8[0x6c / 4];
            func_02067e68(&local_60, &local_24, aiStack_54);
            bVar3 = 1;
        } else {
            goto Lz6;
        }
    } else {
Lz6:
        bVar3 = 0;
    }
    if (bVar3) {
        iVar8 = func_02028130(param_1);
        iVar11 = func_02028130(param_1);
        iVar9 = func_0200b8a0((s32 *)(param_1 + 0x2f4), &local_60, aiStack_54);
        uVar12 = FXM(iVar11, iVar8);
        if (iVar9 < FXM(0x4ce, uVar12)) {
            *(T3s *)(param_1 + 0x3c0) = *(T3s *)&local_60;
            func_02067e34((s32 *)(param_1 + 0x3c0), (s32 *)(param_1 + 0x2dc), &local_48);
            {
                s32 q40 = *(vs32 *)&local_40;
                s32 q48 = *(vs32 *)&local_48;
                s32 q44 = *(vs32 *)&local_44;
                iVar8 = FXM(q40, q40) + (FXM(q48, q48) + FXM(q44, q44));
            }
            uVar12 = func_02028130(param_1);
            uVar13 = FXM(0x19a0, uVar12);
            if (iVar8 < FXM(uVar13, uVar13)) {
                uVar10 = func_0206782c(iVar8);
                iVar8 = func_02067898(uVar13, uVar10);
                func_01ff832c(iVar8, &local_48, (s32 *)(param_1 + 0x2dc), (s32 *)(param_1 + 0x3c0));
            }
            bVar4 = 1;
        }
    }
    local_3c = data_02152cd8[0x4c / 4];
    local_38 = data_02152cd8[0x58 / 4];
    local_34 = data_02152cd8[0x64 / 4];
    local_30 = data_02152cd8[0x54 / 4];
    local_2c = data_02152cd8[0x60 / 4];
    local_28 = data_02152cd8[0x6c / 4];
    sVar1 = *(s16 *)(*(u8 **)data_02159444 + 0x86);
    iVar8 = func_02028130(param_1);
    func_01ff832c(iVar8 * ((sVar1 - 60) >> 3), &local_30, (s32 *)(param_1 + 0x2a0), (s32 *)(param_1 + 0x3b4));
    sVar1 = *(s16 *)(*(u8 **)data_02159444 + 0x88);
    iVar8 = func_02028130(param_1);
    func_01ff832c(iVar8 * ((10 - sVar1) >> 3), &local_3c, (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x3b4));
    pObj = *(u8 **)data_02159444;
    if ((*(u16 *)(pObj + 0x84) & 1) != 0) {
        iVar11 = *(s32 *)(pObj + 0x98);
        iVar8 = *(s32 *)(pObj + 0x94);
        if (iVar11 <= 0) {
            iVar11 = -iVar11;
        }
        if (iVar8 <= 0) {
            iVar8 = -iVar8;
        }
        if (iVar8 + iVar11 > 10) {
            func_02027ee0(param_1, 1, 0x1e);
        } else {
            *(u16 *)(param_1 + 0x128) = *(u16 *)(0x128 + param_1) + 1;
            if (*(u16 *)(param_1 + 0x128) >= 0x3c) {
                *(u16 *)(param_1 + 0x128) = 0;
                func_02027b38(param_1, -0x14);
            }
            func_02027ee0(param_1, 1, -10);
        }
    }
    if ((*(u16 *)(*(u8 **)data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(u16 *)(param_1 + 0x11c) = 0;
    iVar8 = *(s32 *)(*(u8 **)data_02159444 + 0x98);
    iVar11 = *(s32 *)(*(u8 **)data_02159444 + 0x94);
    if (0 >= iVar8) {
        iVar8 = -iVar8;
    }
    if (iVar11 <= 0) {
        iVar11 = -iVar11;
    }
    if (iVar11 + iVar8 > 2) {
        *(u16 *)(param_1 + 0x11e) = 0xc;
    } else {
        if (*(u16 *)(param_1 + 0x11e) != 0) {
            *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
        }
    }
    func_0203996c(param_1);
    if (bVar4) {
        return;
    }
    uVar12 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar12;
    switch ((u16)(((((u16)uVar12) * 6u) >> 16))) {
    case 0:
        func_0203e908(param_1, 0x461);
        return;
    case 1:
    case 2:
        func_0203e908(param_1, 0x464);
        return;
    case 3:
    case 4:
    case 5:
        func_0203e908(param_1, 0x465);
        return;
    default:
        return;
    }
}
