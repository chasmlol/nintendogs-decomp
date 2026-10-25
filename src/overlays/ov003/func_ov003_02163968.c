#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0213b7d0;
extern u32 *data_0215be34;
extern u32 data_02139f10[];
extern u32 data_02139ea4[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern void func_02081198(s32 a, s32 b, u32 c);
extern void func_0209eeec(s32 a, s32 b);
extern void func_02023590(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_ov003_02163968(u8 *p)
{
    u32 *piVar1;
    s32 iVar2;

    *(u16 *)(p + 0x152) = 105;
    *(u16 *)(p + 0x154) = 7;
    SwapByte(4, p + 151);
    func_02026c24(p);
    func_02025548(p);
    func_0202da00(p, *(u32 *)((u8 *)&data_0213b7d0 + 0x20));
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 15, data_02139f10[*(s8 *)(p + 0x88)]);
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 16, data_02139ea4[*(s8 *)(p + 0x88)]);
    func_0209eeec(30, 127);
    func_02023590(p);
}
