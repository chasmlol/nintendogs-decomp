#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(s32 p);
extern u32 func_020255a4(s32 p);
extern void func_02023654(s32 p, s32 a, s32 b);
extern void func_0202db24(s32 p, s32 a);

void func_ov003_0216b648(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 396;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 12;
    ((u8 *)param_1)[151] = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 8, 2);
    func_0202db24(param_1, 8);
}
