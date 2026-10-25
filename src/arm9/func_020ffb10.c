#include "ctx.h"
#pragma opt_propagation off

extern u8 data_02159060[];
extern u8 data_0215be48[];
extern u8 data_0214f004[];

typedef struct { s16 a; s16 b; u16 pad4; u16 c; s32 d; u8 rest[20]; } Elem;

void func_02108e24(u32 a);
void func_021210fc(u8 *p);
u32 func_02112320(u32 a, u32 b, u32 c);
void func_02112978(u32 a, u32 b, s16 c, u32 d);
void func_02112798(u32 a, u32 b, u32 c);
s32 func_021210c8(u8 *p, s32 v);
s32 func_0212109c(u8 *p, s32 v);
void func_020a17cc(s32 a, s32 b);
u32 func_02112dec(u32 a, u32 b);
void func_02112dc4(u32 a, u32 b, u32 c);
void func_02108114(s32 a, s32 b);
void func_020a1a40(u32 a);
void func_021082c8(void);
s32 func_020fc938(u32 a, u32 b, u32 c, u32 d);
void func_02101328(u32 a, u32 b, u32 c);
u32 func_02112e14(u32 a);
void func_0210083c(u32 a, u32 b, u32 c, u32 d, void *e);
void func_02101280(u32 a, u32 b);
void func_02101118(u32 a, u32 b, u32 c, u32 d, void *e);
void func_0210f2c0(s32 a, u32 b, u32 c, s32 d, u32 e);

#define F(i) (((s32 *)p)[i])

void func_020ffb10(s32 *p)
{
    s32 iVar9;
    s32 iVar5, iVar7;
    s32 bVar2;
    s16 *psVar6;
    u16 *puVar8;
    u32 uVar4;
    u8 *pA = (u8 *)p + 0x1c28;
    u8 *pB = (u8 *)p + 0x1c6c;

    switch (F(0x253)) {
    case 0: goto TAIL;
    case 1: goto C1;
    case 2: goto C2;
    case 3: goto C3;
    case 4: goto C4;
    case 5: goto C5;
    case 6: goto C6;
    case 7: goto C7;
    default: goto DEF;
    }
TAIL:
    bVar2 = 1;
    if (*(s16 *)(*(u8 **)data_02159060 + 0x6c) != 1 && *(s16 *)(*(u8 **)data_02159060 + 0x6c) != 8) {
        bVar2 = 0;
    }
    if (bVar2) {
        func_02108e24(0);
        return;
    }
    func_02108e24(1);
    func_021210fc((u8 *)(p + 1));
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x48b8) == 1) {
        {
            u32 b1 = data_0214f004[1];
            u32 b0 = data_0214f004[0];
            *(u16 *)(p + 0x706) = b0;
            *(u16 *)((u8 *)p + 0x1c1a) = b1;
        }
        F(0x253) = 3;
        return;
    }
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x4860) == 0) {
        return;
    }
    iVar5 = func_02112320(2, data_0214f004[0], data_0214f004[1]);
    F(0x24c) = -1;
    F(0x24d) = -1;
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
        return;
    }
    switch (iVar5) {
    case 3:
        F(0x24c) = 0;
        break;
    case 4:
        F(0x24c) = 1;
        break;
    case 5:
        F(0x24c) = 2;
        break;
    case 6:
        F(0x24c) = 3;
        break;
    case 7:
        F(0x24d) = 0;
        break;
    case 8:
        F(0x24d) = 1;
        break;
    case 9:
        F(0x24d) = 2;
        break;
    case 10:
        F(0x24d) = 3;
        break;
    }
    if (F(0x24c) >= 0) {
        iVar5 = func_021210c8((u8 *)(p + 1), F(0x24c));
        F(0x24b) = iVar5;
        if (F(0x24b) < 0) {
            return;
        }
        iVar5 = func_0212109c((u8 *)(p + 1), F(0x24c));
        {
            Elem *ep = (Elem *)(p + 27) + F(0x24b);
            func_020a17cc(ep->a, ep->b);
        }
        func_02112978(2, 0x1d, 0, (s16)(F(0x24c) * 36));
        func_02112798(2, 0x1d, 1);
        uVar4 = func_02112dec(2, 0xd);
        func_02112dc4(2, iVar5 + 7, uVar4);
        *(s16 *)(pB + *(s32 *)pA * 2 + 4) = (s16)F(0x13);
        F(0x253) = 1;
        func_02108e24(0);
        return;
    }
    if (F(0x24d) < 0) {
        return;
    }
    iVar5 = func_021210c8((u8 *)(p + 1), F(0x24d));
    F(0x24b) = iVar5;
    if (F(0x24b) < 0) {
        return;
    }
    iVar5 = func_0212109c((u8 *)(p + 1), F(0x24d));
    func_020a1a40(0x18);
    uVar4 = func_02112dec(2, 0x1b);
    func_02112dc4(2, iVar5 + 0x15, uVar4);
    *(s16 *)(pB + *(s32 *)pA * 2 + 4) = (s16)F(0x13);
    F(0x253) = 1;
    func_02108e24(0);
    return;
