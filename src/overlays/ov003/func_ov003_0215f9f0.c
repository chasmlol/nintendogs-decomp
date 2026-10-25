#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214f464[];
extern u8 data_0213b7d0[];
extern int data_0215be34;
extern u32 data_02139ee0[];
extern void func_02026c24(int p);
extern void func_02025548(int p);
extern void func_0202da00(int p, int a);
extern void func_02081198(int a, int b, void *c);
extern void func_02023590(int p);
extern void func_020a1a40(int v);

/* swpb cannot be written in C; this helper swaps the byte at p with v (old byte goes to r1) and is inlined */
static inline void SwapOldR1(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0215f9f0(int param_1)
{
    int *piVar1;
    int iVar2;
    u32 *lr;
    u32 r12;
    u16 t;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x4c;
    lr = *(u32 **)data_0214f464;
    r12 = *lr * 0x10dcd + 1;
    *lr = r12;
    t = (u16)((r12 << 16) >> 31);
    *(u16 *)((u8 *)param_1 + 256 + 84) = t + 73;
    SwapOldR1(4, (vu8 *)(param_1 + 151));
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(int *)(data_0213b7d0 + 0x10));
    piVar1 = (int *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x73, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (int *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x72, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (int *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x74, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
