#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213b7d0[];
extern u8 *data_0214f464;
extern u32 *data_0215be34;
extern u32 data_02139ee0[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern void func_02081198(s32 a, s32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_ov003_0215f7c8(u8 *p)
{
    u32 *piVar1;
    s32 iVar2;
    u8 *q;

    *(u16 *)(p + 0x152) = 78;
    q = data_0214f464;
    iVar2 = *(s32 *)q * 0x10dcd + 1;
    *(s32 *)q = iVar2;
    *(u16 *)(p + 0x154) = (u16)((u16)((u32)(iVar2 << 16) >> 31) + 73);
    SwapByte(4, p + 151);
    func_02026c24(p);
    func_02025548(p);
    func_0202da00(p, *(u32 *)(data_0213b7d0 + 0x18));
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 115, data_02139ee0[*(s8 *)(p + 0x88)]);
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 114, data_02139ee0[*(s8 *)(p + 0x88)]);
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 116, data_02139ee0[*(s8 *)(p + 0x88)]);
    func_02023590(p);
    func_020a1a40(81);
}
