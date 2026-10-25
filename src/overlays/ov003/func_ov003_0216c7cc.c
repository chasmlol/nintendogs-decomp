#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(s32 p);
extern void func_020255a4(s32 p);
extern void func_02023654(s32 p, s32 a, s32 b);
extern void func_020235b4(s32 p, s32 a, s32 b);
extern void func_0202db24(s32 p, s32 v);

void func_ov003_0216c7cc(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 42;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 48;
    ((u8 *)param_1)[147] = 9;
    ((u8 *)param_1)[152] = 9;
    ((u8 *)param_1)[151] = 3;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 3, 1);
    func_020235b4(param_1, 3, 1);
    func_0202db24(param_1, 3);
}
