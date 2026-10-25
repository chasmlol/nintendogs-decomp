#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0213b7d0;
extern u32 data_0215be34;
extern u32 data_02139f10;
extern u32 data_02139ea4;
extern void func_02026c24(int a);
extern void func_02025548(int a);
extern void func_0202da00(int a, int b);
extern void func_02081198(int a, int b, int c);
extern void func_0209eeec(int a, int b);
extern void func_02023590(int a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02163f68(u8 *param_1)
{
    int *piVar1;
    int iVar2;

    *(u16 *)(param_1 + 256 + 82) = 0;
    *(u16 *)(param_1 + 256 + 84) = 7;
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_02026c24((int)param_1);
    func_02025548((int)param_1);
    func_0202da00((int)param_1, data_0213b7d0);
    piVar1 = (int *)data_0215be34;
    iVar2 = piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0xf, *(int *)((u8 *)&data_02139f10 + *(s8 *)(param_1 + 0x88) * 4));
    piVar1 = (int *)data_0215be34;
    iVar2 = piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0x10, *(int *)((u8 *)&data_02139ea4 + *(s8 *)(param_1 + 0x88) * 4));
    func_0209eeec(0x1e, 0x7f);
    func_02023590((int)param_1);
}
