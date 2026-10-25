#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);

void func_0201fa3c(u8 *param_1)
{
    s16 k;
    u32 v;
    u8 *q;
    vu8 *p;
    k = 0x195;
    q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    p = (vu8 *)(param_1 + 151);
    v = 2;
    *(u8 *)(p) = (u8)(v);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 0x2f, 2);
}
