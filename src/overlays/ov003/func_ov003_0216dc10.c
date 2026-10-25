#include "ctx.h"

extern u32 data_0214f464;
extern u8 data_02152cd8[];
extern void func_02039448(u8 *p);
extern void func_01ff832c(s32 a, u32 *b, s32 *c, s32 *d);

void func_ov003_0216dc10(u8 *param_1)
{
    u32 *pp;
    u32 uVar2;
    s32 iVar3;
    s32 iVar4;
    u16 bit;
    u32 loc[6];

    pp = *(u32 **)&data_0214f464;
    uVar2 = *pp * 0x10dcd + 1;
    *pp = uVar2;
    iVar4 = (u16)(((u32)(u16)uVar2 * 120) >> 16) + 30;
    pp = *(u32 **)&data_0214f464;
    iVar3 = (s32)*pp * 0x10dcd + 1;
    bit = ((u32)iVar3 << 16) >> 31;
    *pp = iVar3;
    if (bit) {
        iVar4 = -iVar4;
    }
    loc[0] = *(u32 *)(data_02152cd8 + 0x4c);
    loc[1] = *(u32 *)(data_02152cd8 + 0x58);
    loc[2] = *(u32 *)(data_02152cd8 + 0x64);
    loc[3] = *(u32 *)(data_02152cd8 + 0x54);
    loc[4] = *(u32 *)(data_02152cd8 + 0x60);
    loc[5] = *(u32 *)(data_02152cd8 + 0x6c);
    func_02039448(param_1);
    func_01ff832c(iVar4 * -410, loc, (s32 *)(param_1 + 0x2a0), (s32 *)(param_1 + 0x278));
    func_01ff832c(-0xf03c, &loc[3], (s32 *)(param_1 + 0x278), (s32 *)(param_1 + 0x278));
}
