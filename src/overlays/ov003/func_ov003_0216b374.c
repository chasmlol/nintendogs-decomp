#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020207cc(s32 a);
extern void func_020264f4(s32 a);
extern void func_020255a4(s32 a);
extern void func_0202db24(s32 a, s32 b);

void func_ov003_0216b374(s32 param_1)
{
    u32 uVar1;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x18b;
    ((u8 *)param_1)[147] = 14;
    uVar1 = func_020207cc(param_1);
    ((u8 *)param_1)[143] = (u8)uVar1;
    ((u8 *)param_1)[151] = 1;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 7);
}