C1:
        F(0x24f) = F(0x24f) + 1;
        if (F(0x24f) <= 10) {
            return;
        }
        if (F(0x24c) >= 0) {
            Elem *ep;
            iVar9 = F(0x24b);
            ep = (Elem *)(p + 27) + iVar9;
            F(0x24f) = 0;
            F(0x253) = -1;
            func_02112798(2, 0x1d, 0);
            func_02108114(ep->a, ep->b);
            *(s32 *)(*(u8 **)data_0215be48 + 0x486c) = 2;
            return;
        }
        if (F(0x24d) < 0) {
            return;
        }
        iVar9 = func_0212109c((u8 *)(p + 1), F(0x24d));
        uVar4 = func_02112dec(2, 0x1c);
        func_02112dc4(2, iVar9 + 0x15, uVar4);
        F(0x24f) = 0;
        F(0x253) = 2;
        return;
C2:
        F(0x24f) = F(0x24f) + 1;
        if (F(0x24f) <= 10) {
            return;
        }
        {
            Elem *ep = (Elem *)(p + 27) + F(0x24b);
            psVar6 = (s16 *)func_020fc938(2, 0, ep->c, 2);
            func_02101328(0, F(0x251), 0xb);
            iVar7 = func_02112e14(2);
            func_0210083c(0, iVar7, F(0x251), 0xd, psVar6);
            puVar8 = (u16 *)func_020fc938(2, 0, ep->c, 0);
            func_02101280(0, 6);
            iVar9 = func_02112e14(2);
            func_02101118(0, iVar9, 6, 0xc, puVar8);
            func_0210f2c0(p[0], 2, 0x28, ep->d, 7);
        }
        F(0x24f) = 0;
        F(0x253) = 4;
        func_02108e24(0);
        return;
C3:
        if (*(s32 *)(*(u8 **)data_0215be48 + 0x48bc) != 1) {
            return;
        }
        func_021082c8();
        return;
C4:
        F(0x250) = F(0x250) + 0x20;
        func_02112978(2, 6, (s16)F(0x250), 0);
        func_02112978(2, 0x27, (s16)F(0x250), 0);
        func_02112978(2, 0x28, (s16)F(0x250), 0);
        if (F(0x250) <= 0) {
            return;
        }
        F(0x250) = 0;
        F(0x253) = 5;
        func_02108e24(1);
        return;
C5:
        if (*(s32 *)(*(u8 **)data_0215be48 + 0x48bc) != 1) {
            return;
        }
        func_02108e24(0);
        F(0x253) = 6;
        return;
C6:
        F(0x250) = F(0x250) - 0x20;
        func_02112978(2, 6, (s16)F(0x250), 0);
        func_02112978(2, 0x27, (s16)F(0x250), 0);
        func_02112978(2, 0x28, (s16)F(0x250), 0);
        if (F(0x250) < -0xff) {
            F(0x250) = -0xff;
            F(0x253) = 7;
        }
        return;
C7:
        func_02108e24(1);
        F(0x253) = 0;
        return;
DEF:
        return;
    return;
}
