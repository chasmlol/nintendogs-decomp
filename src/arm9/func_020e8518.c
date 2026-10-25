#include "ctx.h"

extern void func_02067e68(u8 *a, u8 *b, u8 *c);
extern void func_020be298(u8 *p, s32 a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern s32 func_020c8164(s32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, u8 *b, u8 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020e8868(void);
extern void func_020e8834(void);
extern void func_020e8818(void);
extern void func_020e880c(void);

void func_020e8518(u8 *param_1)
{
    u8 *piVar2;
    s32 iVar1;
    s32 vA[3];
    s32 vB[3];
    s32 vC[3];

    piVar2 = *(u8 **)(param_1 + 0x214);
    *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + *(s32 *)(*(u8 **)piVar2);
    func_02067e68(param_1 + 0xbc, param_1 + 0xb0, param_1 + 0xbc);
    func_020be298(param_1, *(s32 *)(*(u8 **)piVar2 + 0x5c));
    {
        int t2 = *(s32 *)(param_1 + 0xd0);
        s32 t1 = *(s32 *)(param_1 + 0xcc);
        s32 t0 = *(s32 *)(param_1 + 0xc8);
        vA[0] = t0;
        vA[1] = t1;
        vA[2] = t2;
    }
    {
        s32 u2 = *(s32 *)(param_1 + 0xdc);
        s32 u1 = *(s32 *)(param_1 + 0xd8);
        s32 u0 = *(s32 *)(param_1 + 0xd4);
        vB[0] = u0;
        vB[1] = u1;
        vB[2] = u2;
    }
    func_02067d04(vA, vB, vC);
    func_02006a30(vA, vA);
    func_02006a30(vC, vC);
    func_02067d04(vC, vA, vB);
    *(s32 *)(param_1 + 0xc8) = vA[0];
    *(s32 *)(param_1 + 0xcc) = vA[1];
    *(s32 *)(param_1 + 0xd0) = vA[2];
    *(s32 *)(param_1 + 0xd4) = vB[0];
    *(s32 *)(param_1 + 0xd8) = vB[1];
    *(s32 *)(param_1 + 0xdc) = vB[2];
    *(s32 *)(param_1 + 0xe0) = vC[0];
    *(s32 *)(param_1 + 0xe4) = vC[1];
    *(s32 *)(param_1 + 0xe8) = vC[2];
    iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1,
                  (u32)func_020e8868, 0, (u32)func_020e8834, (u32)func_020e8818, (u32)func_020e880c);
}
