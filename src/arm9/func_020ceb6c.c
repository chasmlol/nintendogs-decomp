#include "ctx.h"

typedef struct { u32 w[10]; } T10;

extern u32 data_02142e4c;

extern void func_020d075c(u8 *p, s32 m);
extern void func_020d1174(u8 *p);
extern void func_020d0858(u8 *p);
extern void func_020d0824(u8 *p, u32 *out);
extern s32 func_02067898(s32 a, s32 b);
extern void func_020d0564(u8 *d, u8 *s, u32 *t, s32 a, s32 b, s32 c);

void func_020ceb6c(u8 *p, s32 p2)
{
    T10 local;
    s32 iv;

    switch (*(u16 *)p) {
    case 0:
        *(s32 *)(p + 0x6c) = *(s32 *)(p + 0x6c) - 1;
        if (*(s32 *)(p + 0x6c) <= 0) {
            *(u16 *)p = 1;
        }
        func_020d075c(p + 4, p2);
        return;
    case 1:
        func_020d1174(p + 0x2c);
        func_020d0858(p + 0x2c);
        func_020d0824(p + 0x2c, (u32 *)(p + 4));
        func_020d075c(p + 4, p2);
        return;
    case 2:
        func_020d1174(p + 0x2c);
        func_020d0858(p + 0x2c);
        func_020d0824(p + 0x2c, local.w);
        if (*(s32 *)(p + 0x6c) > 0) {
            *(s32 *)(p + 0x6c) = *(s32 *)(p + 0x6c) - 1;
            iv = func_02067898(data_02142e4c - *(s32 *)(p + 0x6c), data_02142e4c);
            func_020d0564(p + 4, p + 4, local.w, iv, iv, iv);
        } else {
            *(T10 *)(p + 4) = local;
        }
        func_020d075c(p + 4, p2);
        return;
    }
}
