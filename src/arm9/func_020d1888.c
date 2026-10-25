#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;

extern s32 func_020bcf08(s32 a);
extern s32 func_020bc990(void);
extern void func_020cf9c8(u8 *p, u32 a, s32 b, u32 c);
extern void func_020cf9bc(u8 *p);
extern void func_020be07c(void);
extern void func_020d1da0(u8 *p);
extern void func_020d1e7c(u8 *p);

#pragma opt_propagation off
void func_020d1888(u8 *p)
{
    s32 v;
    u32 u;
    u32 q;

    q = (u32)p + 96;
    *(u32 *)(q + 8) = 0;
    *(u32 *)(p + 0x60) = 1200;
    *(u32 *)(p + 0x68) = 0;
    if (*(u32 *)(p + 0x70) != 0) {
        *(u32 *)(p + 0x70) = 0;
        *(u32 *)(p + 0x6c) = 1;
        func_020cf9c8(p, 20, -1, 0);
        func_020cf9bc(p);
        func_020be07c();
        return;
    }
    v = func_020bcf08(*(s16 *)(data_02159444 + 0x7c));
    if (v == 0) {
        goto c3;
    }
    if (v != 1) {
        goto c2;
    }
c3:
    if (func_020bc990() != 0) {
        u = 3;
        goto go;
    }
c2:
    u = 2;
go:
    func_020cf9c8(p, u, -1, 0);
    *(u32 *)(p + 0x6c) = 0;
    if (func_020bc990() == 0) {
        return;
    }
    v = func_020bcf08(*(s16 *)(data_02159444 + 0x7c));
    if (v == 11) {
        goto c11;
    }
    if (v == 12) {
        goto c12;
    }
    return;
c11:
    func_020d1da0(p);
    return;
c12:
    func_020d1e7c(p);
    return;
}
