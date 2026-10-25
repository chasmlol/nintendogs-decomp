#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 n);
void func_ov003_0216ae68(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x54;
    {
        u8 *q = param_1 + 0x97;
        u32 one = 4;
        *(u8 *)(q) = (u8)(one);
    }
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 4);
}
