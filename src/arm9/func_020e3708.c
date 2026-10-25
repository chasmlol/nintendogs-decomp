#include "ctx.h"

extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);

void func_020e3708(u8 *param_1)
{
    s32 X[3];
    s32 Y[3];
    s32 Z[3];
    u8 *iVar1;
    s32 t0, t1, t2;

    iVar1 = *(u8 **)(param_1 + 0x214);
    t2 = *(s32 *)(param_1 + 0xd0);
    t1 = *(s32 *)(param_1 + 0xcc);
    t0 = *(s32 *)(param_1 + 0xc8);
    X[0] = t0;
    X[1] = t1;
    X[2] = t2;
    t2 = *(s32 *)(param_1 + 0xdc);
    t1 = *(s32 *)(param_1 + 0xd8);
    t0 = *(s32 *)(param_1 + 0xd4);
    Y[0] = t0;
    Y[1] = t1;
    Y[2] = t2;
    func_02067d04(X, Y, Z);
    func_02006a30(X, X);
    func_02006a30(Z, Z);
    func_02067d04(Z, X, Y);
    *(s32 *)(param_1 + 0xc8) = X[0];
    *(s32 *)(param_1 + 0xcc) = X[1];
    *(s32 *)(param_1 + 0xd0) = X[2];
    *(s32 *)(param_1 + 0xd4) = Y[0];
    *(s32 *)(param_1 + 0xd8) = Y[1];
    *(s32 *)(param_1 + 0xdc) = Y[2];
    *(s32 *)(param_1 + 0xe0) = Z[0];
    *(s32 *)(param_1 + 0xe4) = Z[1];
    *(s32 *)(param_1 + 0xe8) = Z[2];
    *(s32 *)(iVar1 + 0x1c) = 0;
    *(s32 *)(iVar1 + 0x20) = 0;
    *(s32 *)(iVar1 + 0x24) = 0;
}
