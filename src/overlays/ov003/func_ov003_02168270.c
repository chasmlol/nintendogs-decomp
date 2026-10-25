#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(s32 p);
extern void func_020255a4(s32 p);
extern void func_0202db24(s32 p, s32 v);

void func_ov003_02168270(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 396;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 19;
    *((u8 *)param_1 + 151) = 1;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 8);
}
