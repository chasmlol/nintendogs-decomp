#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026478(u8 *p);
extern void func_020254ec(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
void func_0205a314(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x17e;
    {
        u8 *q = param_1 + 0x93;
        u32 one = 5;
        *(u8 *)(q) = (u8)(one);
    }
    func_02026478(param_1);
    func_020254ec(param_1);
    func_02023654(param_1, 0x38, 1);
}
