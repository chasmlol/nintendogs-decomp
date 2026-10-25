#include "ctx.h"

extern u8 *data_0215be48;
extern u16 data_0214dcd4[];
extern u16 data_0214dce4[];
extern u8 data_0214dd20[];
extern u8 data_0214dd40[];
extern u8 data_0214dd60[];
extern u8 data_0214dd7c[];
extern u8 data_0214dd94[];
extern u8 data_0214ddb4[];
extern u8 data_0214ddd8[];
extern u8 data_0214ddfc[];
extern u8 data_0214de00[];
extern s32 func_0210f100(s32 a, s32 b);
extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, u32 b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_020fc76c(s32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, u32 d, s32 e);
extern void func_02101280(s32 a, u32 d);
extern u32 func_020fc938(s32 a, s32 b, u32 c, s32 d);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, u32 e);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027708(s32 a);
extern s32 func_02044ccc(s32 a);
extern u32 func_02112854(s32 a, u32 b);
extern void func_0210f14c(s32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern s8 func_02028100(s32 a);
extern void func_02112798(s32 a, u32 b, u32 c);
extern void func_020bbfe8(void);
extern void func_02097b68(void);
extern void func_021092fc(void);
extern void func_02107e1c(void);
extern void func_02108e24(s32 a);

void func_02120558(u8 *param_1)
{
    s32 kA;
    u16 *psVar4;
    s32 iVar9, iVar8, iVar6, iVar7, iVar5;
    u16 local_34[3];
    u16 local_3a[3];
    s32 iVar3;
    u32 uVar13, uVar12, uVar11;
    s8 cVar3;
    u16 uVar1;
    u32 *u32p;
    u32 xx;
    u8 *pp;

    pp = param_1 + 0x1cc0;
    psVar4 = (u16 *)func_0210f100(*(s16 *)(pp + 8), *(s16 *)(pp + 10));
    func_0210ea40(0x2a);
    iVar5 = func_0210e968(0x2a, (u32)data_0214dd20);
    iVar6 = func_0210e968(0x2a, (u32)data_0214dd40);
    iVar7 = func_0210e968(0x2a, (u32)data_0214dd60);
    iVar8 = func_0210e968(0x2a, (u32)data_0214dd7c);
    iVar9 = func_0210e968(0x2a, (u32)data_0214dd94);
    func_02113090(2, iVar5);
    func_021130c4(2, iVar6);
    func_02112ed0(2, iVar7);
    func_02112e74(2, iVar8);
    func_0211305c(2, iVar9);
    func_020fc76c(0x2a, (u32)data_0214ddb4, (u32)data_0214ddd8, (u32)data_0214ddfc, (u32)data_0214de00);
    *(u32 *)(data_0215be48 + 0xc838) = 1;
    *(u32 *)(data_0215be48 + 0xc83c) = 1;
    func_020fc8b0(2, 1, 8);
    local_34[0] = data_0214dcd4[0];
    local_34[1] = data_0214dcd4[1];
    local_34[2] = data_0214dcd4[2];
    func_02101cf4();
    kA = 0;
    do {
        uVar1 = local_34[kA];
        func_02101894(0, iVar7, iVar6, uVar1, 0);
        func_02101280(0, uVar1);
        kA = kA + 1;
    } while (kA < 3);
    u32p = (u32 *)func_020fc938(2, 1, psVar4[3], 0);
    func_02101118(0, iVar9, 0, 0, (u32)u32p);
    u32p = (u32 *)func_020fc938(2, 1, psVar4[3], 1);
    func_02101118(0, iVar9, 1, 1, (u32)u32p);
    u32p = (u32 *)func_020fc938(2, 1, 0x238e, 0);
    func_02101118(0, iVar9, 2, 2, (u32)u32p);
    local_3a[0] = data_0214dce4[0];
    local_3a[1] = data_0214dce4[1];
    local_3a[2] = data_0214dce4[2];
    iVar5 = 0;
    uVar13 = 0xc;
    uVar12 = 0xd;
    do {
        iVar6 = func_01ffdb08((s16)iVar5);
        if (iVar6 != 0) {
            iVar7 = func_02027708(iVar6);
            iVar7 = func_02044ccc(iVar7);
            uVar1 = local_3a[iVar5];
            uVar11 = func_02112854(2, uVar1);
            func_0210f14c(2, uVar1, uVar11, *(s32 *)(iVar7 + 0x88), *(s32 *)(iVar7 + 0x8c),
                          *(s32 *)(iVar7 + 0x90), 1, 1);
            cVar3 = func_02028100(iVar6);
            xx = (cVar3 == 0) ? 1 : 0;
            func_02112798(2, (u16)uVar13, xx);
            func_02112798(2, (u16)uVar12, (xx == 0) ? 1 : 0);
        }
        iVar5 = iVar5 + 1;
        uVar13 = uVar13 + 2;
        uVar12 = uVar12 + 2;
    } while (iVar5 < 3);
    func_02112798(2, 6, 0);
    func_02112798(2, 7, 0);
    func_02112798(2, 8, 0);
    func_02112798(2, 0x12, 0);
    func_020bbfe8();
    func_02097b68();
    func_021092fc();
    func_02107e1c();
    func_02108e24(0);
}
