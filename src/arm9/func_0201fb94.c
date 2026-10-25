#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026c24(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
void func_0201fb94(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x3c;
    {
        u8 *q = param_1 + 0x97;
        u32 one = 2;
        *(u8 *)(q) = (u8)(one);
    }
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_02023654(param_1, 0x2d, 1);
}
