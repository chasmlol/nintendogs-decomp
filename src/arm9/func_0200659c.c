#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214f004[];
extern void func_02006fe8(u8 *p, s32 v);

typedef struct {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
    u16 s8;
    u16 s10;
    u16 s12;
    u16 s14;
    u32 pad;
} Frame;

void func_0200659c(void)
{
    Frame f;
    u16 c;

    func_02006fe8((u8 *)&f, 1);
    c = f.c;
    if (c == 0) {
        u16 o0;
        u16 a;
        u16 b;
        u16 s;
        u16 t;

        o0 = *(u16 *)data_0214f004;
        t = *(u16 *)(data_0214f004 + 2);
        a = f.a;
        *(u16 *)(data_0214f004 + 2) = 0;
        b = f.b;
        f.s10 = t;
        data_0214f004[0] = (u8)a;
        s = f.s10;
        data_0214f004[1] = (u8)b;
        f.s8 = o0;
        if (s & 1) {
            *(u16 *)(data_0214f004 + 2) = *(u16 *)(data_0214f004 + 2) | 4;
        }
        return;
    }
    if (f.d != 0) {
        return;
    }
    {
        u16 o0;
        u16 t;
        u16 a;
        u16 b;

        o0 = *(u16 *)data_0214f004;
        t = *(u16 *)(data_0214f004 + 2);
        a = f.a;
        *(u16 *)(data_0214f004 + 2) = 0x8000;
        b = f.b;
        data_0214f004[0] = (u8)a;
        data_0214f004[1] = (u8)b;
        f.s14 = t;
        f.s12 = o0;
        if (c == 1) {
            *(u16 *)(data_0214f004 + 2) = *(u16 *)(data_0214f004 + 2) | 1;
        }
        if (!(f.s14 & 1)) {
            *(u16 *)(data_0214f004 + 2) = *(u16 *)(data_0214f004 + 2) | 2;
        }
    }
}
