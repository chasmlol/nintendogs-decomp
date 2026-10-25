#pragma avoid_byte strb
#include "ctx.h"

void func_02026c24(int p);
void func_02025a84(int p);
void func_0201f4ac(int p);

void func_0201f41c(int param_1)
{
    u8 *base;
    u16 *q;
    u8 *p;
    u32 ten;
    u32 two;
    u32 v;

    base = (u8 *)param_1;
    v = 0x27;
    q = (u16 *)(base + 0x100);
    q[41] = v;
    p = base + 0x93;
    ten = 10;
    *(u8 *)(p) = (u8)(ten);
    p = base + 0x97;
    two = 2;
    *(u8 *)(p) = (u8)(two);
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_0201f4ac(param_1);
}
