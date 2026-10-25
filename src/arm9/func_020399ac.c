#pragma avoid_byte strb
#include "ctx.h"

extern void func_02039a28(u8 *a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_020399ac(u8 *param_1)
{
    param_1[151] = 0;
    func_02039a28(param_1, 2, 12, 21, 7, 100);
}
