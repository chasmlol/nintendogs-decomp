#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0215be34;
extern u32 data_02139f10;
extern u32 data_02139ea4;
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(s32 a, u32 b, u32 c);
extern void func_0209eeec(u32 a, u32 b);
extern void func_02023590(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0215eba8(u8 *param_1)
{
    s32 *piVar1;
    s32 iVar2;

    *(u16 *)(param_1 + 0x152) = 79;
    *(u16 *)(param_1 + 0x154) = 7;
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 4);
    piVar1 = *(s32 **)&data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 15, ((u32 *)&data_02139f10)[*(s8 *)(param_1 + 136)]);
    piVar1 = *(s32 **)&data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 16, ((u32 *)&data_02139ea4)[*(s8 *)(param_1 + 136)]);
    func_0209eeec(30, 127);
    func_02023590(param_1);
}
