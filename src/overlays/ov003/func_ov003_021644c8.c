#pragma avoid_byte strb
#include "ctx.h"

void func_02026638(int p);
void func_02025bb0(int p);
void func_ov003_02164558(int p);

void func_ov003_021644c8(int param_1)
{
    u8 *base;
    u16 *q;
    u8 *p;
    u32 five;
    u32 two;
    u32 v;

    base = (u8 *)param_1;
    v = 0x10;
    q = (u16 *)(base + 0x100);
    q[41] = v;
    p = base + 0x93;
    five = 5;
    *(u8 *)(p) = (u8)(five);
    p = base + 0x97;
    two = 2;
    *(u8 *)(p) = (u8)(two);
    func_02026638(param_1);
    func_02025bb0(param_1);
    func_ov003_02164558(param_1);
}
