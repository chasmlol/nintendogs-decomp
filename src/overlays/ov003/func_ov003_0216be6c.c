#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 a);

void func_ov003_0216be6c(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 1;
    *(u8 *)(param_1 + 147) = 9;
    *(u8 *)(param_1 + 152) = 9;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 0);
}
