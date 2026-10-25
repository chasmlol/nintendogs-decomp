#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_02152cd8;
extern void func_02026494(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);
extern void func_02039448(u8 *p);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, u8 *d);
extern void func_02023654(u8 *p, u32 a, u32 b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02165384(u8 *param_1)
{
    s32 blk[6];
    u32 *P1;
    u32 *P2;
    u32 uVar3;
    s32 iVar2;
    s32 iVar4;

    *(u16 *)(param_1 + 256 + 82) = 0;
    SwapByte(7, (vu8 *)(param_1 + 147));
    SwapByte(9, (vu8 *)(param_1 + 152));
    func_02026494(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    P1 = *(u32 **)&data_0214f464;
    uVar3 = *P1 * 0x10dcd + 1;
    *P1 = uVar3;
    iVar4 = (u16)((((u32)(u16)uVar3) * 120) >> 16) + 30;
    P2 = *(u32 **)&data_0214f464;
    iVar2 = *(s32 *)P2 * 0x10dcd + 1;
    *(s32 *)P2 = iVar2;
    if ((u16)(((u32)iVar2 << 16) >> 31) != 0) iVar4 = -iVar4;
    blk[0] = *(s32 *)((u8 *)&data_02152cd8 + 0x4c);
    blk[1] = *(s32 *)((u8 *)&data_02152cd8 + 0x58);
    blk[2] = *(s32 *)((u8 *)&data_02152cd8 + 0x64);
    blk[3] = *(s32 *)((u8 *)&data_02152cd8 + 0x54);
    blk[4] = *(s32 *)((u8 *)&data_02152cd8 + 0x60);
    blk[5] = *(s32 *)((u8 *)&data_02152cd8 + 0x6c);
    func_02039448(param_1);
    func_01ff832c(iVar4 * 4294966886, blk, param_1 + 672, param_1 + 632);
    func_01ff832c(0xffff0fc4, blk + 3, param_1 + 632, param_1 + 632);
    func_02023654(param_1, 36, 2);
}
