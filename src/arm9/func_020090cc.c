#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u8 pad0[0x4c]; s32 f4c; s32 f50; s32 f54; s32 f58; s32 f5c; s32 f60; s32 f64; s32 f68; s32 f6c; } Gobj;

extern Gobj data_02152cd8;
extern s32 func_02028130(u8 *p);
extern void func_01ff832c(u32 a, u32 *b, u32 *c, u32 *d);

void func_020090cc(u8 *p1, u8 *p2, s32 *p3, s32 *p4)
{
    u32 A[3];
    u32 B[6];
    s32 t50, t5c, t68, t54, t60, t6c;
    s32 iv;

    {
        volatile Gobj *g = &data_02152cd8;
        t50 = g->f50;
        t5c = g->f5c;
        t68 = g->f68;
        t54 = g->f54;
        t60 = g->f60;
        t6c = g->f6c;
    }
    B[0] = t50;
    B[1] = t5c;
    B[4] = t60;
    B[5] = t6c;
    B[2] = t68;
    B[3] = t54;
    iv = *p4;
    A[0] = FX_Mul(data_02152cd8.f4c, iv);
    A[1] = FX_Mul(data_02152cd8.f58, iv);
    A[2] = FX_Mul(data_02152cd8.f64, iv);
    func_01ff832c(p4[1], B, A, A);
    func_01ff832c(p4[2], &B[3], A, A);
    func_01ff832c(func_02028130(p1), A, (u32 *)p3, A);
    if (p2 != 0) {
        *(u32 *)(p2 + 0x20) = A[0] + *(u32 *)(*(u8 **)(*(u8 **)(p2 + 0x18)) + 4);
        *(u32 *)(p2 + 0x24) = A[1] + *(u32 *)(*(u8 **)(*(u8 **)(p2 + 0x18)) + 8);
        *(u32 *)(p2 + 0x28) = A[2] + *(u32 *)(*(u8 **)(*(u8 **)(p2 + 0x18)) + 0xc);
        *(s32 *)(p2 + 0x54) = (s16)func_02028130(p1);
    }
}
