#include "ctx.h"

extern void func_02067e68(u32 *a, u32 *b, u32 *c);
extern void func_020be298(u8 *p, int v);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);
extern int func_020c8164(int a, int b);
extern void func_020c6300(u8 *p, int a, int b, int c, int d, void *e, void *f, int g, void *h, void *i);
extern void func_020eb4c0(void);
extern void func_020eb45c(void);
extern void func_020eb448(void);
extern void func_020eb43c(void);

void func_020eb2f0(u8 *param_1)
{
    int iVar1;
    u32 X[3];
    u32 Y[3];
    u32 Z[3];

    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) - 82;
    func_02067e68((u32 *)(param_1 + 188), (u32 *)(param_1 + 176), (u32 *)(param_1 + 188));
    func_020be298(param_1, 0x2802);
    {
        u32 a2 = *(u32 *)(param_1 + 0xd0);
        u32 a1 = *(u32 *)(param_1 + 0xcc);
        X[0] = *(u32 *)(param_1 + 0xc8);
        X[1] = a1;
        X[2] = a2;
    }
    {
        u32 b2 = *(u32 *)(param_1 + 0xdc);
        u32 b1 = *(u32 *)(param_1 + 0xd8);
        Y[0] = *(u32 *)(param_1 + 0xd4);
        Y[1] = b1;
        Y[2] = b2;
    }
    func_02067d04(X, Y, Z);
    func_02006a30(X, X);
    func_02006a30(Z, Z);
    func_02067d04(Z, X, Y);
    *(u32 *)(param_1 + 0xc8) = X[0];
    *(u32 *)(param_1 + 0xcc) = X[1];
    *(u32 *)(param_1 + 0xd0) = X[2];
    *(u32 *)(param_1 + 0xd4) = Y[0];
    *(u32 *)(param_1 + 0xd8) = Y[1];
    *(u32 *)(param_1 + 0xdc) = Y[2];
    *(u32 *)(param_1 + 0xe0) = Z[0];
    *(u32 *)(param_1 + 0xe4) = Z[1];
    *(u32 *)(param_1 + 0xe8) = Z[2];
    iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(int *)(param_1 + 0xf8));
    func_020c6300(param_1, *(int *)(param_1 + 0xf8), 0, 0, iVar1,
                  (void *)func_020eb4c0, (void *)func_020eb45c, 0,
                  (void *)func_020eb448, (void *)func_020eb43c);
}
