#include "ctx.h"

extern void func_020bd858(u8 *p);
extern void func_020da4d0(u8 *p);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);

void func_020da3b4(u8 *param_1)
{
    u32 v0[3];
    u32 v1[3];
    u32 v2[3];
    u32 t2;
    u32 t1;
    u32 t0;
    u32 u2;
    u32 u1;
    u32 u0;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        func_020bd858(param_1);
        return;
    case 1:
        t2 = *(u32 *)(param_1 + 0xd0);
        t1 = *(u32 *)(param_1 + 0xcc);
        t0 = *(u32 *)(param_1 + 0xc8);
        v0[0] = t0;
        v0[1] = t1;
        v0[2] = t2;
        u2 = *(u32 *)(param_1 + 0xdc);
        u1 = *(u32 *)(param_1 + 0xd8);
        u0 = *(u32 *)(param_1 + 0xd4);
        v1[0] = u0;
        v1[1] = u1;
        v1[2] = u2;
        func_02067d04(v0, v1, v2);
        func_02006a30(v0, v0);
        func_02006a30(v2, v2);
        func_02067d04(v2, v0, v1);
        *(u32 *)(param_1 + 0xc8) = v0[0];
        *(u32 *)(param_1 + 0xcc) = v0[1];
        *(u32 *)(param_1 + 0xd0) = v0[2];
        *(u32 *)(param_1 + 0xd4) = v1[0];
        *(u32 *)(param_1 + 0xd8) = v1[1];
        *(u32 *)(param_1 + 0xdc) = v1[2];
        *(u32 *)(param_1 + 0xe0) = v2[0];
        *(u32 *)(param_1 + 0xe4) = v2[1];
        *(u32 *)(param_1 + 0xe8) = v2[2];
        return;
    case 2:
        func_020da4d0(param_1);
        return;
    case 3:
        *(u32 *)(param_1 + 0xa8) = 0;
    }
}
