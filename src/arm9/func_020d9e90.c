#include "ctx.h"

void func_02067e68(u8 *a, s32 *b, u8 *c);
void func_020be298(u8 *p, s32 a);
void func_02067d04(s32 *a, s32 *b, s32 *c);
void func_02006a30(s32 *a, s32 *b);
s32 func_020c8164(u32 a, s32 b);
void func_020c6300(u8 *p, s32 a, s32 *b, s32 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
void func_020da39c(void);
void func_020da014(void);
void func_020d9ff8(void);
void func_020d9fec(void);

void func_020d9e90(u8 *param_1)
{
    s32 *piVar2;
    s32 aA[3];
    s32 aB[3];
    s32 aC[3];
    s32 iVar1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 u0;
    s32 u1;
    s32 u2;

    piVar2 = *(s32 **)(param_1 + 0x214);
    *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + *(s32 *)*piVar2;
    func_02067e68(param_1 + 0xbc, (s32 *)(param_1 + 0xb0), param_1 + 0xbc);
    func_020be298(param_1, *(s32 *)(*piVar2 + 0x5c));
    t2 = *(s32 *)(param_1 + 0xd0);
    t1 = *(s32 *)(param_1 + 0xcc);
    t0 = *(s32 *)(param_1 + 0xc8);
    aA[0] = t0;
    aA[1] = t1;
    aA[2] = t2;
    u2 = *(s32 *)(param_1 + 0xdc);
    u1 = *(s32 *)(param_1 + 0xd8);
    u0 = *(s32 *)(param_1 + 0xd4);
    aB[0] = u0;
    aB[1] = u1;
    aB[2] = u2;
    func_02067d04(aA, aB, aC);
    func_02006a30(aA, aA);
    func_02006a30(aC, aC);
    func_02067d04(aC, aA, aB);
    *(s32 *)(param_1 + 0xc8) = aA[0];
    *(s32 *)(param_1 + 0xcc) = aA[1];
    *(s32 *)(param_1 + 0xd0) = aA[2];
    *(s32 *)(param_1 + 0xd4) = aB[0];
    *(s32 *)(param_1 + 0xd8) = aB[1];
    *(s32 *)(param_1 + 0xdc) = aB[2];
    *(s32 *)(param_1 + 0xe0) = aC[0];
    *(s32 *)(param_1 + 0xe4) = aC[1];
    *(s32 *)(param_1 + 0xe8) = aC[2];
    iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), (s32 *)(param_1 + 0xfc), (s32 *)(param_1 + 0x108),
                  iVar1, (u32)func_020da39c, 0, (u32)func_020da014, (u32)func_020d9ff8, (u32)func_020d9fec);
}
