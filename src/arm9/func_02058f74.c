#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u32 func_020256a0(u8 *p);
extern void func_0202c0ec(u8 *p);

void func_02058f74(u8 *param_1)
{
    u8 *t;
    u32 old;
    u32 v;
    *(u16 *)(param_1 + 256 + 82) = 246;
    t = param_1 + 151;
    v = 1;
    *(u8 *)(t) = (u8)(v);
    func_02026bac(param_1);
    func_020256a0(param_1);
    func_0202c0ec(param_1);
}
