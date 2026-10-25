#pragma avoid_byte strb
#include "ctx.h"

void func_020264f4(int p);
void func_020255a4(int p);
void func_0202db24(int p, int v);

void func_ov003_0216ac48(int param_1)
{
    u8 *base;
    u16 *q;
    u8 *p;
    u32 four;
    u32 v;

    base = (u8 *)param_1;
    v = 0x25;
    q = (u16 *)(base + 0x100);
    q[41] = v;
    p = base + 0x97;
    four = 4;
    *(u8 *)(p) = (u8)(four);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 1);
}
