#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 v);

void func_ov003_0216cb28(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 79;
    *(u8 *)(param_1 + 147) = 9;
    *(u8 *)(param_1 + 152) = 9;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 4, 1);
    func_0202db24(param_1, 4);
}
