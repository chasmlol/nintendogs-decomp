#include "ctx.h"

extern u32 data_0214e6ec;
extern void func_020028d8(void *, u32, u32);
extern void func_0200289c(void *);

u32 func_0200237c(s32 mode, void *p, s32 flag, s32 x)
{
    if (mode == 0) goto m0;
    if (mode != 1) goto ret1;
    if (flag == 0 && (u32)(*(u32 *)0x027ffc3c - data_0214e6ec) <= 7) {
        return 0;
    }
    if (p != NULL) {
        if (x != 0) {
            func_0200289c(p);
        } else {
            func_020028d8(p, 0, 0);
        }
    }
    *(u16 *)0x04000304 |= 1;
    goto ret1;
m0:
    *(u16 *)0x04000304 &= ~1;
    data_0214e6ec = *(u32 *)0x027ffc3c;
    if (p != NULL) {
        if (x != 0) {
            func_0200289c(p);
        } else {
            func_020028d8(p, 0, 0);
        }
    }
ret1:
    return 1;
}
