#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_0202c0ec(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

void func_0201de58(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 292;
    *(u8 *)(param_1 + 151) = 4;
    func_02026bac(param_1);
    func_02025bb0(param_1);
    func_0202c0ec(param_1);
    func_02023654(param_1, 0x27, 1);
}
