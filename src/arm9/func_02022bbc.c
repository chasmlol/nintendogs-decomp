#include "ctx.h"

s32 func_02022bbc(u8 *param_1)
{
    s32 flag;
    s32 v;
    u32 lo;
    s16 i;
    u32 key;
    u8 *e;
    s32 r;

    v = *(s16 *)(param_1 + 240);
    flag = 0;
    if (v <= 12) {
        goto chk;
    }
    if (v < 111) {
        flag = 1;
    }
chk:
    if (flag == 0) goto ret0;
    lo = (u16)(v - 12);
    key = param_1[0xa5];
    i = 0;
loop:
    if (i < 0 || i >= 20) {
        e = 0;
    } else {
        e = *(u8 **)(param_1 + 0x9e8) + 144 + i * 60;
    }
    if (e == 0) goto next;
    if (*(u16 *)e != lo) goto next;
    if (e[0x28] == key) goto found;
next:
    i = (s16)(i + 1);
    if (i < 20) goto loop;
    i = -1;
found:
    if (i < 0) goto zero;
    if (i < 20) goto inr;
zero:
    e = 0;
    goto chkE;
inr:
    e = *(u8 **)(param_1 + 0x9e8) + 144 + i * 60;
chkE:
    if (e == 0) goto ret0;
    r = (s16)((((s32)(*(u16 *)(e + 2) * 1229)) >> 12) + 60);
    if (r > 1500) {
        r = 1500;
    }
    return r;
ret0:
    return 0;
}
