#include "ctx.h"

extern void func_02067e68(u8 *a, u8 *b, u8 *c);
extern void func_020be298(u8 *p, u32 a);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);
extern s32 func_020c8164(u32 a, u32 b);
extern s32 func_020c6300(u8 *p, u32 a, u32 b, u32 c, s32 d, void *e, void *f, u32 g, void *h, void *i);
extern void func_020f3898(void);
extern void func_020f3700(void);
extern void func_020f36e8(void);
extern void func_020f36dc(void);

void func_020f3590(u8 *param_1)
{
    s32 iVar1;
    u32 vA[3];
    u32 vB[3];
    u32 vC[3];
    u32 t0;
    u32 t1;
    u32 t2;
    u32 b0;
    u32 b1;
    u32 b2;

    *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) - 82;
    func_02067e68(param_1 + 0xbc, param_1 + 0xb0, param_1 + 0xbc);
    func_020be298(param_1, 0x1ff8);
    t2 = *(u32 *)(param_1 + 0xd0);
    t1 = *(u32 *)(param_1 + 0xcc);
    t0 = *(u32 *)(param_1 + 0xc8);
    vA[0] = t0;
    vA[1] = t1;
    vA[2] = t2;
    b2 = *(u32 *)(param_1 + 0xdc);
    b1 = *(u32 *)(param_1 + 0xd8);
    b0 = *(u32 *)(param_1 + 0xd4);
    vB[0] = b0;
    vB[1] = b1;
    vB[2] = b2;
    func_02067d04(vA, vB, vC);
    func_02006a30(vA, vA);
    func_02006a30(vC, vC);
    func_02067d04(vC, vA, vB);
    *(u32 *)(param_1 + 0xc8) = vA[0];
    *(u32 *)(param_1 + 0xcc) = vA[1];
    *(u32 *)(param_1 + 0xd0) = vA[2];
    *(u32 *)(param_1 + 0xd4) = vB[0];
    *(u32 *)(param_1 + 0xd8) = vB[1];
    *(u32 *)(param_1 + 0xdc) = vB[2];
    *(u32 *)(param_1 + 0xe0) = vC[0];
    *(u32 *)(param_1 + 0xe4) = vC[1];
    *(u32 *)(param_1 + 0xe8) = vC[2];
    iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), 0, 0, iVar1, (void *)func_020f3898,
                  (void *)func_020f3700, 0, (void *)func_020f36e8, (void *)func_020f36dc);
}
