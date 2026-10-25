#pragma avoid_byte strb
#include "ctx.h"

extern s32 *data_0215be34;
extern u32 data_02139f10[];
extern u32 data_02139ea4[];
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, u32 n);
extern void func_02081198(s32 a, u32 b, u32 c);
extern void func_0209eeec(u32 a, u32 b);
extern void func_02023590(u8 *p);

void func_ov003_0215ec60(u8 *param_1)
{
    s32 *piVar1;

    *(u16 *)(param_1 + 256 + 82) = 0x27;
    *(u16 *)(param_1 + 256 + 84) = 7;
    param_1[151] = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 3);
    piVar1 = data_0215be34;
    func_02081198(piVar1 != 0 ? *piVar1 : 0, 15, data_02139f10[*(s8 *)(param_1 + 0x88)]);
    piVar1 = data_0215be34;
    func_02081198(piVar1 != 0 ? *piVar1 : 0, 16, data_02139ea4[*(s8 *)(param_1 + 0x88)]);
    func_0209eeec(30, 127);
    func_02023590(param_1);
}
