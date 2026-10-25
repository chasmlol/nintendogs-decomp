#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);
extern void func_0202db24(u8 *p, s32 v);

void func_ov003_0216c4f4(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 26;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 48;
    *(param_1 + 147) = 9;
    *(param_1 + 152) = 9;
    *(param_1 + 151) = 3;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 9, 1);
    func_0202db24(param_1, 1);
}
