#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026478(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);
extern void func_ov003_0216df24(u8 *p);
void func_ov003_021650bc(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 6;
    {
        u8 *q = param_1 + 0x93;
        u32 zero = 0;
        *(u8 *)(q) = (u8)(zero);
    }
    {
        u8 *q = param_1 + 0x98;
        u32 nine = 9;
        *(u8 *)(q) = (u8)(nine);
    }
    func_02026478(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_ov003_0216df24(param_1);
}
