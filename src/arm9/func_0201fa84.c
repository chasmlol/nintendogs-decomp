#pragma avoid_byte strb
#include "ctx.h"

void func_02026c24(int p);
void func_02025548(int p);
void func_02023654(int p, int a, int b);

void func_0201fa84(int param_1)
{
    u8 *base;
    u16 *q;
    u8 *p;
    u32 two;
    u32 v;

    base = (u8 *)param_1;
    v = 0x194;
    q = (u16 *)(base + 0x100);
    q[41] = v;
    p = base + 0x97;
    two = 2;
    *(u8 *)(p) = (u8)(two);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 0x2f, 1);
}
