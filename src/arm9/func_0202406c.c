#pragma avoid_byte strb
#include "ctx.h"

void func_0209578c(u16 *p);

void func_0202406c(u8 *param_1, u16 *param_2)
{
    u32 v;
    u32 i;
    u32 j;
    u8 *a;
    u16 *q;
    param_1[210] = 1;
    q = param_2;
    q[1] = 0;
    q[0] = 0;
    i = 0;
    v = i;
    do {
        a = (u8 *)q + i + 40;
        *a = v;
        i = (i + 1) & 255;
    } while (i < 20);
    j = v;
    do {
        *(u16 *)((u8 *)q + (j << 1) + 18) = 0;
        j = (j + 1) & 255;
    } while (j < 11);
    func_0209578c(q + 4);
    q[2] = 0;
}
