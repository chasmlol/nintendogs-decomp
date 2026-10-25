#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off
extern void func_0205f050(u32 a, u32 b, u32 c, u32 d);
extern u8 data_0212eaf4[];
extern u8 data_0213ebe0[];
extern u8 data_0213ebe4[];
void func_0208be7c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 auStack_20[4];
    func_0205f050((u32)auStack_20, 16, (u32)data_0213ebe0, *(u32 *)(data_0212eaf4 + param_3 * 12));
    {
        u32 v = *(u8 *)&auStack_20[1] + param_4;
        u8 *q = (u8 *)&auStack_20[1];
        u32 c2 = (u32)data_0213ebe4;
        *(u8 *)(q) = (u8)(v);
        func_0205f050(param_1, param_2, c2, (u32)auStack_20);
        return;
    }
}
