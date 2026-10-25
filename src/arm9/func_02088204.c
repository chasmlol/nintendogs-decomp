#include "ctx.h"

extern u32 data_0215602c;
extern u32 *func_02087cf8(u8 *p, s32 n);
extern s32 func_02087854(s32 *p, s32 a);

typedef struct {
    u32 w[3];
} T12;

s32 func_02088204(s32 *param_1, u8 *param_2, s32 param_3, s32 param_4)
{
    u32 loc[3];
    u32 *p;
    u8 *p2;
    s32 i;
    u32 v;
    u8 c;
    u32 flag;
    s32 *q;
    u32 l2;

    p2 = param_2;
    c = *p2;
    if (c == '/') {
        goto first;
    }
    if (c != 0x5c) {
        goto second;
    }
first:
    v = *(u32 *)&data_0215602c;
    *(u16 *)((u8 *)loc + 4) = 0;
    loc[0] = v;
    loc[2] = 0;
    *(u16 *)((u8 *)loc + 6) = 0;
    p2 = p2 + 1;
    goto after;
second:
    *(T12 *)loc = *(T12 *)&data_0215602c;
    i = 0;
loop:
    c = p2[i];
    if (c == 0) {
        goto after;
    }
    if (c == '/') {
        goto after;
    }
    if (c == 0x5c) {
        goto after;
    }
    if (c != ':') {
        goto next;
    }
    p = func_02087cf8(p2, i);
    if (p == 0) {
        return 0;
    }
    flag = (p[4] & 2) != 0;
    if (flag == 0) {
        return 0;
    }
    loc[0] = (u32)p;
    loc[2] = 0;
    *(u16 *)((u8 *)loc + 6) = 0;
    *(u16 *)((u8 *)loc + 4) = 0;
    p2 = p2 + (i + 1);
    if (p2[0] == '/' || p2[0] == 0x5c) {
        p2 = p2 + 1;
    }
    goto after;
next:
    i = i + 1;
    if (i <= 3) {
        goto loop;
    }
after:
    param_1[2] = (s32)loc[0];
    param_1[14] = (s32)p2;
    q = param_1 + 11;
    *(T12 *)q = *(T12 *)loc;
    if (param_4 != 0) {
        param_1[15] = 1;
        param_1[16] = param_4;
    } else {
        param_1[15] = 0;
        param_1[16] = param_3;
    }
    return func_02087854(param_1, 4);
}
