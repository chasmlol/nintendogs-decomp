#include "ctx.h"
extern void func_020f10f8(void);
extern void func_020f10c4(void);
extern void func_020f10a8(void);
extern void func_020f109c(void);
extern void func_02067e68(u8 *a, u8 *b, u8 *c);
extern void func_020be298(u8 *p, s32 a);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);
extern s32 func_020c8164(u32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, u8 *b, u8 *c, s32 d, void *e, s32 f, void *g, void *h, void *i);

void func_020f0dac(u8 *param_1)
{
    u32 *piVar2;
    u32 a[9];
    s32 iVar1;
    u32 t0, t1, t2, t3, t4, t5;

    piVar2 = *(u32 **)(param_1 + 0x214);
    *(u32 *)(param_1 + 0xb4) = *(u32 *)(param_1 + 0xb4) + *(u32 *)*piVar2;
    func_02067e68(param_1 + 0xbc, param_1 + 0xb0, param_1 + 0xbc);
    func_020be298(param_1, *(s32 *)(*(u8 **)piVar2 + 0x5c));
    t2 = *(u32 *)(param_1 + 0xd0);
    t1 = *(u32 *)(param_1 + 0xcc);
    t0 = *(u32 *)(param_1 + 0xc8);
    a[0] = t0;
    a[1] = t1;
    a[2] = t2;
    t5 = *(u32 *)(param_1 + 0xdc);
    t4 = *(u32 *)(param_1 + 0xd8);
    t3 = *(u32 *)(param_1 + 0xd4);
    a[3] = t3;
    a[4] = t4;
    a[5] = t5;
    func_02067d04(&a[0], &a[3], &a[6]);
    func_02006a30(&a[0], &a[0]);
    func_02006a30(&a[6], &a[6]);
    func_02067d04(&a[6], &a[0], &a[3]);
    *(u32 *)(param_1 + 0xc8) = a[0];
    *(u32 *)(param_1 + 0xcc) = a[1];
    *(u32 *)(param_1 + 0xd0) = a[2];
    *(u32 *)(param_1 + 0xd4) = a[3];
    *(u32 *)(param_1 + 0xd8) = a[4];
    *(u32 *)(param_1 + 0xdc) = a[5];
    *(u32 *)(param_1 + 0xe0) = a[6];
    *(u32 *)(param_1 + 0xe4) = a[7];
    *(u32 *)(param_1 + 0xe8) = a[8];
    iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1,
                  (void *)func_020f10f8, 0, (void *)func_020f10c4, (void *)func_020f10a8,
                  (void *)func_020f109c);
}
