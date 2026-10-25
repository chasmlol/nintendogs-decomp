#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern u8 data_0214f004[];
extern u8 data_02152cd8[];
extern u8 *func_020bc3c4(void);
extern s32 func_02067898(s32 a, s32 b);
extern void func_0206793c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_0208ec84(u8 *p, s32 *a, u32 *b);
extern void func_020a1728(u32 a, u32 b, s32 *c);

void func_020afda4(void)
{
    u8 bVar1;
    s32 m1;
    s32 m2;
    u8 bVar2;
    u8 *iVar4;
    s32 iVar5;
    s32 uVar6;
    s32 lv;
    s32 aiStack_58[3];
    u32 auStack_4c[3];
    s32 blk[9];

    bVar1 = data_0214f004[0];
    bVar2 = data_0214f004[1];
    m1 = bVar1 - 0x7f;
    m2 = -(s32)bVar2;
    iVar4 = func_020bc3c4();
    blk[0] = *(s32 *)(data_02152cd8 + 0x4c);
    blk[1] = *(s32 *)(data_02152cd8 + 0x58);
    blk[2] = *(s32 *)(data_02152cd8 + 0x64);
    blk[3] = *(s32 *)(data_02152cd8 + 0x50);
    blk[4] = *(s32 *)(data_02152cd8 + 0x5c);
    blk[5] = *(s32 *)(data_02152cd8 + 0x68);
    blk[6] = *(s32 *)(data_02152cd8 + 0x54);
    blk[7] = *(s32 *)(data_02152cd8 + 0x60);
    blk[8] = *(s32 *)(data_02152cd8 + 0x6c);
    iVar5 = func_02067898(*(s16 *)(iVar4 + 0x6c), *(s16 *)(iVar4 + 0x6e));
    uVar6 = FX_Mul(*(s32 *)(iVar4 + 0x74), iVar5);
    lv = FX_Mul(uVar6, *(s32 *)(iVar4 + 0x70));
    func_0206793c(-0x12000, &blk[6], (s32 *)(iVar4 + 0x30), aiStack_58);
    iVar5 = (lv * m1) * 0x14;
    func_0206793c((s32)(iVar5 + (s32)((u32)(iVar5 >> 6) >> 25)) >> 7, &blk[0], aiStack_58, aiStack_58);
    iVar5 = uVar6 * m2 * 0x14;
    func_0206793c(iVar5 / 192, &blk[3], aiStack_58, aiStack_58);
    func_0208ec84(iVar4, aiStack_58, auStack_4c);
    func_020a1728(0x31, 0, (s32 *)auStack_4c);
}
