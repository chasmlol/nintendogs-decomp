#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(s32 a);
extern void func_020255a4(s32 a);
extern void func_0202db24(s32 a, u32 b);

void func_ov003_021684c0(s32 param_1)
{
    u32 v;
    u8 *r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x18b;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 19;
    r = (u8 *)param_1 + 151;
    v = 1;
    *(u8 *)(r) = (u8)(v);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 7);
}
