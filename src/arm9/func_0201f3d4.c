#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026c24(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_0201f4ac(u8 *p);
void func_0201f3d4(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x28;
    {
        u8 *q = param_1 + 0x93;
        u32 one = 10;
        *(u8 *)(q) = (u8)(one);
    }
    {
        u8 *q = param_1 + 0x97;
        u32 one = 2;
        *(u8 *)(q) = (u8)(one);
    }
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_0201f4ac(param_1);
}
