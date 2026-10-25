#include "ctx.h"
typedef volatile s32 vs32;
typedef volatile u32 vu32;
extern int data_02159034;
extern void func_0206c7d4(int a, int b, int c);
extern u64 func_02080858(void);

void func_02095428(int param_1, s16 param_2)
{
    int iVar6;
    int iVar3;
    int iVar4;
    u8 *q;
    u8 *w;
    u16 sVar1;
    u32 t1;
    u32 t2;
    u16 *pp;
    u32 s;
    u64 r;

    iVar6 = *(int *)(param_2 * 0x18 + data_02159034 + 0x144c);
    q = (u8 *)(iVar6 + 4);
    func_0206c7d4(param_1, (int)q, 0x85c);
    w = q + 1600;
    r = func_02080858();
    s = (u32)r;
    iVar3 = data_02159034;
    iVar4 = *(int *)(iVar3 + 0x141c);
    t1 = *(vu32 *)(iVar4 + 4);
    t2 = *(u32 *)(iVar4 + 8);
    *(u32 *)(q + 0x640) = t1;
    *(u32 *)(w + 4) = t2;
    iVar3 = *(vs32 *)(iVar3 + 0x141c);
    pp = (u16 *)(iVar3 + 96);
    sVar1 = pp[17];
    pp[17] = sVar1 + 1;
    *(u16 *)(iVar3 + 0x6ae) = *(u16 *)(iVar3 + 0x6ae) | 1;
    *(s16 *)(w + 8) = sVar1;
    *(s16 *)(w + 10) = s * 0x10dcd + 1;
    *(u16 *)(iVar6 + 0x8fe) = *(u16 *)(iVar6 + 0x8fe) | 1;
}
