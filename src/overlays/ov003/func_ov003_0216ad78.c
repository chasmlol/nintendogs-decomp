#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 n);
void func_ov003_0216ad78(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x36;
    {
        u8 *q = param_1 + 0x97;
        u32 four = 4;
        *(u8 *)(q) = (u8)(four);
    }
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 0x18, 1);
    func_0202db24(param_1, 3);
}
