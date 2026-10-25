#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(s32 p);
extern void func_02025548(s32 p);
extern void func_02020768(s32 p);

void func_ov003_021670d8(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 76;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 28;
    *((u8 *)param_1 + 147) = 5;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
