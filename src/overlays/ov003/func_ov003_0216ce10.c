#pragma avoid_byte strb
#include "ctx.h"

void func_02026bac(s32 p);
void func_02025548(s32 p);
void func_0202db24(s32 p, u32 a);

void func_ov003_0216ce10(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 608;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
