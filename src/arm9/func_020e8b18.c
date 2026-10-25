#include "ctx.h"

typedef struct { u32 w[3]; } V3;

extern void func_02067e68(u8 *a, u8 *b, u8 *c);
extern void func_020be298(u8 *p, u32 a);
extern void func_02067d04(V3 *a, V3 *b, V3 *c);
extern void func_02006a30(V3 *a, V3 *b);
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(u8 *p, u32 a, u8 *b, u8 *c, ...);
extern void func_020e8d24(void);
extern void func_020e8cf0(void);
extern void func_020e8cd4(void);
extern void func_020e8c74(void);

void func_020e8b18(u8 *p)
{
    s32 t;
    V3 va, vb, vc;
    u32 *piVar2;
    u32 a2, a1, a0, b2, b1, b0;

    piVar2 = *(u32 **)(p + 0x214);
    *(u32 *)(p + 0xb4) = *(u32 *)(0xb4 + p) + *(u32 *)(*piVar2);
    func_02067e68(0xbc + p, p + 0xb0, p + 0xbc);
    func_020be298(p, *(u32 *)(*piVar2 + 0x5c));
    a2 = *(u32 *)(p + 0xd0);
    a1 = *(u32 *)(p + 0xcc);
    a0 = *(u32 *)(p + 0xc8);
    va.w[0] = a0;
    va.w[1] = a1;
    va.w[2] = a2;
    b2 = *(u32 *)(p + 0xdc);
    b1 = *(u32 *)(p + 0xd8);
    b0 = *(u32 *)(p + 0xd4);
    vb.w[0] = b0;
    vb.w[1] = b1;
    vb.w[2] = b2;
    func_02067d04(&va, &vb, &vc);
    func_02006a30(&va, &va);
    func_02006a30(&vc, &vc);
    func_02067d04(&vc, &va, &vb);
    *(u32 *)(p + 0xc8) = va.w[0];
    *(u32 *)(0xcc + p) = va.w[1];
    *(u32 *)(p + 0xd0) = va.w[2];
    *(u32 *)(p + 0xd4) = vb.w[0];
    *(u32 *)(0xd8 + p) = vb.w[1];
    *(u32 *)(p + 0xdc) = vb.w[2];
    *(u32 *)(0xe0 + p) = vc.w[0];
    *(u32 *)(p + 0xe4) = vc.w[1];
    *(u32 *)(p + 0xe8) = vc.w[2];
    t = func_020c8164(*(u16 *)(160 + p), *(u32 *)(p + 0xf8));
    func_020c6300(p, *(u32 *)(p + 0xf8), p + 252, p + 264, t, func_020e8d24, 0u, (u32)func_020e8cf0, func_020e8cd4, func_020e8c74);
}
